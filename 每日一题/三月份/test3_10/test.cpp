#include<iostream>

using namespace std;

int getnum(int x, int y)
{
	if (x == 0 || y == 0)
		return 1;
	return  getnum(x - 1, y) + getnum(x, y - 1);
}

int main()
{
	int x, y;
	cin >> x >> y;
	int ret = getnum(x, y);
	cout << ret << endl;
}

/*
class UnusualAdd {
public:
	int addAB(int A, int B) {
		int a;
		int b;
		while (B)
		{
			a = A ^ B;
			b = (A & B) << 1;
			A = a;
			B = b;
		}
		return a;
		// write code here
	}
};
int main()
{
	UnusualAdd s;
	int x;
	int y;
	cin >> x >> y;
	int ret = s.addAB(x, y);
	cout << ret << endl;
}

/*
class Test {
public:
	int a;
	int b;
	virtual void fun(){}
	Test(int temp1 = 0, int temp2 = 0)
	{
		a = temp1;
		b = temp2;
	}
	int getA()
	{
		return a;
	}
	int getB()
	{
		return b;
	}
};
int main()
{
	Test obj(5, 10);
	int* pint = (int*)&obj;
	*(pint + 0) = 100;
	*(pint + 1) = 200;
	cout << "a=" << obj.getA() << endl;
	cout << "b=" << obj.getB() << endl;
}

/*
void Func(int& nVall);

int main()
{
	int a;
	Func(a);
}

/*
void func(char** m) {
	++m;
	cout << *m << endl;
}

int main()
{
	static char* a[] = {(char*) "morning",(char*)"afternoon",(char*)"evening" };
	char** p;
	p = a;
	func(p);
	return 0;
}

/*
class MyClass {
public:
	MyClass(int i = 0) { cout << 1; }
	MyClass(const MyClass& x) { cout << 2; }
	MyClass& operator = (const MyClass& x) { cout << 3; return *this; }
	~MyClass() { cout << 4; }
};


int main()
{
	MyClass obj1(1);
	MyClass obj2(2);
	MyClass obj3(obj1);
	return 0;
}

/*
int main()
{
	int y = 0;
	int z = 0;
	int* const x = &y;
	x = &z;
	*x = 2;
}

/*
int fun(int a)
{
	a ^= (1 << 5) - 1;
	return a;
}
int main()
{
	int x = fun(21);
	cout << x << endl;
}
*/