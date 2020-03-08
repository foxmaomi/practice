#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
#define MAX 100000
int main()
{
	int ar[MAX] = { 0 };
	int len = 0;
	cin >> len;
	
	int max = 0;
	int i = 0;
	for (i = 0; i < len; i++)
	{
		cin >> ar[i];
	}
	i = 0;
	while (i<len)
	{
		int count = 0;
		while (ar[i] < 0)
			i++;
		int left = i;
		while (ar[i] > 0)
			i++;
		int right = i;
		while (left <= right)
		{
			count += ar[left];
			left++;
		}
		if(max>count)
		{ }
		else
		{
			max = count;
		}
	}
	cout << max << endl;
	return 0;
}




/*
int main()
{
	string s;
	cin >> s;
	int begin = 0;
	int end = s.size() - 1;
	while (begin++ < end--)
	{
		if (begin < end )
		{
			if ((s[begin] == s[end]))
			{
			}
			else
				break;
		}
		else
			break;
	}
	if (s[begin] != s[end])
	{
		cout << "error" << endl;
	}
	else
	{
		cout << "yes" << endl;
	}
}


/*
void Insert(std::string s1,std::string s2,int count)
{
	auto x = s2.size();

}

int main()
{
	string s1;
	string s2;
	string s3;
	cin >> s1;
	cin >> s2;
	int count = 0;
	s1.reserve(100);
	s1.reserve(100);
	string::iterator right = s1.begin();
	while (right++ != s1.end())
	{
		string s4 = s1;
		string s5 = s2;
		Insert(s4, s5, count);
		count++;
		int begin = 0;
		int end = s4.size() - 1;
		while (begin++ <= end--)
		{
			if (begin < end)
			{
				if()
			}
		}
	}


}




/*
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