#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
//void menu()
//{
//	printf("***********************\n");
//	printf("******* 1.play  *******\n");
//	printf("******* 0.exit  *******\n");
//	printf("***********************\n");
//}
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		int input = 0;
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	//产生随机数字
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入：>");
//		scanf("%d",&input);
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 2:
//				break;
//			default:
//				printf("请重新输入>：\n");
//				break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int n = 7;
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了");
//	}
//	system("pause");
//	return 0;
//}
//int find(int arr[],int sz,int n)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//		return 0;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 7;
//	int left = 0;
//	int ret = find(arr, sz, n);
//	if (ret == 0)
//	{
//		printf("找不到！！！！！");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int k = 7;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}
//int find(int arr[], int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int ret = find(arr, sz, k);
//	if (ret == -1)
//	{
//		printf("找不到！！！！！\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehehe\n");
//	}
//	system("pause");
//	return 0;
//}
//void menu()
//{
//	printf("***********************\n");
//	printf("****** 请输入密码 *****\n");
//	printf("***********************\n");
//}
//int main()
//{
//	menu();
//	char arr[6] = {0};
//	int i = 0;
//	//密码为123
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", &arr);
//		if (strcmp(arr, "123") == 0)
//		{
//			printf("登录成功！\n");
//			break;
//		}
//		else
//		{
//			printf("请重新输入密码！！！\n");
//		}
//	}
//	system("pause");
//	return 0;
//
//
//}
//int main()
//{
//	int ch=getchar();
//	int t = 0;
//	printf("hehe,%c\n",ch);
//	while (t = getchar() != '\n')
//	{
//		;
//	}
//	//fflush(stdin);
//	ch=getchar();
//	printf("%d\n", ch);
//	printf("haha,\n");
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	//打印n列
//	for (i = 1; i <= n; i++)
//	{
//		//打印一行
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d*%2d=%2d ", i, j,i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//void exchange(int *px, int *py)
//{
//	int t = 0;
//	t = *px;
//	*px = *py;
//	*py = t;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	exchange(&a, &b);
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	system("pause");
//	return 0;
//}
//int judgement_year(int year)
//{
//	if ((year % 4 == 0) || (year % 100 != 0) && (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = judgement_year(year);
//	if (ret == 1)
//	{
//		printf("%d是闰年", year);
//	}
//	else
//	{
//		printf("%d不是闰年", year);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) || (i / 100 != 0) && (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}
//int prime_number(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//		{
//			return -1;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = prime_number(i);
//	if (ret == -1)
//	{
//		printf("%d不是素数", i);
//	}
//	else
//	{
//		printf("%d是素数", i);
//	}
//	system("pause");
//	return 0;
//}
//void initialize_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//void emept_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void reverse_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = sz - 1 - i;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	initialize_arr(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	emept_arr(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	reverse_arr(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	scanf("%d", &n);
//	if (n<)
//	
//	
//}
//int fab(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*fab(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fab(n);
//	printf("ret = %d\n", ret);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum*i;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int i = 0;
//	int n = 0;
//	int c = 0;
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		c = b;
//		b = a + b;
//		a = c;
//	}
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int fib1 = 1;
//	int fib2 = 1;
//	int fib = 2;
//	int i = 3;
//	scanf("%d", &n);
//	for (i = 3; i <= n; i++)
//	{
//		fib = fib1 + fib2;
//		fib1 = fib2;
//		fib2 = fib;
//	}
//	printf("%d", fib);
//	system("pause");
//	return 0;
//
//}
//int Fibonacci()                  //递归实现斐波那契数列求第n个数
//{
//	int n = 1;
//	int fib1 = 1;
//	int fib2 = 1;
//	int fib = 2;
//	printf("Please input a number:\n");
//	scanf("%d", &n);
//	for (int k = 3; k <= n; k++)
//	{
//		fib = fib1 + fib2;
//		fib1 = fib2;
//		fib2 = fib;
//	}
//	printf("第%d个Fibonacci数是：%d\n", n, fib);
//	return fib;
//}
//int main()
//{
//	int ret = Fibonacci();
//	system("pause");
//	return 0;
//}
//int Mypow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n*Mypow(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int c = Mypow(n, k);
//	printf("%d^%d = %d\n", n, k, c);
//	system("pause");
//	return 0;
//}
//int Mypow(int a,int b)
//{
//	if (b == 0)
//	{
//		return 1;
//	}
//	else if (b == 1)
//	{
//		return a;
//	}
//	else
//	{
//		return a*Mypow(a, b-1);
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = Mypow(a, b);
//	printf("%d^%d=%d", a, b, ret);
//	system("pause");
//	return 0;
//}
int f()
{
	static int count = 0;
	return ++count;
}
int main()
{
	int a;
	a = f() - f() * f();
	printf("%d", a);
	system("pause");
	return 0;
}