#include"Sysutil.h"

void DirectionList(const string& path, vector<string>& subfile, vector<string>& subdir)
{
	string _path = path; //"D:\\����\\practice  �ֿ�\\��Ŀ\\Confastswitch";
	_path += "\\*.*";    //"D:\\����\\practice  �ֿ�\\��Ŀ\\Confastswitch";
	_finddata_t file;
	long handle = _findfirst(_path.c_str(), &file);//����path·��
	if (handle == -1)
	{
		perror("_findfirst");//��־ϵͳ
		return;
	}
	do
	{
		if (strcmp(file.name, ".") == 0 || strcmp(file.name, "..") == 0)
			continue;
		if (file.attrib & _A_SUBDIR)
		{
			//Ŀ¼
			//cout << file.name << endl;
			//string tmp_path = path;//"D:\\����\\practice  �ֿ�\\��Ŀ\\Confastswitch";
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
//	string _path = path;//"D:\\����\\practice  �ֿ�\\��Ŀ\\Confastswitch";
//	_path += "\\*.*";//"D:\\����\\practice  �ֿ�\\��Ŀ\\Confastswitch\\*.*";
//	_finddata_t file;
//	long handle = _findfirst(_path.c_str(),&file);//����path·���µĵ�һ���ļ�
//	if (handle == -1)
//	{
//		perror("_findfirst");   //��־ϵͳ
//		return;
//     }
//	do
//	{
//		//if (file.name[0] == '.')   //skip  .and..
//		if(strcmp(file.name,(char*)".")==0||strcmp(file.name,(char*)"..")==0)
//		     continue;
//		if (file.attrib & _A_SUBDIR)
//		{
//			//Ŀ¼
//			cout << file.name << endl;
//			string tmp_path = path;//"D:\\����\\practice  �ֿ�\\��Ŀ\\Confastswitch";
//			tmp_path += "\\";//"D:\\����\\practice  �ֿ�\\��Ŀ\\Confastswitch\\";
//			tmp_path += file.name; //"D:\\����\\practice  �ֿ�\\��Ŀ\\Confastswitch\\file.name";
//			DirectionList(tmp_path);
//		}
//		cout << file.name << endl;
//	} while (_findnext(handle, &file) == 0);
//	_findclose(handle);
//}