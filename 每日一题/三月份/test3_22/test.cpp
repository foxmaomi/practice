#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, s2;
	string str1, str2;
	int count = 0;
	int sum = 0;
	getline(cin, s1);
	getline(cin, s2);
	if (s1.size() < s2.size())
	{
		str1 = s1;
		str2 = s2;
	}
	else
	{
		str1 = s2;
		str2 = s1;
	}
	string::iterator it1 = str1.begin();
	string::iterator it2 = str1.end();
	while (it1 != str1.end())
	{
		if (*it1 == *it2)
		{
			sum++;
		}
		else {
			sum = 0;
		}
		if (sum > count)
			count = sum;
	}
}



/*
int main()
{
	int x;
	while (cin >> x)
	{
		cout << (x / 2) << endl;
	}
}



/*
bool f(int n)
{
	int sum = 0;
	for (int i = 1; n > sum; i += 2)
		sum = sum + i;
	return (n == sum);
}

int main()
{
	cout << f(484) << endl;
}
*/
