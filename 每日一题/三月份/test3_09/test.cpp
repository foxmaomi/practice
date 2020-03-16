#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>

#define MAX  100
using namespace std;

template<class T>class BigNumber {
	long n;
public:
	BigNumber(T i):n(i){}
	BigNumber operator+(BigNumber b)
	{
		return BigNumber(n + b.n);
	}
};
int main()
{
	class BigNumber b1();
	class BigNumber b2();
	3 + 3;
	b1 + 3;
	b1 + b2;
	3 + b1;
}


/*
int main()
{
	int x;
	int i = 0;
	cin >> x;
	char* p[MAX] = { 0 };
	while (x)
	{
		scanf ("%s", p[i]);
		i++;
		x--;
	}
	for (i = 0; i < x; i++)
	{
		printf("%s\n", p[i]);
	}
}

/*
int gcd(int a, int b)
{
	int temp;
	if (a < b)//交换两个数，使大数放在a上
	{
		temp = a;
		a = b;
		b = temp;
	}
	while (b != 0)//*利用辗除法，直到b为0为止
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int main()
{
	int x;
	int y;
	cin >> x;
	cin >> y;
	int l = gcd(x, y);
	//cout << l << endl;
	int z = x * y;
	int ret = z / l;
	printf("%d", ret);
}


/*
class cla {
	static int n;
public:
	cla() { n++; }
	~cla() { n++; }
	static int get_n(){return n;}
};

int cla::n = 0;

int main()
{
	cla* p = new cla;
	delete p;
	cout << "n = " << cla::get_n() << endl;
	return 0;
}


/*
void Al(char a[], int n)
{
	int count[26] = {}, i, kind = 0;
	for (i = 0; i < n; ++i)
		++count['Z' - a[i]];
	for (i = 0; i < 26; ++i)
	{
		if (++kind > 1) putchar(';');
		printf("%c=%d", 'Z' - i, count[i]);
		}
}

int main()
{
	char a[] = { 'A','C','A','B' };
	int n = sizeof(a) / sizeof(char);
	Al(a, n);
}

/*
int main()
{
	int a[4] = { 1,2,3,4 };
	int* ptr = (int*)(&a + 1);
	printf("%d", *(ptr - 1));
}


/*
int main()
{
	int i = 0;
	int j = 1;
	const int* p1;
	int const* p2 = &i;
	p2 = &j;
	int* const p3 = &i;
	*p3 = 20;
	*p2 = 30;
	p3 = &j;
	return 0;
}

/*
class A
{
public:
	A() :m_ival(0) { test(); }
	virtual void func() { std::cout << m_ival << ' '; }
	void test() { func(); }
public:
	int m_ival;
};
class B : public A
{
public:
	B() { test(); }
	virtual void func()
	{
		++m_ival;
		std::cout << m_ival << ' ';
	}
};


int main(int argc, char* argv[])
{
	A* p = new B;
	p->test();
	return 0;
}
*/