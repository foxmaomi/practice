#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//
//������ⷨ
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
//����3������
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
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
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
		printf("�������ַ���\n");
	}
	else
	{
		printf("�����ַ���\n");
		printf("%s\n", ret);
	}
	system("pause");
	return 0;
}
