#include<iostream>
#include<vector>
using namespace std;

int find(int x)
{
	int count = 0;
	int i;
	vector<int> a;
	for (i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			a.push_back(i);
		}
	}
	a.pop_back();
	for (auto ele : a)
	{
		count += ele;
	}
	if (count == x)
		return x;
	return -1;
}

int main()
{
	vector<int> b;
	int x;
	cin >> x;
	int i;
	for (i = 1; i <= x; i++)
	{
		int ret = find(i);
		if(ret != -1)
			b.push_back(ret);
	}
	

	cout << b.size() << endl;
}

/*
struct Test
{
	Test(int){}
	Test(){}
	void fun(){}
};
void main(void)
{
	Test a(1);
	a.fun();
	Test b();
	b.fun();
}

/*
void swap_int(int* a, int* b)
{
	*a = *a + *b;
	*b = *a + *b;
	*a = *a - *b;
}
int main()
{
	int a = 4;
	int b = 5;
	swap_int(&a, &b);
}


/*
void print(char* s)
{
	if (*s) {
		print(++s);
		printf("%c", *s);
	}
}

int main()
{
	char str[] = "Geneius";
	print(str);
}

/*
class A
{
public:
	void fa()
	{
		printf("fa called\n");
	}
	virtual void fb()
	{
		printf("fb called\n");
	}
};

class B :public A
{
public:
	void fa()
	{
		A::fa();
		printf("fab called\n");
	}
	virtual void fb()
	{
		printf("fbb called\n ");
	}
};
void main(void)
{
	B b;
	A* pa;
	pa = &b;
	A* pa2 = new A;
	pa->fa();
	pa->fb();
	pa2->fa();
	pa2->fb();
	delete pa2;

}

/*
class Base
{
public:
	virtual int f(int x)
	{
		return x * 10;
	}
	int f(char x[14])
	{
		return sizeof(x) + 10;
	}
};
class D :public Base
{
	int f(int x)
	{
		return x * 20;
	}
	virtual int f(char x[10])
	{
		return sizeof(x) + 20;
	}
};

int main()
{
	D s;
	Base* p = &s;
	char x[10];
	printf("%d\n", p->f(100) + p->f(x));
	return 0;
}
/*
int main(void)
{
	const int a = 10;
	int* p = (int*)(&a);
	*p = 20;
	cout << "a = " << a << ", *p = " << *p << endl;
	return 0;
}
*/