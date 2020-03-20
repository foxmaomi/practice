#include<iostream>


using namespace std;

int Common(int x, int y)
{
	int r;
	while (r=x%y)
	{
		x = y;
		y = r;
	}
	return y;
}

int main()
{
	int x, y;
	cin >> x >> y;
	int ret = Common(x, y);
	cout << (x * y) / ret << endl;
}

/*
int main()
{
	int n;
	cin >> n;
	vector<string> a;
	a.resize(n);
	for (auto& str : a)
		cin >> str;
	bool lex = true;
	bool len = true;
	for (size_t i = 1; i <a.size(); ++i)
	{
		if (a[i - 1].size() >= a[i].size())
		{
			len = false;
			break;
		}
	}
	for (size_t i = 1; i <a.size(); ++i)
	{
		if (a[i - 1] >= a[i])
		{
			lex = false;
			break;
		}
	}
	if (len && lex)
		cout << "both" << endl;
	else if (!len && lex)
		cout << "lexicographically" << endl;
	else if (len && !lex)
		cout << "lengths" << endl;
	else if (!len && !lex)
		cout << "none" << endl;
	return 0;
}
*/