#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;



int main()
{
	int a;
	float b, c;
	scanf("%2d %3f%4f", &a, &b, &c);
	printf("a=%d,b=%d,c=%f", a, b, c);
}
/*
class B0
{
public:
	virtual void display()
	{
		cout << "B0" << endl;
	}
};
class B1 :public B0
{
public:
	void display()
	{
		cout << "B1" << endl;
	}
};
class D1 :public B1
{
public:
	void display()
	{
		cout << "D1" << endl;
	}
};
void fun(B0 ptr)
{
	ptr.display();
}


int main()
{
	B0 b0;
	B1 b1;
	D1 d1;
	fun(b0);
	fun(b1);
	fun(d1);
}
/*
int amin()
{
	char p1[15] = "abcd", * p2 =(char*) "ABCD", str[50] = "xyz";
	strcpy(str + 2, strcat(p1 + 2, p2 + 1));
	printf("%s\n", str);
}

/*
int main()
{
	int x = 1;
	do {
		printf("%2d\n", x++);
	} while (x--);
}



/*
void main()
{
	int n[][3] = { 10,20,30,40,50,60 };
	int(*p)[3];
	p = n;
	cout << p[0][0] << "," << *(p[0] + 1) << "," << (*p)[2] << endl;
}

/*
class A {
	void test(float a)
	{
		cout << "1";
	}
};
class B :public A {
	void test(int b)
	{
		cout << "2";
	}
};

int main()
{
	A *a = new A;
	B *b = new B;
	a = b;
	a.test(1.1);
}
*/