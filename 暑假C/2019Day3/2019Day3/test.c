#define _CRT_SECURE_NO_WARNINGS

#include<string.h>
#include<stdio.h>

//int main()
//{
//	int a = 5;
//	if (a = 0)//=为赋值操作符，==为比较操作符；故0为假所以执行else语句
//	{
//		printf("%d\n", a - 10);
//	}
//	else
//	{
//		printf("%d\n", a++);
//	}
//   	return 0;
//}
//
//int main()
//{
//	double **a[3][4];
//	int sz = sizeof(a);
//	printf("%d\n", sz);
//}
//
//int main()
//{
//	int z = 2;
//	int x = 2;
//	int y = 3;
//	if (x > y)
//	{
//		z = 1;
//	}
//	else if (x == y)
//	{
//		z = 0;
//	}
//	else
//	{
//		z = -1;
//	}
//	printf("%d\n", z);
//}
//
//int main()
//{
//	char achello[] = "hello\0world";
//	char acnew[15] = { 0 };
//	strcpy(acnew, achello);
//	int len = strlen(acnew);
//	int sz = sizeof(achello);
//	printf("%d %d\n", len, sz);
//	return 0;
//}

//求第n个斐波那契数列（非递归）
//
int main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	if (n <= 2)
	{
		printf("c=%d\n", c);
	}
	else
	{
		for (i = 1; i <= n - 2; i++)
		{
			c = a + b;
			a = b;
            b = c;
		}
	}
	printf("%d\n", c);


}

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//
//	scanf("%d", &n);
//	ret = fib(n);//
//	printf("%d\n", ret);
//
//
//	return 0;
//}

//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int binsearch(int arr[], int k,int left, int right)
//{
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int k = 6;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ret = 0;
//	int left = 0;
//	int right = 9;
//	//printf("%d\n", len);
//	ret = binsearch(arr, k, left, right);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//}