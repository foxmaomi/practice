#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int fun(int a, int b)
//{
//	if (a > b)
//	{
//		return (a + b);
//	}
//	else
//		return (a - b);
//}
//int main()
//{
//	int x = 3;
//	int y = 8;
//	int z = 6;
//	int r;
//	r = fun(fun(x, y), 2 * z);
//	printf("%d\n", r);
//	return 0;
//}
//
int f(int a)
{
	int b = 0;
	static int c = 3;
	a = c++, b++;
	return (a);
}

int main()
{
	int a = 2;
	int i;
	int k;
	for (i = 0; i < 2; i++)
	{
		k = f(a++);
	}
	printf("%d\n", k);
	return 0;
}
//
//int x = 3;
//void inc()
//{
//	static int x = 1;
//	x *= (x + 1);
//	printf("%d\n", x);
//	return;
//}
//
//int main()
//{
//	int i;
//	for (i = 1; i < x; i++)
//	{
//		inc();
//	}
//	return 0;
//}


//编写函数要求逆置单链表（不带头结点）
