#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
//int Digit(int n)
//{
//	if (n > 0)
//	{
//		return n % 10 + Digit(n / 10);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Digit(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//void reverse_string(char *string)
//{
//	if ('\0' != *(++string))
//		reverse_string(string);
//	printf("%c", *(string - 1));
//}
//int main()
//{
//	char *a = "abcde";
//	reverse_string(a);
//	printf("\n");
//	system("pause");
//	return 0;
//}
//int mystrlen(char* string)
//{
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	return count;
//}
////数组传参，只能穿地址
//int main()
//{
//	char string[] = "abcdefghijk";
//	int ret = mystrlen(string);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//int Mystrlen(char *string)
//{
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	return count;
//}
//int main()
//{
//	char string[] = "abcdefghijk";
//	int ret = Mystrlen(string);
//	printf("%d", ret);
//	system("pause");
//	return;
//
//}
//int mystrlen(char* string)
//{
//	if (*string != '\0')
//	{
//		return 1 + mystrlen(string + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char string[] = "abcdefghijk";
//	int ret = mystrlen(string);
//	printf("%d\n", ret);
//	system("pause")
//	return 0;
//}
//int Mystrlen(char *string)
//{
//	if (*string != '\0')
//	{
//		return 1 + Mystrlen(string + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char string[] = "abcdefjk";
//	int ret = Mystrlen(string);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n;i++)
//	{
//		sum = sum*i;
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}
//int Myfactorial(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum*i;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Myfactorial(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//int DG(n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n * DG(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DG(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	system("pause");
//	return 0;
//}
//void print(n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	system("pause");
//	return 0;
//}