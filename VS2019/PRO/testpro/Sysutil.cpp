#include"Sysutil.h"

void DirectionList(const string& path)
{
	string _path = path;   //E:\\�����\\���ֵ�·\\ppt
	_path += "\\*.*";       //E:\\�����\\���ֵ�·\\ppt\\*.*   �κ�һ���ļ�
	
	_finddata_t file;
	long handle = _findfirst(_path.c_str(), &file); //  ����path·���µĵ�һ���ļ�
	if (handle == 1)
	{
		perror("_findfirst");   //�������Ǵ�ӡ��Ҫʹ����־
		return;
	}
	do 
	{
		//if (file.name[0] == '.')    //skip  .and..  ȱ�ݻὫ��.��ͷ���ļ�
		if(strcmp(file.name,(char*)'.') == 0 || strcmp(file.name,(char*)'..') == 0)
			continue;
		cout << file.name << endl;
	} while (_findnext(handle,&file) == 0);
	_findclose(handle);
}