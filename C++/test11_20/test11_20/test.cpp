#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
using namespace std;

short Add(short left, short right) 
{
	return left + right; 
}

int Add(short left, short right) 
{
	return left + right; 
}
void main()
{
	Add(4, 5);
}

//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//double max(double a, double b)
//{
//	return a > b ? a : b;
//}
//char max(char a, char b)
//{
//	return a > b ? a : b;
//}
//void main()
//{
//	cout << max(10, 20) << endl;
//	cout << max('A' , 'B') << endl;
//	cout << max(10.32, 20.25) << endl;
//}
//




//namespace myspace
//{
//	void fun()
//	{
//		cout << "this is fun 1" << endl;
//	}
//}
//namespace youspace
//{
//	void fun()
//	{
//		cout << "this is fun 2" << endl;
//	}
//}
//
//using namespace myspace::show;
//void main()
//{
//	myspace::fun();
//	youspace::fun();
//	fun
//}

//void main()
//{
//	cout<<"Hello Bit."<<endl;
//	int a = 0;
//	char ch = 'A';
//	double d = 12.34;
//	cout << a << endl;
//	cout << ch << endl;
//	cout << d << endl;
//}




