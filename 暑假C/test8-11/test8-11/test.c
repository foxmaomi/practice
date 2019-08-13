#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//1. 给定两个整形变量的值，将两个值的内容进行交换。

int main()
{
	int a = 3;
	int b = 4;
	int tmp = a;
	printf("a=%d b=%d\n", a, b);
	a = b;
	b = tmp;
	printf("a=%d b=%d\n", a, b);

}
//void exchange(int *a, int *b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 3;
//	int b = 4;
//	printf("a=%d b=%d\n", a, b);
//	exchange(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//}

//2. 不允许创建临时变量，交换两个数的内容（附加题）
//3.求10 个整数中最大值。
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 15, 5, 6, 7, 8, 9, 5 };
//	int max = arr[0];
//	//打印10个数
//	for (i = 1; i < 10; i++)
//	{
//		//寻找最大值
//		if (max < arr[i])
//		{
//			int tmp = max;
//			max = arr[i];
//			arr[i] = tmp;
//		}
//
//	}
//	printf("max=%d\n", max);
//}
//4.将三个数按从大到小输出。
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = 5;
//	int tmp = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	//a=3b=4c=5
//	//a=4b=3c=5
//	//a=5b=3c=4
//
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d>%d>%d", a, b, c);
//}

//int main()
//{
//	int arr[3] = { 1, 2, 3 };
//	int i = 0;
//	int j = 0;
//	//趟数
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 1; j <= 2; j++)//通过j的增加来控制次数
//		{
//			if (arr[i] < arr[j])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//5.求两个数的最大公约数。
//36 48   12
//150  36
//
//int main()
//{
//	int a = 10; 
//	int b = 20;          
//	//a=01010
//	//b=10100
//	//a=11110  a^b
//	//b=01010  a^b
//	//a=10100  a^b
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
//	int a = 36;
//	int b = 48;
//	int gys = 0;
//
//}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	printf("最大公约数是%d", a);
	return 0;
}