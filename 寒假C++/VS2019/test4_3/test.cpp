#include<iostream>

using namespace std;


class Base
{
public:
	virtual void f()
	{
		cout << "Base::f()" << endl;
	}
	virtual void g()
	{
		cout << "Base::g()" << endl;
	}
	virtual void h()
	{
		cout << "Base::h()" << endl;
	}
};
class Base1
{
public:
	virtual void f()
	{
		cout << "Base1::f()" << endl;
	}
	virtual void g()
	{
		cout << "Base1::g()" << endl;
	}
	virtual void h()
	{
		cout << "Base1::h()" << endl;
	}
};
class Base2
{
public:
	virtual void f()
	{
		cout << "Base2::f()" << endl;
	}
	virtual void g()
	{
		cout << "Base2::g()" << endl;
	}
	virtual void h()
	{
		cout << "Base2::h()" << endl;
	}
};
class D:public Base,public Base1,public Base2
{
public:
	virtual void f()
	{
		cout << "D::f()" << endl;
	}
	virtual void g()
	{
		cout << "D::g()" << endl;
	}
	virtual void h()
	{
		cout << "D::h()" << endl;
	}
};

void main()
{
	D d;
	Base* pb = &d;
	Base1* pb1 = &d;
	Base* pb2 = &d;
	pb2->f();
}

/*
class Base
{
public:
	virtual void fun()
	{
		cout << "Base::fun()" << endl;
	}
	virtual void show()
	{
		cout << "Base::show" << endl;
	}
};

class D :public Base
{
public:
	virtual void fun()
	{
		cout << "D::fun()" << endl;
	}
	virtual void show()
	{
		cout << "D::show()" << endl;
	}
	virtual void print()
	{
		cout << "D::print()" << endl;
	}
};
typedef void (*vfptr_t)();
void PrintVirtualTable(vfptr_t* vfptr)
{
	for (int i = 0; vfptr[i] != nullptr; i++)
	{
		vfptr[i]();
	}
}

void main()
{
	D d;
	vfptr_t* vfptr_a = (vfptr_t*)(*(int*)&d);
	PrintVirtualTable(vfptr_a);
}

/*
class Base
{
public:
	virtual void Func1()
	{
		cout << "Base::Func1()" << endl;
	}
private:
	int _b;
	int _a;
	int _c;
};
class D :public Base
{
public:
	void Func1()
	{
		cout << "D::Func1()" << endl;
	}
public:
	int _a;
	int _b;
	int _c;
};

void main()
{
	D d;
	memset(&d, 0, sizeof(D));//nullptr
	Base* pb = &d;
	pb->Func1();// 1父类  2子类  3程序崩溃 
}
/*
//抽象类
class A
{
public:
	//定义接口
	virtual void Eat() = 0;//纯虚方法
	virtual void Sleep() = 0;//纯虚方法
	virtual void Foot() = 0;//纯虚方法
};
class Dog :public A
{
public:
	virtual void Eat()
	{
		cout << "Dog::Eat()" << endl;
	}
	virtual void Sleep()
	{
		cout << "Dog::Sleep()" << endl;
	}
	virtual void Foot()
	{
		cout << "Dog::Foot()" << endl;
	}
};
class Person :public A
{
	virtual void Eat()
	{
		cout << "Person::Eat()" << endl;
	}
	virtual void Sleep()
	{
		cout << "Person::Sleep()" << endl;
	}
	virtual void Foot()
	{
		cout << "Person::Foot()" << endl;
	}
};

void Active(A* pa)
{
	pa->Eat();
	pa->Sleep();
	pa->Foot();
}
void main()
{
	Dog d;
	Person p;
	Active(&p);
	Active(&d);
}

/*
class Base
{
public:
	void f(int x)//重载
	{
		cout << "Base::f(int)" << endl;
	}
	void f(float x)
	{
		cout << "Base::f(float)" << endl;
	}
	virtual void g(void)//覆盖
	{
		cout << "Base::g()" << endl;
	}
};
class Derrived :public Base
{
	virtual void g(void)//重写
	{
		cout << "Derrived::g()" << endl;
	}
	void f(char ch)//同名隐藏了父类的方法
	{
		cout << "Derrived::f(char)" << endl;
	}
};

void main()
{
	Derrived d;
	Base* pb = &d;
	pb->f(1);
	pb->g();
}


/*
class Base
{
public:
	virtual void fun()
	{
		cout << "Base::fun()" << endl;
	}
};
class D :public Base
{
public://override 检查派生类虚函数是否重写了基类某个虚函数，如果没有重写编译报错
	virtual void fun()override
	{
		cout << "D::fun()" << endl;
	}
};

void main()
{
	Base* pb = new D;
	pb->fun();
}

/*
class A
{
public:
	virtual void fun()
	{
		cout << "A::fun()" << endl;
	}
};
class Base :public A
{
public:
	void fun()final   //final:修饰虚函数，表示该虚函数不能再被继承
	{
		cout << "Base::fun" << endl;
	}
};
class D :public Base
{
public:
	virtual void fun(int a)
	{
		cout << "D::fun()" << endl;
	}
};

void main()
{
	Base* pb = new D;
	pb->fun();
}


/*
class Base
{
public:
	Base()
	{
		cout << "Base::Base()" << endl;
	}
	virtual ~Base()
	{
		cout << "Base::~Base()" << endl;
	}
public:
	virtual void fun()
	{
		cout << "Base::fun()" << endl;
	}
public:
	virtual Base* show()
	{
		cout << "Base::show()" << endl;
		return this;
	}
};
class D:public Base
{
public:
	D()
	{
		cout << "D::D()" << endl;
	}
	~D()
	{
		cout << "D::~D()" << endl;
	}
public:
	virtual void fun()
	{
		cout << "D::fun()" << endl;
	}
public:
	virtual D* show()
	{
		cout << "D::show()" << endl;
		return this;
	}
};

void main()
{
	//D d;//静态 栈区
	Base* pb = new D;//动态手工
	delete pb;
}
/*
class Base
{
public:
	virtual void fun()
	{
		cout << "Base::fun()" << endl;
	}
public:
	 Base* show()
	{
		cout << "Base::show()" << endl;
		return this;
	}
};

class D :public Base
{
public:
	virtual void fun()
	{
		cout << "D::fun()" << endl;
	}
public:
	virtual D* show()
	{
		cout << "D::show()" << endl;
		return this;
	}
};
void main()
{
	D d;
	Base* pb = &d;
	pb->fun();//pb->fun永远不能调动子类的方法
	//狸猫换太子
	pb->show();
}
*/