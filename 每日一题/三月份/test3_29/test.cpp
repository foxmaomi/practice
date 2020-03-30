#include<iostream>

using namespace std;

int FindRoot(int x)
{
	int ret;
	ret = x;
	while (ret > 10)
	{
		ret = x % 10 + (x / 10) % 10;		
		x = ret;
	}
	return ret;
}

int main()
{
	int x;
	cin >> x;
	int ret = FindRoot(x);
	cout << ret << endl;
}