#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = 10 - i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	system("pause");
}