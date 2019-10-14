#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int brr[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (i == j)
//			{
//				continue;
//			}
//			brr[i] = brr[i] * arr[j];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", brr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int b[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
//		b[0] = 1;
//		for (int i = 1; i <=9; i++)
//		{
//			b[i] = b[i - 1] * a[i - 1];
//		}
//
//		for (int i = 10; i >= 1; i--)
//		{
//			b[i] *= b[0];
//			b[0] *= a[i];
//		}
//		for (i = 0; i < 10; i++)
//		{
//
//		}
//}
//src   arr
//dst   brr
void problem(int *src, int *dst, int n)
{
	dst[0] = 1;
	for (int i = 1; i < n; ++i)
	{
		dst[i] = dst[i - 1] * src[i - 1];
	}
	for (int i = n - 1; i>0; --i)
	{
		dst[i] *= dst[0];
		dst[0] *= src[i];
	}
}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int brr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	problem(arr, brr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", brr[i]);
	}
	return 0;
}