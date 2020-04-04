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
void fun2(void) { int a = 3; }//�ֲ�����
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
		//����ÿһ����ɫ��������������
		for (int i = 0; i < n; i++)
		{
			//������0���ڵ���ɫ���ף��ۼ�
			if (left[i] * right[i] == 0)
				sum += left[i] + right[i];
			//���������ֶ��е���ɫ���ף�ִ���ۼ�-��Сֵ+1
			//�ҵ���Сֵ������
			else
			{
				left_sum += left[i];
				right_sum += right[i];
				left_min = min(left_min, left[i]);
				right_min = min(right_min, right[i]);
			}
		}
		//���Ϊ�����Ҷ����������������еĽ��+��0���ڵ�������+����ټ�һ�϶����ܱ�֤�� 
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