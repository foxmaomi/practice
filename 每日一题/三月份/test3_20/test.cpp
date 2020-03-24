#include<iostream>
//#define N 9
using namespace std;

class Test 
{
public: 
	int a; 
	int b; 
	virtual void fun() 
	{} 
	Test(int temp1 = 0, int temp2 = 0)
	{ a = temp1; b = temp2; }
	int getA() { return a; }
	int getB() { return b; } 
}; 
int main() 
{
	Test obj(5, 10);
	// Changing a and b 
	int* pInt = (int*)&obj;
	*(pInt+0) = 100;
	*(pInt+1) = 200;
	cout << "a = " << obj.getA() << endl;
	cout << "b = " << obj.getB() << endl; 
	return 0;
}

/*

class MyClass 
{
public: 
	MyClass(int i = 0) { cout << 1; } 
	MyClass(const MyClass& x) { cout << 2; } 
	MyClass& operator=(const MyClass& x) { cout << 3; return*this; }
	~MyClass() { cout << 4; } 
};
int main() 
{
	MyClass obj1(1);
	MyClass	obj2(2);
	MyClass obj3(obj1);
	return 0; 
}

/*
void func(char **m)
{ 
	++m;
	cout<<*m<<endl;
}
int main()
{ 
	static char *a[]={(char*)"morning",(char*) "afternoon", (char*)"evening"};
	char **p;
	p=a;
	func(p);
	return 0; 
}

/*
int pathnum(int n, int m)
{
	if (n > 1 && m > 1)
		//b情况，递归
		return pathnum(n - 1, m) + pathnum(n, m - 1);
	else if (((n >= 1) && (m == 1)) || ((n == 1) && (m >= 1)))
		//a情况，终止条件
		return n + m;
	else
		//格子为0，路径为0
		return 0;
}


int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		cout << pathnum(n, m) << endl;
	}
	return 0;
}
/*
int count(int x)
{
	if (x<3)
		return 1;
	else
		return 1 + count(x -1);
}
int main()
{
	int x;
	cin >> x;
	int ret = count(x);
	cout << ret << endl;
}


/*
void fun(int a[], int n)
{
	int i, j, max, min, px, pn, t;
	for (i = 0; i < n - 1; i += 2)
	{
		max = min = a[i];
		px = pn = i;
		for (j = i + 1; j < n; j++)
		{
			if (max <a[j] )
			{
				max = a[j];
				px = j;
			}
			if (min >a[j] )
			{
				min = a[j];
				pn = j;
			}
		}
		if (pn != i)
		{
			t = a[i];
			a[i] = min;
			a[pn] = t;
			if (px == i)
				px = pn;
		}
		if (px != i + 1)
		{
			t = a[i + 1];
			a[i + 1] = max;
			a[px] = t;
		}
	}
}

int main()
{
	int b[N] = { 9,1,4,2,3,6,5,8,7 };
	printf("\nThe original data:\n");
	for (int i = 0; i < N; i++)
		printf("% 4d", b[i]);
	printf("\n");
	fun(b, N);
	printf("\n the data after mocing \n");
	for (int i = 0; i < N; i++)
		printf("% 4d", b[i]);
	printf("\n");
}



/*
using namespace std;
class A
{
public:
	void print()
	{
		cout << "A.print()";
	}
};
class B :private A
{
public:
	void print()
	{
		cout << "B.print()";
	}
};
class C :public B
{
public:
	void print()
	{
		A::print();
	}
};





/*
int main()
{
	char a[] = "programming", b[] = "language";
	char* p1, * p2;
	int i;
	p1 = a;
	p2 = b;
	for(i=0;i<7;i++)
		if(*(p1+i)==*(p2+i))
			printf("%c",*(p1+i));
}

/*
int f(int n) {
	static int i = 1;
	if (n >= 5)
		return n;
	n = n + i;
	i++;
	return f(n);
}
int main()
{
	int ret = f(1);
	cout << ret << endl;
}
*/