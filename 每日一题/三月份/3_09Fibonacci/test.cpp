#include <algorithm>
#include<iostream>
#include<string>
#include<stack>
using namespace std;

class parent
{
	int i;
protected:
	int x;
public:
	parent() { x = 0; i = 0; }
	void  change() { x++; i++; }
	void display();
};
class son:public parent
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
	for (int i = 0; i < 5; i++) {
		sum += fun(A(i));
	}
	cout << sum;
}
/*
class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		stack<char> sc;
		for (auto ele : A) {
			switch (ele) {
			case '(':
				sc.push(ele);
				break;
			case')':
			{
				if (sc.empty() || sc.top() != '(')
					return false;
				else
					sc.pop();
			}
			break;
			default:
				return false;
			}
		}
		return true;
	}
};
int main()
{
	string s;
	getline(cin, s);
	int len = s.size();
	Parenthesis a;
	a.chkParenthesis(s, len);
}

/*
int main()
{
	int n, f, l = 0, r = 0, f0 = 0, f1 = 1;
	cin >> n;
	while (1)
	{
		//计算第n个斐波那契数
		f = f0 + f1;
		f0 = f1;
		f1 = f;
		//寻找左边最近的数
		if (f < n)
			l = n - f;
		else
		{
			r = f - n;
			break;
		}
	}
	cout << min(l, r) << endl;
	return 0;
}

*/