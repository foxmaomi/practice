#include<iostream>

using namespace std;



class Base
{
public:
	virtual void fun()
	{
		cout << "Base::fun()" << endl;
	}
	virtual void show()
	{
		cout << "Base::fun()" << endl;
	}
	void print()
	{
		cout << "Base::print()" << endl;
	}
};
/////
typedef void (*vfptr_t)();
/////
class D :public Base
{
public:
	virtual void fun()
	{
		cout << "D::fun()" << endl;
	}
	virtual void list()
	{
		cout << "D::list()" << endl;
	}
	virtual void self()
	{
		cout << "D::self()" << endl;
	}
private:
	int m_x = 0;
	int m_y = 0;
};

void PrintVirtualTable(vfptr_t* vfptr)
{
	for (int i = 0; vfptr[i] != nullptr; ++i)
	{
		vfptr[i]();
	}
}


void main()
{
	D d;
	vfptr_t* vfptr_ar = (vfptr_t*)(*(int*)&d);
	PrintVirtualTable(vfptr_ar);
}

/*
void main()
{
	Base b;
	//cout << b._vfptr << endl;   隐藏在对象构造内部
	cout << &b << endl;
	cout << *(int*)&b << endl;//????????
	vfptr_t* vfptr_ar = (vfptr_t*)(*(int*)&b);
	cout << vfptr_ar << endl;
	PrintVirtualTable(vfptr_ar);
}
/*
class A
{
public:
	virtual void eat()
	{
		cout << "A::eat()" <<endl;
	}
	void foot()
	{
		cout << "A::foot()" << endl;
	}
	void sleep()
	{
		cout << "A::sleep()"<<endl;
	}
};
class Pig :public A
{
public:
	void eat(int a, double b)
	{
		cout << "pig::eat()" << endl;
	}
	void foot()
	{
		cout << "pig::foot()" << endl;
	}
	void sleep()
	{
		cout << "pig::sleep()" << endl;
	}
};
class Dog :public A
{
public:
	void eat()
	{
		cout << "dog::eat()" << endl;
	}
	void foot()
	{
		cout << "dog::foot()" << endl;
	}
	void sleep()
	{
		cout << "dog::sleep()" << endl;
	}
};
class Person :public A
{
public:
	void eat()
	{
		cout << "person::eat()" << endl;
	}
	void foot()
	{
		cout << "person::foot()" << endl;
	}
	void sleep()
	{
		cout << "person::sleep()"<<endl;
	}
};
class Bird :public A
{
	virtual void eat()
	{
		cout << "Bird::eat()" << endl;
	}
	virtual void foot()
	{
		cout << "Bird::foot()" << endl;
	}
	virtual void sleep()
	{
		cout << "Bird::sleep()" << endl;
	}
};

void Active(A* pa)
{
	pa->eat();
	pa->foot();
	pa->sleep();
}





/*
class Base
{
public:
	Base()
	{
#ifdef DISPLAY
		cout << "Base::Base()" << endl;
#endif
	}
	~Base()
	{
#ifdef DISPLAY
		cout << "~Base::~Base()" << endl;
#endif
	}
public:
	virtual void fun()
	{
		cout << "Base::fun()" << endl;
	}
	virtual void show()
	{
		cout << "Base::show()" << endl;
	}
	void print()
	{
		cout << "Base::print()" << endl;
	}
private:
	int m_a = 0;
	int m_b = 0;
};
class D :public Base
{
public:
	D()
	{
#ifdef DISPLAY
		cout << "D::D()" << endl;
#endif
	}
	~D()
	{
#ifdef DISPLAY
		cout << "~D::~D()" << endl;
#endif
	}
public:
	virtual void fun()
	{
		cout << "D::fun()" << endl;
	}
	virtual  void list()
	{
		cout << "D::list()" << endl;
	}
	void self()
	{
		cout << "D::self()" << endl;
	}
private:
	int m_x = 0;
	int m_y = 0;
};



/*
void main()
{
	D d;
	Base* pb = &d;
	pb->fun();
	pb->show();
	Base* pb1 = new Base;
	pb1->fun();
	pb1->print();
}

/*
void main()
{
	cout << sizeof(Base) << endl;
	Base b;
}
/*
void main()
{
	D d;
	Base* pb = &d;
	pb->fun();
	Base b;
	b.fun();
}
/*
void main()
{
	Dog dog;
	Pig pig;
	Person per;
	Bird bird;
	Active(&dog);
	Active(&pig);
	Active(&per);
	Active(&bird);

}
/*
//覆盖（重写） 隐藏 重载
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
public:
	void fun()  //覆盖
	{
		cout << "D::fun()" << endl;
	}
};
void main()
{
	D d;
	Base* pb1 = &d;
	Base* pb2 = new D;
	pb1->fun();
	pb2->fun();
}



/*
class Base
{
public:
	Base()
	{
#ifdef DISPLAY
		cout << "Base::Base()" << endl;
#endif
	}
	~Base()
	{
#ifdef DISPLAY
		cout << "Base::~Base()" << endl;
#endif
	}
public:
	virtual void fun()
	{
		cout << "Base::fun()" << endl;
	}
	void fun(int a)
	{
		cout << "Base::fun(int a)" << endl;
	}
	void show()
	{
		cout << "Base::show()" << endl;
	}
private:
	int m_a = 0;
	int m_b = 0;
};
class D :public Base
{
public:
	D()
	{
#ifdef DISPLAY
		cout << "D::D()" << endl;
#endif
	}
	~D()
	{
#ifdef DISPLAY
		cout << "D::~D()" << endl;
#endif
	}
public:
	void fun()
	{
		cout << "D::fun()" << endl;
	}
	void show()
	{
		cout << "D::show()" << endl;
	}
	void list()
	{
		cout << "D::list()" << endl;
	}
private:
	int m_x = 0;
	int m_y = 0;
};

/*
void main()
{
	D d;
	d.fun();
	//d.fun(0);同名隐藏
	d.Base::fun(0);//显示调用
}

/*
void main()
{
	D d;
	Base b = d;
	b.fun();
	Base* pb = &d;
	pb->fun();
	//pb-list();
}


/*
void main()
{
	Base b;
	D d;
	cout << sizeof(Base) << endl;
	cout << sizeof(D) << endl;
	b = d;//赋值兼容规则
	Base* pb1 = &d;
	Base& pb2 = d;
}
*/