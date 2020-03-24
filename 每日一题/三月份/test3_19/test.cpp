#include<iostream>
#include<stdio.h>
#define M 5
#define N 20
using namespace std;


int main()
{
	int x;
	cin >> x;
	if (x <= 2)
		cout << -1 << endl;

}











/*
class A {
public:
	~A() {
		cout << "~A()";
	}
};
class B {
public:
	virtual ~B() {
		cout << "~B()";
	}
};
class C :public A, public B {
public:
	virtual ~C() {
		cout << "~C()";
	}
};
int main() {
	C* c = new C;
	B* b1 = dynamic_cast<B*>(c);
	A* a2 = dynamic_cast<A*>(b1);
	delete a2;
}

/*
template <class T>
struct sum {
	static void foo(T op1, T op2) {
		cout << op1 << op2;
	}
};

int main()
{
	sum<int>::foo(1,3);
}

/*
int main()
{
	long long a = 1, b = 2, c = 3;
	printf("%d %d %d\n", a, b, c);
	return 0;
}

/*
class A {
public:
	A() { p(); }
	virtual void p() { printf("A"); }
	virtual ~A() { p(); };
};
class B :public A {
public:
	B() { p(); }
	void p() { printf("B"); }
	~B() { p(); };
};

int main(int, char**) {
	A* a = new B();
	delete a;
}

/*
int main()
{
	char* p = (char*)"abc";
	char* q = (char*)"abc123";
	while (*p = *q)
		printf("%c %c", *p, *q);
}

/*
int fun(char(*ss)[N], int* n)
{
	int i, k = 0, len = N;
	for (i = 0; i <M ; i++)
	{
		len = strlen(ss[i]);
		if (i == 0)
			*n = len;
		if (len < * n)
		{
			*n = len;
			k = i;
		}
	}
	return k;
}
int main()
{
	char ss[M][N] = { "shanghai","guangzhou","beijing","tianjing","chongqing" };
	int n, k, i;
	printf("\nthe originable stringsare:\n");
	for (i = 0; i < M; i++)
		puts(ss[i]);
	k = fun(ss, &n);
	printf("\nlength of shortest string is: %d\n", n);
	printf("\n shortest string is: %s\n", ss[k]);
}

/*
class A {
public:
	A(){}
};
void foo() {
	throw new A;
}
int main()
{
	catch (A && x);
}



/*
int main()
{
	int a[] = { 1,2,3,4,5 };
	int* p[] = { a,a + 1,a + 2,a + 3 };
	int** q = p;
	int ret = *(p[0] + 1) + **(q + 2);
	cout << ret << endl;
}

/*
int main()
{
	char* ptr;
	char mystring[] = "abcdefg";
	ptr = mystring;
	ptr += 5;
	cout << *ptr << endl;
}
*/