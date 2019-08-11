#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	//打印13行
//	for (i = 1; i <= 7; i++)
//	{
//		//打印一列
//		//打印上三角
//		for (n = 1; n <= (2 * i - 1); n++)
//			printf("*");
//		printf("\n");
//	}
//	//打印下三角
//	for (i = 5; i > 0; i--)
//	{
//		for (int n = 0; n < 2 * i - 1; n++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()//打印素数
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//printf("%d ", i);
//		for (j = 2; j <= sqrt(i);j++)
//		if (i / j == 0)
//		{
//			;
//		}
//		else
//		{
//			printf("%d是素数", i);
//		}
//
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("一共有%d个素数", count);
//	system("pause");
//	return 0;
//}
//打印乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//打印一行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一列
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//判断闰年
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("一共有%d个闰年", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int t = 0;
//	printf("a=%d,b=%d\n", a, b);
//	t = a;
//	a = b;
//	b = t;
//	printf("a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d,b=%d\n", a, b);
//	//按位异或^符号
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}
//void swap(int *px, int *py)
//{
//	int t = 0;
//	t = *px;
//	*px = *py;
//	*py = t;
//
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int max = arr[0];
//	int t = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		if (max < arr[i])
//		{
//			t = max;
//			max = arr[i];
//			arr[i] = max;
//		}
//	}
//	printf("最大值是%d\n", max);
//	system("pause");
//		return 0;
//}
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 1; j < 3;j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				t = arr[i];
//				arr[i] = arr[j];
//				arr[j] = t;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	system("pause");
//	return 0;
//
//}
////int main()
//{
//	int i = 0;
//	int a[3] = { 0 };
//	int t = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 1; j <= 2; j++)
//		{
//
//			if (a[i] < a[j])
//			{
//				t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	scanf("%d %d", &a, &b);
//	while( t=a%b)
//	{
//		a = b;
//		b = t;
//	}
//	printf("%d", b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int t = 0;
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}
//void swap(int *px, int *py)
//{
//	int t = 0;
//	if (*px < *py)
//	{
//		t = *px;
//		*px = *py;
//		*py = t;
//	}
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	swap(&a, &b);
//	swap(&a, &c);
//	swap(&b, &c);
//	printf("%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	while (a%b)
//	{
//		int t = a%b;
//		a = b;
//		b = t;
//	}
//	printf("最大公约数是%d\n", b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	scanf("%d %d", &a, &b);
//	while (a - b)
//	{
//		if (b > t)
//		{
//			t = a - b;
//			a = b;
//			b = t;
//		}
//		else
//		{
//			a = t;
//			t = a - b;
//		}
//
//	}
//	printf("最大公约数是%d", b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 6, 7, 8, 9, 10 };
//	int i = 0;
//	int t = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		t = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = t;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int z = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i)*z;
//		z = -z;
//	}
//	printf("%lf", sum);
//	system("pause");
//	return 0;
//}
//void SwapArr(int arr1[], int arr2[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int t = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = t;
//	}
//}
//void PrintfArr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	SwapArr(arr1, arr2, sz);
//	PrintfArr(arr1, sz);
//	PrintfArr(arr2, sz);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i/10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}