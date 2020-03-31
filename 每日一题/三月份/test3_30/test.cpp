#include<iostream>

using namespace std;
int main()
{
	float pi = 3.14;
	int x, r;
	cin >> x >> r;
	float l;
	l = 2 * pi * r;
	if (l > x)
		cout << "YSE" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
