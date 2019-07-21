#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//
//int main()
//{
//	int n = 0;
//	//0000 1010
//	int i = 0;
//	scanf("%d", &n);
//	//int count = 0;
//	//偶数位
//	//0111 1110
//	for (i = 31; i > 0;i-=2)
//	{
//		printf("%d ", (n >> i) & 1);
//		//count++;
//	}
//	printf("\n");
//	//printf("%d ", count);
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	//01111110
//	//000000000 00000000000000000001111
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (n>>i)&1);
//	}
//	printf("\n");
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (n>>i)&1);
//	}
//	printf("\n");
//
//	system("pause");
//
//	return 0;
//}

//3. 输出一个整数的每一位。
//
//int main()
//{
//	int n = 0;
//	//while (n)
//	//{
//	//	printf("%d", n & 1);
//	//	n = n >> 1;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	printf("%d ", (n >> i) & 1);
//	//}
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 31; i >= 0; i--)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//
//}

//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

int main()
{
	int n = 0;//1111
	int m = 0;//1010
	int i = 0;
	int count = 0;
	scanf("%d %d", &m, &n);
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
		{
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}