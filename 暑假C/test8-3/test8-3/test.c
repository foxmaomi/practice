#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//
//暴力求解法
//void left_exchange(char* str, int k)
//{
//	int j = 0;
//	for (j = 0; j < k; j++)
//	{
//		char tmp = *str;
//		int len = strlen(str);
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//利用3次逆序
//abcdef
//bafedc
//cdefab
//void nixu(char *left, char *right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//		
//
//}
//void left_exchange(char *str,int k)
//{
//	int len = 0;
//	assert(str != NULL);
//	len = strlen(str);
//	nixu(str, str + k - 1);
//	nixu(str + k, str + len - 1);
//	nixu(str, str + len - 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_exchange(arr, k);
//	printf("%s", arr);
//	system("pause");
//	return 0;
//}
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
//int is_left_move(char *arr1, char *arr2)
//{
//	int j = 0;
//	int len = strlen(arr1);
//	for (j = 0; j < len;j++)
//	{
//		char tmp = *arr1;
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(arr1 + i) = *(arr1 + i + 1);
//		}
//		*(arr1 + len - 1) = tmp;
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//	
//}
//int main()
//{
//	int ret = 0;
//	char arr1[]= "aabcd";
//	char arr2[]= "bcdaa";
//	ret = is_left_move(arr1, arr2);
//	printf("%s\n", arr1);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	system("pause");
//	return 0;
//
//}
int main()
{
	char arr[20] = "aabcd";
	char * ret = NULL;
	strncat(arr, arr, 6);
	ret = strstr(arr, "defabc");
	if (ret = NULL)
	{
		printf("不是子字符串\n");
	}
	else
	{
		printf("是子字符串\n");
		printf("%s\n", ret);
	}
	system("pause");
	return 0;
}
