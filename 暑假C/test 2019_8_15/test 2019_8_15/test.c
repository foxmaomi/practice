#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

#include<math.h>

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//}

//
//1.在屏幕上输出以下图案：
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
//

//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	for (i = 0; i < line ; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*(line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//
///*
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//153 = 1^3 + 5^3 + 3^3。
//370 = 3^3 + 7^3 + 0^3。
//371 = 3^3 + 7^3 + 1^3。
//407 = 4^3 + 0^3 + 7^3。
//*/
//int main()
//{
//	int i = 0;
//	for(i=1; i<=1000000; i++)
//	{
//		//判断i是否为水仙花数
//		//1. 求位数
//		//i=123
//		int sum = 0;
//		int count = 0;
//		int tmp = i;
//		while(tmp)
//		{
//			tmp/=10;
//			count++;
//		}
//		//2. 求次方和
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp /= 10;
//		}
//		//3. 判断
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//
//void koujue(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//打印一行
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-4d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	koujue(n);
//	return 0;
//}
//2.使用函数实现两个数的交换。
//

//void exchange(int *left, int *right)
//{
//	int tmp = *left;
//	*left = *right;
//	*right = tmp;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 4;
//	printf("a = %d, b = %d\n", a, b);
//	exchange(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//}
//3.实现一个函数判断year是不是润年。
//
//int is_leap_year(int y)
//{
//	return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
//}
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	scanf("%d", &year);
//	ret = is_leap_year(year);
//	if (ret == 1)
//	{
//		printf("year = %d是闰年\n",year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//}
//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//void
void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		arr[i] = i;
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void empty(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		arr[i] = 0;
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
}

int main()
{
	int arr[10] = { 1, 2, 3, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	empty(arr, sz);
	init(arr,sz);
	
	reverse(arr,sz);
}
//5.实现一个函数，判断一个数是不是素数。