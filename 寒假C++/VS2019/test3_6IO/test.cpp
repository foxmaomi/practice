#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;


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