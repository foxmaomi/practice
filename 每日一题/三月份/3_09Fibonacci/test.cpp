#include <algorithm>
#include<iostream>
#include<string>
#include<stack>
using namespace std;

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