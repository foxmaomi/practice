#include<iostream>

using namespace std;

class Base
{
public:
	Base(int a,int b):m_a(a),m_b(b)
	{
		cout << "Base::Base()" << endl;
		m_a = m_b = 0;
	}
	Base(const Base& b)
	{
		cout << "This is Base(const Base &)" << endl;
	}
	Base& operator=(const Base& b)
	{
		cout<<"This is Base operator=(const Base&)" << endl;
		m_a = b.m_a;
		m_b = b.m_b;
		return *this;
	}
	~Base()
	{
		cout << "Base::~Base()" << endl;
	}
public:
	void fun()
	{
		cout << "This is Base::fun()" << endl;
	}
	void fun(int a)
	{
		cout << "This is Base::fun(int)" << endl;
	}
	void show()
	{
		cout << "This is Base::show()" << endl;
	}
private:
	int m_a;
	int m_b;
};

class D :public Base
{
public:
	D():Base(1,2)
	{
		cout << "D::D()" << endl;
		m_x = m_y = m_z = 0;
	}
	D(const D& d) :Base(d)
	{
	}
	D& operator=(const D& d)
	{
		Base::operator=(d);
		m_x = d.m_x;
		m_y = d.m_y;
		m_z = d.m_z;
		return *this;
	}
	~D()
	{
		cout << "D::~D()" << endl;
	}
public:
	//同名隐藏
	void fun()
	{
		cout << "This is D::fun()" << endl;
	}
	void show()
	{
		cout << "This is D::show()" << endl;
	}
private:
	int m_x;
	int m_y;
	int m_z;
};

void main()
{
	D d;
}

/*
class Base
{
public:
	Base()
	{
		cout << "Base::Base()" << endl;
		m_a = m_b = 0;
	}
	~Base()
	{
		cout << "Base::~Base()" << endl;
	}
public:
	void fun()
	{
		cout << "This is Base::fun()" << endl;
	}
	void fun(int a)
	{
		cout << "This is Base::fun(int)" << endl;
	}
	void show()
	{
		cout << "This is Base::show()" << endl;
	}
private:
	int m_a;
	int m_b;
};

class D :public Base
{
public:
	D()
	{
		cout << "D::D()" << endl;
		m_x = m_y = m_z = 0;
	}
	~D()
	{
		cout << "D::~D()" << endl;
	}
public:
	//同名隐藏
	void fun()
	{
		cout << "This is D::fun()" << endl;
	}
	void show()
	{
		cout << "This is D::show()" << endl;
	}
private:
	int m_x;
	int m_y;
	int m_z;
};

void main()
{
	D d;
	Base* pb = &d;
	pb->show();
}

/*
void main()
{
	D d;
	d.show();
	d.fun();
}
/*
void main()
{
	Base b, * pb = nullptr;
	D d;
	//1    子类对象可以赋值给父类对象/指针/引用
	b = d;  ///类型不同   必须继承才可以赋值
	//2
	pb = &d;
	//3
	Base& rb = d;
}
/*
class Base
{
public:
	void fun1(){}
protected:
	void show1(){}
private:
	void list1(){}
private:
	int m_a;
};

class D:private Base
{
public:
	void fun()
	{
		show();//可以在内部调用
	}
protected:
	void show()
	{

	}
private:
	int m_x;
};
class C :public D
{
public:
	void fun2()
	{
		//fun1();
	}
};

int main()
{
	D d;
	cout << sizeof(d) << endl;
//	d.show();  自己的私有方法在外部不能访问
	d.fun();
	d.fun1();
}
*/