#include<iostream>

using namespace std;

int main()
{
	int x;
	while (cin >> x)
	{
		if (x == 0)
			return 0;
		
		int count = 0;
		while (x / 2 != 0)
		{
			count++;
			x /= 2;
		}
		cout << count << endl;
	}
	return 0;
}