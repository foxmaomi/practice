#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//int main()
//{
//	char acx[] = "abc";
//	char acy[] = { 'a', 'b', 'c' };
//	char *szx = "abc";
//	char *szy = "zbc";
//}

//int main()
//{
//	char *str[3] = { "stra", "strb", "strc" };
//	char *p = str[0];//cahr 类型每次加一跳过一个字节；
//	int i = 0;
//	while (i < 3)
//	{
//		printf("%s\n", p++);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int x[] = { 1, 2, 3, 4, 5, 6 };
//	int *p = x;
//	//printf("%d\n", (p += 2, *++p));
//	printf("%d\n", (p += 2, *p++));
//	//printf("%d\n", (p += 3, *p));
//	//printf("%d\n", (p += 2, ++*p));
//
//}

//char *mystring()
//{
//	char buffer[6] = { 0 };
//	char *s = "hello world!";
//	for (int i = 0; i < sizeof(buffer)-1; i++)
//	{
//		buffer[i] = *(s + i);
//	}
//	return buffer;
//}
//
//int main()
//{
//	printf("%s\n", mystring());
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	printf("%d %d\n", sizeof(i++), i);
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = (char)(-1 - i);
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}