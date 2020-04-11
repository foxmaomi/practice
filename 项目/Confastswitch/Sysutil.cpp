#include"Sysutil.h"

void DirectionList(const string& path, vector<string>& subfile, vector<string>& subdir)
{
	string _path = path; //"D:\\比特\\practice  仓库\\项目\\Confastswitch";
	_path += "\\*.*";    //"D:\\比特\\practice  仓库\\项目\\Confastswitch";
	_finddata_t file;
	long handle = _findfirst(_path.c_str(), &file);//搜索path路径
	if (handle == -1)
	{
		perror("_findfirst");//日志系统
		return;
	}
	do
	{
		if (strcmp(file.name, ".") == 0 || strcmp(file.name, "..") == 0)
			continue;
		if (file.attrib & _A_SUBDIR)
		{
			//目录
			//cout << file.name << endl;
			//string tmp_path = path;//"D:\\比特\\practice  仓库\\项目\\Confastswitch";
			//tmp_path += "\\";
			//tmp_path += file.name;
			//DirectionList(tmp_path);
			subdir.push_back(file.name);
		}
		else
			//cout << file.name << endl;
			subfile.push_back(file.name);
	} while (_findnext(handle,&file)==0);
	_findclose(handle);
}













//void DirectionList(const string& path)
//{
//	string _path = path;//"D:\\比特\\practice  仓库\\项目\\Confastswitch";
//	_path += "\\*.*";//"D:\\比特\\practice  仓库\\项目\\Confastswitch\\*.*";
//	_finddata_t file;
//	long handle = _findfirst(_path.c_str(),&file);//搜索path路径下的第一个文件
//	if (handle == -1)
//	{
//		perror("_findfirst");   //日志系统
//		return;
//     }
//	do
//	{
//		//if (file.name[0] == '.')   //skip  .and..
//		if(strcmp(file.name,(char*)".")==0||strcmp(file.name,(char*)"..")==0)
//		     continue;
//		if (file.attrib & _A_SUBDIR)
//		{
//			//目录
//			cout << file.name << endl;
//			string tmp_path = path;//"D:\\比特\\practice  仓库\\项目\\Confastswitch";
//			tmp_path += "\\";//"D:\\比特\\practice  仓库\\项目\\Confastswitch\\";
//			tmp_path += file.name; //"D:\\比特\\practice  仓库\\项目\\Confastswitch\\file.name";
//			DirectionList(tmp_path);
//		}
//		cout << file.name << endl;
//	} while (_findnext(handle, &file) == 0);
//	_findclose(handle);
//}