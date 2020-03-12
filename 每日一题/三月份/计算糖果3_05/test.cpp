#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s, table = "0123456789ABCDEF";
	int m, n;
	cin >> m >> n;
	bool flag = false;
	if (m < 0)
	{
		m = -m;
		flag = true;
	}
	while (m)
	{
		s += table[m % n];
		m /= n;
	}
	if (flag)
		s += '-';
	reverse(s.begin(), s.end());
	cout << s << endl;
	return 0;
}




/*
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int A = (a + c) / 2;
	int C = (d - b) / 2;
	int B1 = (c - a) / 2;
	int B2 = (d + b) / 2;
	if (B1 != B2)
		cout << "No";
	else
		cout << A << " " << B1 << " " << C;
}

/*
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int A = (a + c) / 2;
	int B = (b + d) / 2;
	int C1 = (B - b);
	int C2 = (d - B);
	if (C1 != C2)
		cout << "NO" << endl;
	else
		cout << A << " " << B << " " << C1 << endl;
}
*/