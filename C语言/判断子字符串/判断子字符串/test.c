#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

void Print(char a[])
{
	int i = 0;
	int len = strlen(a);
	for (i = 0; i < len; i++)
	{
		printf("%c", a[i]);
	}
}

//int Movestr(char *p,char *p1)
//{
//	
//	int len = strlen(p);
//	int len1 = strlen(p1);
//	if (len != len1)
//	{
//		return 0;
//	}
//	int j = 0;
//	for (j = 0; j < len; j++)
//	{
//		char tmp = *p;
//		int i = 0;
//		
//		for (i = 0; i < len - 1; i++)
//		{
//			*(p + i) = *(p + i + 1);
//		}
//		*(p + len - 1) = tmp;
//		if (strcmp(p, p1) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	char a[] = "AABCD";
//	char a1[] = "BCDAA";
//	int ret = 0;
//	ret = Movestr(a, a1);
//	if (ret == 0)
//	{
//		printf("no\n");
//	}
//	else
//	{
//		printf("yes\n");
//	}
//	Print(a);
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	char arr[20] = "abcdef";
//	strncat(arr, arr, 6);
//	char* ret = strstr(arr, "abcdef");
//	if (ret == NULL)
//	{
//		printf("no\n");
//	}
//	else
//	{
//		printf("yes\n");
//	}
//	Print(arr);
//	system("pause");
//	return 0;
//}

int left_str(char* str1, char* str2)
{
	char*p = NULL;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
	{
		return 0;
	}
	strncat(str1, str1, 5);
	p = strstr(str1, str2);
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}


int main()
{
	char arr1[20] = "AABCD";
	char arr2[] = "BCDAA";
	int ret = left_str(arr1, arr2);
	if (ret == 1)
	{
		printf("找到了\n");
	}
	else
	{
		printf("找不到\n");
	}
	system("pause");
	return 0;

}