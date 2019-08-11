#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//strlen 返回一个无符号整形
//int main()
//{
//	char *p1 = "abcdef";
//	char *p2 = "abc";
//	if (strlen(p2) - strlen(p1) > 0)
//	{
//		printf("p2>p1\n");
//	}
//	else
//	{
//		printf("p2<=p1\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 0};
//	int len = strlen(arr);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}
//size_t  my_strlen(const char *str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//int main()
//{
//	char arr[] = "saafd";
//	size_t len = my_strlen(arr);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}
char* my_strcpy(char *str1, char *str2)
{
	char *tmp = str1;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	
	while (*str2)
	{
		*(str1 + len1) = *str2;
		str2++;
		str1++;
	}
	return tmp;
}
int main()
{
	char arr1[50] = "afgsdah";
	char arr2[] = "ghas";
	char *str = NULL;
	str = my_strcpy(arr1, arr2);
	printf("%s\n", str);
	system("pause");
	return 0;
}