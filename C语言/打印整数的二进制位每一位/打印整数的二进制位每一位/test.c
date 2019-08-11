#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	//for (i = 0; i < 32; i++)
	//{
	//	printf("%d ", (n >> i) & 1);
	//}
	//printf("\n");
	for (i = 31; i >= 0; i--)
	{
		printf("%d ", (n >> i) & 1);
	}
	system("pause");
	return 0;
}
//
int main()
{
	int m = 1999;
	int n = 2299;
	int count = 0;
	int i = 0;
	//00000000 00000000 00000111 11001111
	//00000000 00000000 00010001 10011001
	for (i = 0; i <32; i++)
	{
		if ((((m >> i) & 1) ^ ((n >> i)&1)) == 1)
		{
			count++;
		}

	}
	printf("%d", count);
	system("pause");
	return 0;

}

