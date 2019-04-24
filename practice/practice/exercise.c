#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 101; a <= 200; a+=2)
//	{
//		//判断是否为素数
//		int j = 0;
//		for (j = 2; j < sqrt(a); j++)
//		{
//			if (a%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(a))
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	system("pause");
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i;j++)
//		{
//			//打印一项
//			printf("%d*%d=%-3d", i, j, i*j);
//		}
//		printf("\n");
//
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 || i % 100 != 0 && i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	system("pause");
//	return 0;
//}
////数字的交换
//int main()
//{
//	int a = 6;
//	int b = 10;
//	int t = 0;
//	t = a;
//	a = b;
//	b = t;
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}
//求10个数的最大值
//
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int t = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	max = a[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//	printf("%d", max);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a[3] = {0};
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
//	int *aint = &a;
//	int *bl = &b;
//	scanf("%d %d", &a,&b);
//	*aint=&b
//	printf("a=%d\n", a);
//		printf("b=%d", b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//^参与运算的两个值，如果两个相应位相同，则结果为0，否则为1。即：0^0=0， 1^0=1， 0^1=1， 1^1=0
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a= %d  b = %d\n", a, b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a, b;
//	int c = 0;  //计数器 
//	while (1)  //循环判断的作用 
//	{
//		printf("输入两个数字求最大公约数:");
//		scanf("%d%d", &a, &b);
//		while (a != b)
//		{
//			if (a>b)
//				a = a - b;
//			else
//				b = b - a;
//			c++;
//		}
//		printf("最大公约数是:%d\n", a);
//		/*printf("%d\n", c);
//	}*/
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	while (a != b)
//	{
//		if (a > b)
//		{
//			a = a - b;
//		}
//		else
//		{
//			b = b - a;
//		}
//	}
//	printf("最大公约数是%d", a);
//	system("pause");
//	return 0;
////}
//int main()
//{
//	int a[3] = { 1, 2, 3 };
//	int b[3] = { 4, 5, 6 };
//	int t = 0;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		t = a[i];
//		a[i] = b[i];
//		b[i] = t;
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("a[i]=%d", a[i]);
//		printf("b[i]=%d", b[i]);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a[100] = { 0 };
//	int b[100] = { 0 };
//	int i = 0;
//	int t = 0;
//	//请输入a数组的元素个数
//	scanf("%d", &i);
//	for (t = 0; t < i; t++)
//	{
//		scanf("%d", &a[t]);
//	}
//	
//}
//int main()
//{
//	int i = 0;
//	int s = 0;
//	int n = 0;
//	int j = 0;
//	scanf("%d", &n);
//	for (i = 0; i <5; i++)
//	{
//		s = s * 10 + n;
//		j += s;
//	}
//	printf("%d", j);
//	system("pause");
//	return 0;
//}
//int main()
//  {
//	int x;
//	scanf("%d", &x);
//	int n = 0;
//	int sn = 0;
//	int i = 0;
//	for (; i <5; i++)
//	{
//		n = n * 10 + x;
//		sn += n;
//	}
//	printf("%d\n", sn);
//	system("pause");
//	return 0;
//}
//void find_mid(int a[])
//{
//	int left = 0;
//	int k = 7;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了");
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	find_mid(arr);
//	system("pause");
//	return 0;
//}
////int find_year(int year)
//{
//	if (((year % 4 == 0） && （year % 100 !=0))||( year / 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (find_year(year) == 1)
//	{
//		printf("%d是闰年");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int k = 7;
//	int left = 0;
//	int right = left + (right - left) / 2;
//		lab(arr;)
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int len = strlen(""abc);
//	printf("%s", len);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int mid = 0;
//	int left = 0;
//	int k = 7;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	mid = left + (right - left) / 2;
//	if (arr[mid] < k)
//	{
//		left = mid + 1;
//	}
//	else if (arr[mid]>k)
//	{
//		jkkk
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int k = 7;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到了");
	}
}