#include<iostream>

using namespace std;

int f(int x, int y)
{
	if (x <= 0 || y <= 0)
		return 1;
	return 3 * f(x - 6, y / 2);
}

int main()
{
	cout << f(20, 13) << endl;
}