#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class CGoods
{
public:
	void Register(char *n, int c, float p);
	int GetCount();
	float GetPrice();
	float GetTotalPrice();
protected:
private:
	char name[10];
	int count;
	float price;
	float total_prive;
};
//class Person
//{
//public:
//	void showinfo();
//public:
//	char* _name;
//	char*_sex;
//	int _age;
//};