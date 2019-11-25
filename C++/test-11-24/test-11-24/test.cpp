#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"fun.h"
#include<string.h>
using namespace std;
void main()
{
	int a = 10;
	int &ra = a;
	double d = 12.34;
	int &rd = (int)d;  //ÒþÊ½ float
}
/*struct Student
{
	void SetStudentinfo(const char* name, const char* gender, int age)
	{
		strcpy(_name, name);
		strcpy(_gender, gender);
		_age = age;
	}
	void PrintStudentinfo()
	{
		cout << _name << " " << _gender << " " << _age << endl;
	}
	char _name[20];
	char _gender[3];
	int _age;
};
int main()
{
	Student s;
	s.SetStudentinfo("peter", "ÄÐ",18);
	return 0;
}
/*
class CGoods
{
public:
	void RegisterGoods(char *name, int count, float price)
	{
		SetName(name);
		SetCount(count);
		SetPrice(price);
	}
	void SetName(char *name)
	{
		strcpy(this->name, name);
	}
	void SetCount(int count)
	{
		this->count = count;
	}
	void SetPrice(float price)
	{
		this->price = price;
	}
public:
	char* GetName()
	{
		return name;
	}
	int GetCount()
	{
		return count;
	}
	float GetPrice()
	{
		return price;
	}
	float GetTotalPrice()
	{
		return (price*count);
	}
private:
	char name[10];
	int count;
	float price;
	float total_price;
};
void main()
{
	CGoods t1;
	t1.RegisterGoods("±ÈÌØ", 10, 5);
	int _count = t1.GetCount();
	float _price = t1.GetPrice();
	float _toatal_price = t1.GetPrice();
	cout << _count << endl;
	cout << _price << endl;
	cout << _toatal_price << endl;

}*/










