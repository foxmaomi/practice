#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;
myClass::foo() {

}

/*
class A
{
public:
	A() { printf("A "); }
	~A() { printf("deA"); }
};
class B
{
public:
	B() { printf("B "); }
	~B() { printf("deB"); }
};
class C :public A, public B
{
public:
	C() { printf("C "); }
	~C() { printf("deC"); }
};

int main()
{
	A* a = new C();
	delete a;
	return 0;
}

/*
int main()
{
	int x[1000][1000] = { 0 };

	//
	//for (int i = 0; i < 1000; j++)
	//	for (int j = 0; j < 1000; j++)
	//		x[j][i] += x[j][i];
	//for (int i = 0; i < 1000; i++)
	//	for (int j = 0; j < 1000; j++)
	//		x[i][j] += x[i][j];
}
/*
static int a = 1;
void f1(void) { a = 2; }
void f2(void) { int a = 3; }
void f3(void) { static int a = 4; }
int main(int argc, char** args) {
	printf("%d", a);
	f1();
	printf("%d", a);
	f2();
	printf("%d", a);
	f3();
	printf("%d", a);
}

/*
int F(char* pch)
{
	int count = 0;
	char* p1 = pch;
	while (*p1 != '\0')
	{
		if (*p1 == p1[1] - 1)
		{
			p1++;
			count++;
		}
		else {
			break;
		}
	}
	int count2 = count;
	while (*p1 != '\0')
	{
		if (*p1 == p1[1] + 1)
		{
			p1++;
			count2--;
		}
		else
		{
			break;
		}
	}
	if (count2 == 0)
		return count;
	return 0;
}
void M(char* ptext)
{
	char* p1 = ptext;
	char* p2 = p1;
	while (*p1 != '\0')
	{
		int count = F(p1);
		if (count > 0)
		{
			*p2++ = *p1;
			sprintf(p2, "%i", count);
			while (*p2 != '\0')
			{
				p2++;
			}
			p1 += count + count + 1;
		}
		else
		{
			*p2++ = *p1++;
		}
	}
}

void main(void)
{
	char text[32] = "XYBCDCBABABA";
	M(text);
	printf(text);
}
/*
class A
{
public:
	A(int)
	{
		cout << "A\n" << endl;
	}
	A()
	{
		cout << "A\n" << endl;
	}

};
int main()
{
	A a();
	A b(2);
	A c[3];
	A& ra = b;
	A d = b;
	A* pa = c;
	A* p = new A(4);
}

/*
class A
{
public:
	void f()
	{
		printf("A\n");
	}
};
class B :public A
{
public:
	virtual void f()
	{
		printf("B\n");
	}
};
int main()
{
	A* a = new B;
	a->f();
	delete a;
	return 0;
}
*/