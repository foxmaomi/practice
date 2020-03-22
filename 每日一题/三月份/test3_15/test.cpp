#include<iostream>
using namespace std;

//int Max(int a, int b)
//{
//	while (a % b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp % b;
//	}
//	return b;
//}

int finddivisor(int x)
{
	int max;
	for (int i = 2; i <= x/2; i++)
	{
		if (x % i == 0)
			max = i;
	}
	return max;
}

int main()
{
	int x, y;
	cin >> x >> y;
	int ret = finddivisor(x);
	cout << ret << endl;
//	int ret = Max(x, y);
	//cout << ret << endl;
}


/*
class A
{
public:
	virtual void print()
	{
		cout << "A::print()" << endl;
	}
};
class B:public A
{
public:
	virtual void print()
	{
		cout << "B::print()" << endl;
	}
};
class C :public A
{
public:
	virtual void print()
	{
		cout << "C::print()" << endl;
	}
};
void print(A a)
{
	a.print();
}
int main()
{
	A a, * aa, * ab, * ac;
	B b;
	C c;
	aa = &a;
	ab = &b;
	ac = &c;
	a.print();
	b.print();
	c.print();
	aa->print();
	ab->print();
	ac->print();
	print(a);
	print(b);
	print(c);
}
/*
struct str_t {
	long long len;
	char data[32];
};
struct data1_t {
	long long len;
	int data[2];
};
struct data2_t {
	long long len;
	char* data[1];
};
struct data3_t {
	long long len;
	void* data[];
};
int main(void)
{
	struct str_t str;
	memset((void*)&str, 0, sizeof(struct str_t));
	str.len = sizeof(struct str_t) - sizeof(int);
	_snprintf(str.data, str.len, "hello");
	struct str_t* p = (struct str_t*) & str;
	printf("data:%s%s\n", str.data, (char*)(p->data));
}

/*
int main()
{
	int i = 0, a = 1, b = 2, c = 3;
	i = ++a || ++b || c;
	printf("%d %d %d %d\n", i, a, b, c);
}

/*
int main()
{
	int i,a[10];
	for (i = 9; i >= 0; i--)
		a[i] = 10 - i;
	printf("%d%d%d", a[2], a[5], a[8]);
	return 0;
}


/*
int main()
{
	cout << sizeof(int) << " " << sizeof(int*);
}


/*
class B
{
public:
	B()
	{
		cout << "default constructor" << " ";
	}
	~B()
	{
		cout << "destructed" << " ";
	}
	B(int i) :data(i)
	{
		cout << "sonstructed by praameter" << data << " ";
	}
private:
	int data;
};
B Play(B b)
{
	return b;
}
int main(int argc,char *argv[])
{
	B temp = Play(5);
	return 0;
}
*/