#include<iostream>

using namespace std;


int main()
{
	int M = 0;
	int N = 0;
	cin >> M;
	cin >> N;
	if (N == 2)
	{
		while (M)
		{
			cout << (M & 1);
			M = M / 2;
		}
		cout << endl;
	}
}


/*
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int ar[4] = { 0 };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		cin >> ar[i];
	}

	A = (ar[0] + ar[2]) / 2;
	B = ar[2] - A;
	if ((B - ar[1]) == (ar[3] - B))
	{
		cout << A << endl;
		cout << B << endl;
		cout << (B - ar[1]) << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}


/*
class A {
public:
	A(const char* s)
	{
		cout << s << endl;
	}
	~A(){}
};
class B :virtual public A
{
public:
	B(const char* s1,const char* s2) : A(s1) {
		cout << s2 << endl;
	}
};
class C :virtual public A
{
public:
	C(const char* s1,const char* s2) :A(s1) {
		cout << s2 << endl;
	}
};
class D : public B, public C
{
public:
	D(const char* s1,const char* s2,const char* s3,const char* s4) :B(s1, s2), C(s1, s3), A(s1)
	{
		cout << s4 << endl;
	}
};
int main()
{
	 D* p = new D("class A", "class B", "class C", "class D");
	delete p;
	return 0;
}
/*
class A {
public:
	A(char* s)
	{
		cout << s << endl;
	}
	~A(){}
};
class B:virtual public A
{
public:
	B(char* s1, char* s2) :A(s1) {
		cout << s2 << endl;
	}
};
class C:virtual public A
{
public:
	C(char* s1, char* s2) :A(s1) {
		cout << s2 << endl;
	}
};
class D:public B, public C
{
public:
	D(char* s1, char* s2, char* s3, char* s4) :B(s1, s2), C(s1, s3), A(s1)
	{
		cout << s4 << endl;
	}
};
int main() {
	D *p = new D("class A", "class B", "class C", "class D");
	delete p;
	return 0;
}
/*
int main()
{
	int a[5] = { 1,3,5,7,9 };
	int* p = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(p - 1));
}


/*
int cnt = 0;
int fib(int n)
{
	cnt++;
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2;
	else
		return fib(n - 1) + fib(n - 2);
}


void main()
{
	fib(8);
	printf("%d", cnt);
}


/*
int main()
{
	int flag = 3;
	int ret = (flag &= ~2);
	//int ret = flag >> 2;
	cout << ret << endl;

}
*/