#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Board {
public:
	bool checkWon(vector<vector<int> > board) {

		// write code here
	}
};

int main()
{
	vector<int> board;
	getline(cin,board);
}


/*
#include<stdio.h>
#include<string.h>
#define MAX 100
int main()
{
	char s[MAX] = { 0 };
	gets_s(s);
	int count = 0;
	int i1 = 0;
	int i2 = 0;
	if (strlen(s) <= 4)
		count += 5;
	else if (strlen(s) > 5 && strlen(s) < 7)
		count += 10;
	else
		count += 25;
	while (s[i1] != '\0')
	{
		if (s[i1] >= 'a' && s[i1] <= 'z')
			i1++;
	}
	if (i1 == strlen(s))
		count += 10;
	while (s[i2] != '\0')
	{
		if (s[i2] >= 'A' && s[i2] <= 'Z')
			i2++;
	}
	if (i2 == strlen(s))
		count += 10;
	if ((i1 + i2) == strlen(s))
		count += 20;

	printf("%d\n", count);
	printf("%s", s);
}



/*
template<class T> class FOO {
	T tvar;
public:
	Foo(T t):tvar(t){}
};
template<class T> class FooDerived::public Foo<T>
{
};

int main()
{
	FooDerived<int> d(5);
	return 0;
}

int main()
{
	int I = 1;
	if (I <= 0)
		printf("****\n");
	else
		printf("%%\n");
}

/*
struct A {
	void foo() { printf("foo"); }
	virtual void bar() { printf("bar"); }
	A() { bar(); }
};
struct B :A {     //默认为私有
	void foo() { printf("b_foo"); }
	void bar() { printf("b_bar"); }
};
int main()
{
	A* p = new B;
	p->foo();
	p->bar();
}

/*
class Printer {
public:
	Printer(std::string name) { std::cout << name; }
};

class Container {
public:
	Container():b("b"),a("a"){}
	Printer a;
	Printer b;
};

int main()
{
	Container c;
	return 0;
}


/*
int main()
{
	int** a[3][4];
	int ret = sizeof(a);
	cout << ret << endl;
}

/*
int fun(int n) 
{
	if (n == 5)
		return 2;
	else
		return 2 * fun(n + 1);
}

int main()
{
	int ret = fun(2);
	cout << ret << endl;
}

/*
int func(int x) {
	int count = 0;
	while (x)
	{
		count++;
		x = x & (x - 1);//与运算
	}
	return count;
}

int main()
{
	int ret = func(9999);
	cout << ret << endl;
}
*/