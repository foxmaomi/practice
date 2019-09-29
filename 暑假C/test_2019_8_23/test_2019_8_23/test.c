#define _CRT_SECURE_NO_WARNINGS

#include<string.h>
#include<stdio.h>


//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//

//void left_slue(char *str, int sz, int k)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < k; i++)
//	{
//		j = 0;
//		char tmp = *(str + j);
//		for (j = 0; j < sz - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + sz - 1) = tmp;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "abcd";
//	int sz = strlen(arr);
//	int k = 0;
//	scanf("%d", &k);
//	left_slue(arr, sz, k);
//	printf("%s\n", arr);
//	return 0;
//}

//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

//
//int main()
//{
//	char dest[20] = "abcde";
//	char sorc[] = "bcdea";
//	int sz = strlen(dest);
//	strncpy(dest + sz, "abcde", 5);
//	printf("%s", dest);
//
//}

////i/*nt is_sule(char *dest, char *sorc)
//{
//	int lend = strlen(dest);
//	int lens = strlen(sorc);
//	int i = 0;
//	int j = 0;
//	if (lend == lens)
//	{
//		for (i = 0; i < lend; i++)
//		{
//			j = 0;
//			char tmp = *(dest + j);
//			for (j = 0; j < lend; j++)
//			{
//				*(dest + j) = *(dest + j + 1);
//			}
//			*(dest + lend - 1) = tmp;
//			if (strcmp(dest, sorc) == 0)
//			{
//				return 1;
//			}
//		}
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char dest[20] = "abcde";
//	char sorc[] = "bcda";
//	int ret = 0;
//	ret = is_sule(dest, sorc);
//	if (ret == 1)
//	{
//		printf("存在%s\n", dest);
//	}
//	else
//	{
//		printf("不存在\n");
//	}
//
//}*/


//void main(void)
//{
//	char string[100] = "Cats are nice usually";
//	printf("Before: %s\n", string);
//	strncpy(string, "Dogs", 4);
//	strncpy(string + 9, "mean", 4);
//	printf("After:  %s\n", string);
//}


struct test
{
	int num;
	char *pc;
	short s;
	char cha[2];
	short sba[4]; 
}*p;

int main()
{
	p = (struct test*)0x100000;
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int *)p + 0x1);
}