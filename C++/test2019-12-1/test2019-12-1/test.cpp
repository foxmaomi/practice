#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//class Int;
//friend ostream& operator << (ostream &out, const Complex &c);
typedef struct Test
{
	int a;
	struct type
	{
		short l;
		double p;
		char h;
	};
	long i;
};

void main()
{
	cout << sizeof(Test) << endl;
}

/*class Int
{
	friend ostream& operator << (ostream &out, const Complex &c);
public:
	Int(int i = 0) :m_i(i)
	{}
	~Int()
	{}
public:
	//Int operator+(const Int &x);
	//Int operator+(const Int &x);
	//Int operator+(const Int &x);
	//Int operator+(const Int &x);
	//Int operator+(const Int &x);
	//Int operator+(const Int &x);
	//Int operator+(const Int &x);
public:
	//Int operator+(const Int &x);
	//Int operator+(const Int &x);
	//Int operator+(const Int &x);
	//Int operator+(const Int &x);
	//Int operator+(const Int &x);
	//Int operator+(const Int &x);
	//Int operator+(const Int &x);
	//Int operator+(const Int &x);
public:
	//Int operator+(const Int &x);
	//Int operator+(const Int &x);
private:
	int m_i;
};
ostream& operator << (ostream &out, const Complex &c)
{
	cout<<i.
}
void main()
{
	Int i;
	cout << m_i << endl;

}*/