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


//
int main()
{
	char arr[] = "faskhgsdf";
	char str[255] = { 0 };
	int ret = 0;
	int i = 0;
	for (i = 0; i < strlen(arr); i++)
	{
		ret = arr[i];
		str[ret]++;
	}
	for (i = 0; i < 255; i++)
	{
		printf("%d ", str[i]);
	}
	for (i = 0; i < 255; i++)
	{
		if (str[i] == 1)
		{
			ret = i;
			break;
		}
	}
	printf("%c\n", ret);
}
//
//int main()
//{
//	char str[] = "abds%*&34dfs";  // 定义一个字符数组，存放待转换为ASCII码的字符串
//	int AsciiNum[20];  // 定义一个整型数组，存放字符所对应的ASCII码值，数组大小根据字符串长度进行设置
//	int i;
//	int sz = strlen(str);
//	int count = 0;
//	// 将字符串的每个字符逐个赋值给整型数组AsciiNum，即实现字符到ASCII码值的转换
//	for (i = 0; i<strlen(str); i++)
//	{
//		AsciiNum[i] = str[i];
//		count++;
//		// 最后数组AsciiNum就是字符串每个字符所对应ASCII码值的数组
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", AsciiNum[i]);
//	}
//	printf("\n");
//	printf("%d %d", sz, count);
//}