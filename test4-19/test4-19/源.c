#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		else if (i % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int t = 1;
//	int n = 0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		t = i*t;
//	}
//	printf("%d", t);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int t = 1;
//	int n = 10;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		t = 1;
//		for (j = 1; j <= i; j++)
//		{
//			t = t * j;
//		}
//		sum = sum + t;
//	}
//	printf("%d", t);
//	system("pause");
//	return 0;
//
//}
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
//		for (int n = 0; n < 2 * i - 1;n++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = n; i>0; i--)
//	{
//		for (int j = 0; j<2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999; i++)
//	{
//		int tmp = 0;
//		int sum = 0;
//		int count = 1;
//		tmp = i; //把i赋值给tmp
//		while (tmp / 10)//用while循环判断有几位数
//		{
//			count++;//满足条件，计数器++
//			tmp /= 10;
//		}
//		tmp = i;//重新赋值
//		//while(tmp)如何判断
//		while (tmp)//判断i是否为水仙花数
//		{
//			sum += pow((tmp % 10), count);//pow函数，求一个数的次方，如输入参数pow（3,3），即得27
//			tmp /= 10;
//		}
//		if (sum == i)//如果sum等于i，找到了，并且输出
//			printf("%d ", i);
//
//
//	}
//	system("pause");
//	return 0;
//
//}
//int main()
//{
//	INT_MAX;
//	int i = 0;
//	int s = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= 5; i++)
//	{
//		s = s + n * 10;
//	}
//	printf("%d", s);
//	system("pause");
//	return 0;
//}
//

