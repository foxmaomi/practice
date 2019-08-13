#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//
//void exchange(int *str1, int *str2, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = *str1;
//		*str1 = *str2;
//		*str2 = tmp;
//		str1++;
//		str2++;
//	}
//}
//void print(int arr[],int sz)
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
//	int i = 0;
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[] = { 7, 8, 9, 10, 11, 12, 13 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	print(arr1,sz);
//	print(arr2,sz);
//	exchange(arr1, arr2, sz);
//	print(arr1,sz);
//	print(arr2,sz);
//	return 0;
//}
//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = (1.0 / i)*flag + sum;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//}

//int main()
//{
//	int i = 1;
//	int flag = 1;
//	float sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("sum is %f\n", sum);
//	
//	return 0;
//}
//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。

//个位的9和十位的9
int main()
{
	int i = 0;
	int count = 0;
	//打印1-100；
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
			printf("%d ", i);
		}
		if (i / 10 == 9)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("%d\n", count);
}