#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int line = 0;
//	int j = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)	//打印一行
//	{
//		for (j = 0; j < line-1 - i; j++)   //打印“空格”
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)//打印下半行
//	{
//		for (j = 0; j <= i; j++)//打印空格
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 1000000; n++)
//	{
//		//判断n为几位数
//		int count = 1;
//		int sum = 0;
//		int tmp = n;//循环内部不能改变循环变量
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		//计算水仙花数
//		tmp = n;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (n == sum)
//		{
//			printf("count=%d  ", count);
//			printf("%d", sum);
//			printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 1000000; n++)
//	{
//		//计算几位数
//		int sum = 0;
//		int count = 1;
//		int tmp = n;
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = n;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (n == sum)
//		{
//			printf("count=%d  ", count);
//			printf("%d", sum);
//			printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int n = 0;
	int sum = 0;
	int i = 0;
	int a = 0;
	int count = 0;
	scanf("%d%d", &a,&n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * 10 + a;
		count = sum + count;
	}
	printf("%d", sum);
	printf("\n");
	printf("%d", count);
	system("pause");
	return 0;
}