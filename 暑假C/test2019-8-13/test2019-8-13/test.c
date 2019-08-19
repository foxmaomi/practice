#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
//
//比特科技
//do语句的特点
//循环至少执行一次，使用的场景有限，所以不是经常使用。
//#include <stdio.h>
//int main()
//{
//	int i = 10;
//	do
//	{
//		printf("%d\n", i);
//	} while (i<10);
//	return 0;
//}

//
//练习
//1. 计算 n的阶乘。
//
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = i*ret;
//	}
//	printf("%d\n", ret);
//}

//2. 计算 1!+ 2!+ 3!+ …… + 10!
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//		sum = sum + ret;
//	}
//	printf("ret = %d,sum = %d\n",ret,sum);
//	
//}

//3. 在一个有序数组中查找具体的某个数字n。 编写int binsearch(int x, int v[], int n); 功能：在v[0] <= v[1] <= v[2]
//<= …. <= v[n - 1]的数组中查找x.
//
//int binsearch(int arr[], int k, int left, int right)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left);
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
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	int k = 0;
//	int ret = 0;
//	scanf("%d", &k);
//	ret = binsearch(arr, k, left, right);
//	if (arr[ret] == k)
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	else
//	{
//		printf("没有找到\n");
//	}
//	return 0;
//}
//4. 编写代码，演示多个字符从两端移动，向中间汇聚。
//int main()
//{
//	char s1[] = "welcome to bainiao!!!!";
//	char s2[] = "**********************";
//	int left = 0;
//	int right = strlen(s1);
//	while (left <= right)
//	{
//		s2[left] = s1[left];
//		s2[right] = s1[right];
//		left++;
//		right--;
//		printf("%s\n", s2);
//	}
//	return 0;
//}
//5. 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录
//成，如果三次均输入错误，则退出程序。
int main()
{
	char s[20] = { 0 };
	int i = 0;
	
	for (i = 0; i < 3; i++)
	{
		scanf("%s", s);
		if (strcmp(s, "123456") == 0)
		{
			printf("登录成功\n");
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
}