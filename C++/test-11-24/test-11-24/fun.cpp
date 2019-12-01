#define _CRT_SECURE_NO_WARNINGS
#include"fun.h"
void CGoods::Register(char *n, int c, float p)
{
	strcpy(name, n);
	count = c;
	price = p;
}

int CGoods::GetCount()
{
	return count;
}
float CGoods::GetPrice()
{
	return price;
}
float CGoods::GetTotalPrice()
{
	return count*price;
}

//void Person::showinfo()//指定showinfo是Person这个类域的
//{
//	cout << _name << "-" << _sex << "-" << _age << endl;
//}