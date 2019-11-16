#define _CRT_SECURE_NO_WARNINGS

#include"test.h"

int main()
{
	//int ar[] = { 49, 38, 65, 97, 76, 13, 27, 49 };
	int ar[] = { 5, 6, 8, 4, 1, 2, 9, 7, 3, 10 };
	int n = sizeof(ar) / sizeof(ar[0]);
	PrintArray(ar, 0, n - 1);
	TwoWayInsertSort(ar, 0, n - 1);
	PrintArray(ar, 0, n - 1);
}