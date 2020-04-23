#include"Sysutil.h"

void DirectionList(const string& path)
{
	string _path = path;   //E:\\大二下\\数字电路\\ppt
	_path += "\\*.*";       //E:\\大二下\\数字电路\\ppt\\*.*   任何一个文件
	
	_finddata_t file;
	long handle = _findfirst(_path.c_str(), &file); //  搜索path路径下的第一个文件
	if (handle == 1)
	{
		perror("_findfirst");   //不仅仅是打印，要使用日志
		return;
	}
	do 
	{
		//if (file.name[0] == '.')    //skip  .and..  缺陷会将以.开头的文件
		if(strcmp(file.name,(char*)'.') == 0 || strcmp(file.name,(char*)'..') == 0)
			continue;
		cout << file.name << endl;
	} while (_findnext(handle,&file) == 0);
	_findclose(handle);
}