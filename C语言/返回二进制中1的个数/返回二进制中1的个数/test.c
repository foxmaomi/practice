#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}

//int count_one_bits(size_t  n)
//{
//	// 0000 1111
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int count_one_bits(int n)
//{
//	// 0000 1111
//	int i = 0;
//	int count = 0;
//	while ()
//	{
//		count++;
//	}
//	return count;
//}

//1234
//1111
//15%2==1
//15/2
//
//int count_one_bits(size_t  n)
//{
//	int count = 0;
//	while (n%2 == 1)
//	{
//		n = n / 2;
//		count++;
//	}
//	return count;
//}

//
//int count_one_bits(size_t  n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//00001111   n
//00001110    n-1
//00001110   n&n-1
int count_one_bits(size_t  n)
{
	// 0000 1111
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++; 
	}
	return count;
}

int main()
{
	int n = 15;
	//int n = -1;
	int ret = count_one_bits(n);
	printf("%d\n", ret);
	system("pause");
	return 0;

}