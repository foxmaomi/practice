#include<iostream>
#include<vector>
#include<string>
#include <iterator>

using namespace std;

int findit(string str, vector<int> a)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		a[str[i]]++;
	}
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == 1)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	string str;
	vector<int> a;
	getline(cin, str);
	a.resize(257,0);
	char c;
	int ret = findit(str, a);
	c = ret;
	if (c >= 0 && c <= 257)
		cout << c << endl;
	else
		cout << -1 << endl;

	return 0;
}