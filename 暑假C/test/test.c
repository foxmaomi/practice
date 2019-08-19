#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15  4 个 1
//程序原型：
//
//
//int binsearch(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n / 2;
//	}
//	return count;
//}

//0000 1111 -n
//0000 1110 -n-1
//0000 1110 - n&(n-1)
//int binsearch(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n&(n - 1);
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = binsearch(n);
//	printf("%d\n", ret);
//	return 0;
//
//}

//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
//

//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//
//  0101
//
//for (i = 1; i < 32; i += 2)
//{
//	tmp = 1;
//	printf("%d ", tmp&(n >> i));
//}
//printf("\n");
//for (i = 0; i < 32; i += 2)
//{
//	tmp = 1;
//	printf("%d ", tmp&(n >> i));
//}
//5   0101
//00000000
// 1010
//void print(int n)
//{
//	int i = 0;
//	int tmp = 1;
//	printf("偶数位\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		tmp = 1;
//		printf("%d ", tmp&(n >> i));
//	}
//	printf("\n");
//	printf("奇数位\n");
//	for (i = 31; i > 0; i -= 2)
//	{
//		tmp = 1;
//		printf("%d ", tmp&(n >> i));
//	}
//	
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//3. 输出一个整数的每一位。
//

//void print(int n)
//{
//	if (n <= 9)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//		
//	}
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

int difbin(int m, int n)
{
	int count = 0;
	int i = 0;
	int tmp = 1;
	for (i = 0; i < 32; i++)
	{
		tmp = 1;
		if ((tmp&(m >> i)) != ((n >> i)&tmp))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n = 0;
	int m = 0;
	int ret = 0;
	scanf("%d%d", &m, &n);
	ret = difbin(m, n);
	printf("%d\n", ret);
	return 0;
}