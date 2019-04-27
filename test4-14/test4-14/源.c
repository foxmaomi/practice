#define _CRT_SECURE_NO_WARINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	for (a = 100; a <= 200; a++)
	{
		if (a % 2 == 1)
		{
			printf("%d", a);
		}
	}
	system("pause");
	return 0;
}