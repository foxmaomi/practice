#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class A
{
public:
	A()
	{
		printf("A");
	}
	~A()
	{
		printf("deA");
	}
};
class B
{
public:
	B()
	{
		printf("B");
	}
	~B()
	{
		printf("deB");
	}
};
class C:public A,public B
{
public:
	C()
	{
		printf("C");
	}
	~C()
	{
		printf("deC");
	}
};

int main()
{
	A* a = new C();
	delete a;
	return 0;
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
/*
class CSomething
{
public:
	CSomething()
	{
		cout << "******" << endl;
	}
	CSomething(int a)
	{
		cout << "xxxx"<< a<< endl;
	}
};

int main()
{
	CSomething a();
	CSomething b(2);
	CSomething c[3];

	CSomething& ra = b;
	CSomething d = b;
	CSomething* PA = c;
	CSomething* p = new CSomething(4);
}
/*
static int a = 1;
void fun1(void) { a = 2; }
void fun2(void) { int a = 3; }//局部变量
void fun3(void) { static int a = 4; }
int main(int argc, char** args)
{
	printf("%d", a);
	fun1();
	printf("%d", a);
	fun2();
	printf("%d", a);
	fun3();
	printf("%d", a);
}


/*
class Gloves {
public:
	int findMinimum(int n, vector<int> left, vector<int> right) {
		// write code here
		int left_sum = 0, left_min = INT_MAX;
		int right_sum = 0, right_min = INT_MAX;
		int sum = 0;
		//遍历每一种颜色的左右手套序列
		for (int i = 0; i < n; i++)
		{
			//对于有0存在的颜色手套，累加
			if (left[i] * right[i] == 0)
				sum += left[i] + right[i];
			//对于左右手都有的颜色手套，执行累加-最小值+1
			//找到最小值的总数
			else
			{
				left_sum += left[i];
				right_sum += right[i];
				left_min = min(left_min, left[i]);
				right_min = min(right_min, right[i]);
			}
		}
		//结果为有左右都有数量的手套序列的结果+有0存在的手套数+最后再加一肯定就能保证了 
	     return sum + min(left_sum-left_min+1, right_sum-right_min+1) + 1;
	}
};

int main()
{
	int n = 4;
	vector<int> a = { 0,7,2,6 };
	vector<int> b = { 1,5,0,6 };
	Gloves s;
	int ret = s.findMinimum(n, a, b);
	cout << ret << endl;
}
/*
int main()
{
	int x;
	int count = 0;
	cin >> x;
	for (int i = 0; i < 32; i++)
	{
		if (x >> i & 1 == 1)
			count++;
	}
	cout << count<<endl;
}
*/