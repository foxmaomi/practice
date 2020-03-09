#include<stdio.h>


int main()
{
	int b = 2;
	//const int* a = &b;
	//a = 4;
	//*a = 4;
	//int const* c = &b;
	//c = 4;
	//*c = 4;
	int* const a = &b;
	*a = 3;
}