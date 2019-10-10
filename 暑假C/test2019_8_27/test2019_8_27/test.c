#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。
//

//void find_num(int arr[], int sz, int *p1, int*p2)
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	int pos = 0;
//	int k = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	//ret = 5 ^ 6;
//	//printf("%d", ret);
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos)&1) == 1)
//		{
//			k = k^arr[i];
//		}
//	}
//	*p1 = k;
//	*p2 = ret ^ (*p1);
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
//	int num1 = 0;
//	int num2 = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_num(arr, sz, &num1, &num2);
//	printf("%d %d", num1, num2);
//}
//


//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
//int main()
//{
//	int money = 0;
//	int empty = 0;
//	int count = 0;
//	scanf("%d", &money);
//	count += money;
//	empty = money;
//	while (empty >= 2)
//	{
//		
//			count += empty / 2;
//			empty = empty / 2 + empty%2;
//		
//	}
//	printf("%d\n", count);
//}

//
//3.模拟实现strcpy
#include<string.h>

//char * my_strcpy(char *dest, const char *sorc)
//{
//	char *tmp = dest;
//	while ((*(dest++)) = *(sorc++))
//	{
//		;
//	}
//	return tmp;
//
//}
//
//int main()
//{
//	char s1[20] = { 0 };
//	char s2[] = "abcdef";
//	printf("%s\n", my_strcpy(s1, s2));
//}
//4.模拟实现strcat   字符串追加
//char *strcat( char *strDestination, const char *strSource );

//void main(void)
//{
//	char string[80];
//	strcpy(string, "Hello world from ");
//	strcat(string, "strcpy ");
//	strcat(string, "and ");
//	strcat(string, "strcat!");
//	printf("String = %s\n", string);
//}

//char * my_strcat(char *dest, const char *sorc)
//{
//	char *tmp = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while ((*(dest++)) = *(sorc++))
//	{
//		;
//	}
//	return tmp;
//}
//
//int main()
//{
//	char s1[80] = "hello world from ";
//	my_strcat(s1, "strcpy ");
//	my_strcat(s1, "and ");
//	my_strcat(s1, "strcat! ");
//	printf("%s\n", s1);
//	
//}



