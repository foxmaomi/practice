#include<iostream>

using namespace std;

class Base
{
public:
	int m_n;
};
class A :public Base
{
public:
	int m_a;
};
class B :public Base
{
public:
	int m_b;
};
class D:public A,public:B
{
public:
	int m_d;
}

/*
class Base
{
public:
	Base()
	{
		cout << "This is Base::Base()" << endl;
	}
	~Base()
	{
		cout << "This is Base::Base()" << endl;
	}
public:
	int m_a = 0;
	int m_b = 0;
};

class D:public Base
{
public:
	D()
	{
		cout << "This is D::D()" << endl;
	}
	~D()
	{
		cout << "This is D::D()" << endl;
	}
public:
	int m_x = 0;
	int m_y = 0;
};

void main()
{
	D d;
}
