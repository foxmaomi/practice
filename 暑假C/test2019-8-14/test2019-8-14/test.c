#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<string.h>
//1. 写一个函数可以判断一个数是不是素数。


//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = is_prime(n);
//	if (ret == 1)
//	{
//		printf("n = %d是素数\n", n);
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//}
//2. 写一个函数判断一年是不是闰年。
//
//int is_leap_year(int y)
//{
//	return (y % 4 == 0 && y % 100 != 0 || y % 400 == 0);
//} 
//
//
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	scanf("%d", &year);
//	ret = is_leap_year(year);
//	if (ret == 1)
//	{
//		printf("%d 是闰年\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//}

//3. 写一个函数，实现一个整形有序数组的二分查找。
//
//int bin_search(int arr[], int n, int left, int right)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = bin_search(arr, n, left, right);
//	if (ret == -1)
//	{
//		printf("找不到呵呵\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n",ret);
//	}
//}

//4. 写一个函数，每调用一次这个函数，就会将num的值增加1。
//
//void Add(int *pn)
//{
//	(*pn)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	Add(&num);
//
//	Add(&num);
//
//	Add(&num);
//
//	Add(&num);
//	Add(&num);
//
//	Add(&num);
//	printf("%d\n", num);
//}

//
//1.完成猜数字游戏。
//
//void menu()
//{
//	printf("***************************\n");
//	printf("*****     1. play    ******\n");
//	printf("*****     0. exit    ******\n");
//	printf("***************************\n");
//}
//
//void game()
//{
//	//printf("fasdf\n");
//	//产生随机数
//	int n = rand() % 100 + 1;
//	//printf("%d\n", n);
//	//猜数字
//	int k = 0;
//	while (1)
//	{
//		printf("请输入猜出的数字-> ");
//		scanf("%d", &k);
//		if (k > n)
//		{
//			printf("猜大了\n");
//		}
//		else if (k < n)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了，是%d\n", n);
//			return;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//}
//2.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
//
//
//int bin_search(int arr[], int n, int left, int right)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int n = 0;
//	int ret = 0;
//	printf("请输入要查找的数字\n");
//	scanf("%d", &n);
//	ret = bin_search(arr, n, left, right);
//	if (ret == -1)
//	{
//		printf("找不到， \n");
//	}
//	else
//	{
//		printf("找到了 ，下标是%d\n", ret);
//	}
//}

//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//

//void menu()
//{
//		printf("***************************\n");
//		printf("*****     1. 登录    ******\n");
//		printf("*****     0. exit    ******\n");
//		printf("***************************\n");
//
//}
//
//void dd()
//{
//	//printf("Sad");
//	int i = 0;
//	char s[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入，，密码");
//		scanf("%s", s);
//		if (strcmp(s, "123456") == 0)
//		{
//			printf("登录成功\n");
//		}
//		else
//		{
//			printf("请重新输入密码\n");
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			dd();
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default :
//			printf("请重新选择\n");
//			break;
//		}
//	} while (input);
//}

//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。

//int main()
//{
//	int ch = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch > '0' && ch < '9')
		{
			continue;
		}
		if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch - 32);
		}
		if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch + 32);
		}
	}
	return 0;
}