#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
//
////1.递归和非递归分别实现求第n个斐波那契数。
////
////递归
//
////int Fib(int n)
////{
////	int a = 1;
////	int b = 1;
////	int c = 1;
////	if (n <= 2)
////	{
////		return c;
////	}
////	else
////	{
////		return Fib(n - 1) + Fib(n - 2);
////	}
////}
////
////int main()
////{
////	int n = 0;
////	int ret = 0;
////	scanf("%d", &n);
////	ret = Fib(n);
////	printf("%d\n", ret);
////}
//
////非递归
//
////int Fib(int n)
////{
////	int a = 1;
////	int b = 1;
////	int c = 1;
////	if (n <= 2)
////	{
////		return c;
////	}
////	else
////	{
////		int i = 0;
////		for (i = 0; i < n - 2; i++)
////		{
////			c = a + b;
////			a = b;
////			b = c;
////		}
////		return c;
////	}
////}
////
////int main(void)
////{
////	int n = 0;
////	int ret = 0;
////	scanf("%d", &n);
////	ret = Fib(n);
////	printf("%d\n", ret);
////	return 0;
////}
//
////2.编写一个函数实现n^k，使用递归实现
////
//
//int Mypow(int n, int k)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= k; i++)
//	{
//		sum = n*sum;
//	}
//	return sum;
//}
//
//int main(void)
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	printf("请输入操作的对象\n");
//	printf("请输入底数->");
//	scanf("%d", &n);
//	printf("\n");
//	printf("请输入指数->");
//	scanf("%d", &k);
//	printf("\n");
//	ret = Mypow(n, k);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//1729
//172 +9
//17 +2+9
//int DigitSum(int n)
//{
//	int sum = 0;
//	if (n < 9)
//	{
//		return n;
//	}
//	else
//	{
//		return  n % 10 + DigitSum(n / 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = DigitSum(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//

//void reserve_string(char str)
//{
//	int sz = my_strlen(str);
//}
//
//
//int main(void)
//{
//	char s[] = "abcdef";
//	reverse_string(s);
//	printf("%s\n", s);
//	return 0;
//}

void reverse_string(char *string)
{
	if ('\0' != *(++string))
	{
		reverse_string(string);
	}
		printf("%c", *(string - 1));
	
}

int main()
{
	char *a = "abcde";
	reverse_string(a);
	printf("\n");
	return 0;
}


//5.递归和非递归分别实现strlen
//6.递归和非递归分别实现求n的阶乘
//7.递归方式实现打印一个整数的每一位