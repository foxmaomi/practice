#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <iterator>
#include <utility>  
using namespace std;

int main()
{
	char dog[] = "wang\0miao";
	cout << sizeof(dog) << " " << strlen(dog) << endl;
}

/*
class Base {
public:
	Base(int j):i(j){}
	virtual ~Base(){}
	void func1()
	{
		i *= 10;
		func2();
	}
	int getValue() {
		return i;
	}
protected:
	virtual void func2() {
		i++;
	}
protected:
	int i;
};
class Child :public Base {
public:
	Child(int j):Base(j){}
	void func1() {
		i *= 100;
		func2();
	}
protected:
	void func2() {
		i += 2;
	}
};
int main()
{
	Base* pb = new Child(1);
	pb->func1();
	cout << pb->getValue() << endl;
	delete pb;
}

/*
int main()
{
	char ccString1[] = "Is page Fault??";
	char ccString2[] = "No page Fault??";
	strcpy(ccString1, "No");
	if (strcmp(ccString1, ccString2) == 0)
		cout << ccString2;
	else
		cout << ccString1;
}

/*
//25
10011001
11111111 11111111 11111111 10011001
00000000 00000000 00000000 01100110
00000000 00000000 00000000 01100111
000000000000000000000000000 
  /*
int main()
{
	char str[] = "glad to test something";
	char* p = str;
	p++;
	int* p1 = reinterpret_cast<int*>(p);
	p1++;
	p = reinterpret_cast<char*>(p1);
	printf("result is %s\n", p);
}


/*
class A {
public:
	int GetValue() const {
		vv = 1;
		return vv;
	}
private:
	mutable int vv;
};

/*
int Function(unsigned int n) {
	n = (n & 0x55555555) + ((n >> 1) & 0x55555555);
	n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
	n = (n & 0x0f0f0f0f0f) + ((n >> 4) & 0x0f0f0f0f);
	n = (n & 0x00ff00ff) + ((n >> 8) & 0x00ff00ff);
	n = (n & 0x0000ffff) + ((n >> 16) & 0x0000ffff);
	return n;
}

int main()
{
	int ret = Function(197);
	cout << ret << endl;
}



/*
void perm(int list[], int k, int m)
{
	if ()
	{
		copy(list, list + m, ostream_iterator<int>(cout, " "));
		cout << endl;
		return;
	}
	for (int i = k; i <= m; i++)
	{
		std::swap(list[k], list[i]);

	}
}

/*
class A {
private:
	int a;
};
class B :public A
{
private:
	int a;
public:
	const int b;
	A& c;
	static const char* d;
	B* e;
};
int main()
{

}
*/