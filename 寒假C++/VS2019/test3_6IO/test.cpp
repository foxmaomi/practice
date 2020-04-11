#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

class Base
{
public:
	void fun()
	{
		cout << "Base::show()" << endl;
	}
	void exeshow()
	{
		cout << "Base::show()" << endl;
	}
protected:
	void print()
	{
		cout << "Base::print()" << endl;
	}
private:
	void show()
	{
		cout << "Base:;show()" << endl;
	}
private:
	int m_a;
	int m_b;
};
class D :public Base
{
public:
	void list()
	{
		cout << "This is D::list()" << endl;
		fun();
		print();
		//Base::show();
		exeshow();
		m_x = 10;
	}
private:
	int m_x;
};
void main()
{
	D d;
	d.list();
	d.fun();
}

/*
//继承
//子类      父类
//派生类    基类
class Base
{
public:
private:
	int m_a;
	int m_b;
};
class D :public Base
{
private:
	int m_x;
};
//鸟人   人->鸟
void main()
{
	cout << sizeof(D) << endl;
}

/*
void main()
{
	stringstream sstream;//空间中转站
	sstream << "first" << " " << "string,";
	sstream << "second string";
	//first string second string
	cout << "strResult is: " << sstream.str() << endl;
//清空sstream
	sstream.str("");
	sstream << "third string";
	cout << "After clear,strResult is:" << sstream.str() << endl;
}
/*
void main()
{
	int a = 1234560;
	string str;
	stringstream s;//string 对象 扩容 内存不足
	s << a;//12345->str
	//cout << s << endl;
	s >> str;
	cout << "str= " << str << endl;
	s.clear();
	double d = 12.345;
	s << d;
	s >> str;
	cout << "str= " << str << endl;
	string value = s.str();
	cout << "value = " << value << endl;
}

/*
int main()
{
	int n = -123;
	char s1[32];
	_itoa(n, s1, 10);
	//for (int i = 0; i < 32; i++)
	//{
	//	cout << s1[i] << endl;
	//}
	char s2[32];
	sprintf(s2, "%d", n);
//	for (int i = 0; i < 32; i++)
//{
//	cout << s2[i] << endl;
//}
	char s3[32];
	sprintf(s3, "%f", n);
//	for (int i = 0; i < 32; i++)
//{
//	cout << s1[i] << endl;
//}
	return 0;
}
/*
struct ServerInfo
{
	char _ip[32];//ip  192.168.10.100
	int _port;//端口 //8080
};
class ConfigManager
{
public:
	ConfigManager(const string cfgfile):_configFile(cfgfile)
	{}
public:
	//文本
	void Write_ServeInfo_Text(const ServerInfo& info)
	{
		ofstream ofile(_configFile, ios::out);
		if (!ofile)
			return;
		ofile << info._ip << " " << info._port;
		ofile.close();
	}	void Read_Serverinfo_Test(ServerInfo& info)
	{
		ifstream ifile(_configFile, ios::in);
		if (!ifile)
			return;
		ifile >> info._ip >> info._port;
		ifile.close();
	}
	//二进制
private:
	string _configFile;
};

void main()
{
	ServerInfo serve_info = { "192.168.10.100",8080 };
	ConfigManager cfgmgr("bitServer.config");
	cfgmgr.Write_ServeInfo_Text(serve_info);

	ServerInfo tmp_info;
	cfgmgr.Read_Serverinfo_Test(tmp_info);
	cout << tmp_info._ip << ":" << tmp_info._port << endl;
}

/*
//C++二进制读入
void main()
{
	int ar[10];
	int n = sizeof(ar) / sizeof(int);
	//1
	ifstream ifile;
	//2
	ifile.open("Test5.txt", ios::in | ios::binary);
	ifile.read((char*)ar, sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << " ";
	}
	cout << endl;
	ifile.close();
	return;
}


/*
//C++二进制写入
void main()
{
	int ar[] = { 12,23,34,45,56,67,78,89,90,100 };
	int n = sizeof(ar) / sizeof(int);
	//1
	ofstream ofile;
	//2
	ofile.open("Test5.txt", ios::out | ios::binary);//fopen("test.txt","w");
	//3
	ofile.write((const char*)ar, sizeof(int) * n);
	ofile.close();
	return;
}



/*
//C++文本读入
void main()
{
	int ar[10];
	int n = sizeof(ar) / sizeof(int);
	//1
	ifstream ifile;
	//2
	ifile.open("Test4.txt", ios::in);//fopen("test.txt","w");
	//3
	for (int i = 0; i > n; i++)
	{
		ifile >> ar[i];//cin>>ar[i];
	}
	ifile.close();
	return;
}


/*
//C++文本写入
void main()
{
	int ar[] = { 12,23,34,45,56,67,78,89,90,100 };
	int n = sizeof(ar) / sizeof(int);
	//1
	ofstream ofile;
	//2
	ofile.open("Test4.txt", ios::out);//fopen("test.txt","w");
	//3
	for (int i = 0; i < n; i++)
	{
		ofile << ar[i] << " ";
	}
	ofile.close();
	return;
}
/*
//C语言
//二进制读入
void main()
{
	int ar[10];
	int n = 10;
	FILE* fp = fopen("Test2.txt", "rb");//read binary
	if (NULL == fp)
	{
		cerr << "Open Test.txt file failed" << endl;
		exit(1);
	}
	fread(ar, sizeof(int), n, fp);
	fclose(fp);
	return;
}

/*
//二进制写入
void main()
{
	int ar[] = {12,23,34,45,56,67,78,89,90,100};
	int n = sizeof(ar) / sizeof(int);
	FILE* fp = fopen("Test2.txt", "wb");//write binary
	if (NULL == fp)
	{
		cerr << "Open Test2.txt file failed" << endl;
		exit(1);
	}
	fwrite(ar, sizeof(int), n, fp);
	fclose(fp);
	return;
}


/*
//文本读入
void main()
{
	int ar[10];
	FILE* fp = fopen("Test1.txt", "r");
	if (NULL == fp)
	{
		cerr << "Open Test.txt file failed" << endl;
		exit(1);
	}
	for (int i = 0; i < 10; i++)
	{
		//fprintf(fp, "%d", ar[i]);
		fscanf (fp,"%d", &ar[i]);
	}
	fclose(fp);
	return;
}


/*
//文本写入
void main()
{
	int ar[] = { 12,23,34,45,56,67,78,89,90,100 };
	int n = sizeof(ar) / sizeof(int);
	FILE* fp = fopen("Test1.txt", "w");//打开一个文件没有的话就出创建一个出来
	if (NULL == fp)
	{
		cerr << "Open Test.txt file failed" << endl;
		exit(1);
	}
	for (int i = 0; i < n; i++)
	{
		fprintf(fp, "%d", ar[i]);
	}
	fclose(fp);
	return;
}


/*
class Test
{
	friend ostream& operator<<(ostream& out, const Test& t);
public:
	Test(int data=0):m_data(data)
	{}
private:
	int m_data;
};
ostream& operator<<(ostream& out, const Test& t)
{
	out << t.m_data;
	return out;
}


void main()
{
	Test t(100);
	cout << t << endl;
}
/*
int main()
{
	char* str = (char*)"This is a error";
	cerr << str;
	ostream out;
	return 0;
}
/*
void main()
{
	char ch = 'a';
	int i = 10;
	double d = 12.34;
	int a;
	cin >> a;
	cout << ch << endl;
	cout << i << endl;
	cout << d << endl;
}

/*
void main()
{
	char buf[128] = { 0 };
	string str;
	while (1)
	{
		//scanf("%s", buf);//hello linux
		//cin >> buf;
		//gets(buf);
		getline(cin, str);
		printf("buf=%s\n", str.c_str());
	}
}
*/