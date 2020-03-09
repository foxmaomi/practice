#include<iostream>
#include<vector>
#include<string>
using namespace std;


class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		if (A.empty())
			return false;
		n = A.size();
		string s1;
		string s2;
		string::iterator it = A.begin();
		while (it != A.end())
		{
			if (*it == '(' || *it == '{' || *it == '[')
				s1.push_back(*it);
			else if(*it == ')' || *it == '}' || *it == ']')
				s2.push_back(*it);
		}
		string::iterator it1 = s1.begin();
		string::iterator it2 = s2.begin();
		while (it1 != s1.end() && it2 != s2.end())
		{
			;
		}
		if (s1.empty() && s2.empty())
			return true;
		else 
			return false;
		
		// write code here
	}
};

int main()
{
	Parenthesis s;
}

/*
int Fib(int x)
{
	if (x == 0)
		return 0;
	else if (x <= 1)
		return 1;
	else
		return Fib(x - 1) + Fib(x - 2);
}


int main()
{
	int left = 0;
	int x = 0;
	int i = 1;
	int count1 = 0;
	int count2 = 0;
	cin >> x;
	while (i)
	{
		if (Fib(i) < x)
			i++;
		else
			break;
	}
	left = i - 1;
	count1 = x - Fib(left);
	count2 = Fib(i) - x;
	if (count1 < count2)
		cout << count1 << endl;
	else
		cout << count2 << endl;
}


/*
class parent
{
	int i;
protected:
	int x;
public:
	parent()
	{
		x = 0; i = 0;
	}
	void change() { x++; i++; }
	void display();
};
class son :public parent
{
public:
	void modify();
};
void parent::display() { cout << "x=" << x << endl; }
void son::modify() { x++; }

int main()
{
	son A;
	parent B;
	A.display();
	A.change();
	A.modify();
	A.display();
	B.change();
	B.display();
}

/*
int main()
{
	int n = 0;
	char ch;
	for (ch = getchar(); ch != '\n'; n++)
	cout << n << endl;
}

/*
int main()
{
	int a = 1, b = 2, c = 3, d = 0;
	if (a == 1 && b++ == 2)
		if (b != 2 || c-- != 3)
			printf("%d %d %d\n", a, b, c);
		else
			printf("%d %d %d \n", a, b, c);
	else
		printf("%d %d %d \n", a, b, c);
	return 0;
}


/*
void main()
{
	int a = 1, b = 0, c = -1, d = 0;
	d = ++a || ++b && ++c;
	cout << d << endl;
	return;
}

/*
int main()
{
	int p[][4] = { {1},{3,2},{4,5,6},{0} };
	cout << p[1][2] << endl;
}



/*
class A
{
	friend long fun(A s)
	{
		if (s.x < 3) {
			return 1;
		}
		return s.x + fun(A(s.x - 1));
	}
public:
	A(long a)
	{
		x = a--;
	}
private:
	long x;
};

int main()
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += fun(A(i));
	}
	cout << sum;
}

/*
template<class T> 
class Big {
	long n;
public:
	Big(T i):n(i){}
	Big operator+(Big b)
	{
		return Big(n + b, n);
	}
};
int main()
{
	Big<long> b1+3;
	Big<long> b1 + b2;
	Big<long> 3+b1;
}
*/