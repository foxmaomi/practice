#include"ScanManager.h"
#include"Sysutil.h"

ScanManager::ScanManager()
{}
void ScanManager::StartScan(const string& path)
{
	while (1)
	{
		//等待3秒后在扫描
		this_thread::sleep_for(chrono::seconds(3));
		ScanDirectory(path);
	}
}

ScanManager& ScanManager::CreateInstance(const string& path)
{
	static ScanManager inst;
	thread scan_thread(&StartScan, &inst, path);
	scan_thread.detach();
	return inst;
}

void ScanManager::ScanDirectory(const string& path)
{
	//1扫描本地文件系统
	vector<string> local_files;   //subfiles
	vector<string> local_dirs;    //subdirs
	DirectionList(path, local_files, local_dirs);
	set<string> local_set;
	local_set.insert(local_files.begin(), local_files.end());
	local_set.insert(local_dirs.begin(), local_dirs.end());

	//2扫描数据库文件系统
	DataManager& m_db = DataManager::GetInstance();

	multiset<string> db_set;
	m_db.GetDocs(path, db_set);

	//3对比本地文件与数据库文件
	auto local_it = local_set.begin();
	auto db_it = db_set.begin();
	while (local_it != local_set.end() && db_it != db_set.end())
	{
		if (*local_it < *db_it)
		{
			//本地文件存在，数据库文件不存在，则数据库新增文件
			m_db.InsertDoc(path, *local_it);
			local_it++;
		}
		else if (*local_it > * db_it)
		{
			//本地文件不存在，数据库文件存在，则数据库删除文件
			m_db.DeleteDoc(path, *db_it);
			db_it++;
		}
		else
		{
			//本地文件存在，数据库文件存在，则数据库文件不需要任何操作
			local_it++;
			db_it++;
		}
	}
	while (local_it != local_set.end())
	{
		//本地文件存在，数据库文件不存在，则数据库新增文件
		m_db.InsertDoc(path, *local_it);
		local_it++;
	}
	while (db_it != db_set.end())
	{
		//本地文件不存在，数据库文件存在，则数据库删除文件
		m_db.DeleteDoc(path, *db_it);
		db_it++;
	}
	//递归遍历子目录
	// 
	for (const auto& dir : local_dirs)
	{
		string dir_path = path;    //D:\\比特\\practice  仓库\\项目\\Confastswitch 
		dir_path += "\\";      //D:\\比特\\practice  仓库\\项目\\Confastswitch\\ 
		dir_path += dir;  //D:\\比特\\practice  仓库\\项目\\Confastswitch 
		ScanDirectory(dir_path);
	}
}