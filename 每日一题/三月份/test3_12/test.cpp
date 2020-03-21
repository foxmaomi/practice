#include<iostream>

using namespace std;

int main()
{
	while (1) {
		int i = 0;
		int x;
		int count = 0;
		int count1 = 0;
		cin >> x;
		for (i = 0; i < 32; i++)
		{
			if (((x >> i) & 1) == 1)
				count++;
			if (((x >> i) & 1) == 0)
			{
				if (count > count1)
					count1 = count;
				count = 0;
			}
		}
		cout << count1 << endl;
	}
}







/*
int foo(int n) {
	if (n < 2) {
		return n;
	}
	else
		return 2 * foo(n - 1) + foo(n - 2);
}
int main()
{
	int ret = foo(5);
	cout << ret << endl;
}


/*
class A
{
public:
	virtual void func(int val = 1)
	{
		std::cout << "A->" << val << endl;
	}
	virtual void test()
	{
		func();
	}
};
class B :public A
{
public:
	void func(int val = 0)
	{
		cout << "B->" <<val<< endl;
	}
};
int main(int argc, char* argv[])
{
	B* p = new B;
	p->test();
	return 0;
}


/*
struct A
{
	int a;
	short n;
	int c;
	char d;
};
struct B
{
	int a;
	short b;
	char c;
	int d;
};
int main()
{
	cout << sizeof(A) << " " << sizeof(B) << endl;
}



/*
class A
{
public:
	void foo()
	{
		printf("1");
	}
	virtual void fun()
	{
		printf("2");
	}
};
class B :public A
{
public:
	void foo()
	{
		printf("3");
	}
    void fun()
	{
		printf("4");
	}
};

int main(void)
{
	A a;
	B b;
	A* p = &a;
	B* p1 = &b;
	p->foo();
	p->fun();
	p = &b;
	p1->foo();
	p1->fun();

	p->foo();
	p->fun();
	A* ptr = (A*)&b;
	ptr->foo();
	ptr->fun();
	return 0;
}







/*
void main()
{
	int x = 3, y = 3;
	switch (x % 2) {
	case 1:
		switch (y) {
		case 0:cout << "first";
		case 1:cout << "second ";
			break;
		default:cout << "hello";
		}
	case 2:cout << "third" << endl;
	}
	
}




/*
class PAT {
	PAT() {
		cout << "构造" << endl;
	}
};

int main()
{
	PAT(*ad)[3];
}










/*
#include<stdio.h>
#define N 9
int x[N];
int count = 0;
//打印1-9的数字
void dump() {
	//int i = 0;
	//for (i = 0; i < N; i++)
	//{
	//	printf("%d", x[i]);
	//}
	//printf("\n");
}
void swap(int a,int b) {
	int t = x[a];
	x[a] = x[b];
	x[b] = t;
}
void run(int n) {
	int i;
	if (N - 1 == n) {
		dump();
		count++;
		return;
	}
	for (i = n; i < N; i++) {
		swap(n, i);
		run(n + 1);
		swap(n, i);
	}
}

int main()
{
	int i;
	for (i = 0; i < N; i++) {
		x[i] = i + 1;
	}
	run(0);
		printf("* Total:%d\n", count);
}
*/