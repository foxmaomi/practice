#include<iostream>

using namespace std;

int main(void)
{
	int m = 5;
	if (m++ > 5)cout << m << endl;
	else cout << --m;
}