#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>

//typedef struct
//{
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;
//
//int main()
//{
//	AA_t s = { 0 };
//	printf("%x\n", (0x13 & 0x17));
//	printf("%x\n", (0x13 | 0x17));
//	printf("%d\n", sizeof(s));
//}

//int main()
//{
//	char str[6] = 'g';
//}

//int main()
//{
//	const char *p = "hello!";
//	printf("%c\n", *p);
//}
//
//int main()
//{
//	int a = 10;
//	int c = 0;
//	c = a += a *= a -= a / 3;
//	printf("%d\n", c);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i < 1)   continue;
//		if (i == 5)  break;
//		i++;
//	}
//}

//要求写一个函数，将字符串中的空格替换为%20。样例“abc defgx yz”转化成“abc%20defgx%20yz”
//
//char* change(char *str)
//{
//	//判断空格数
//	char* tmp = str;
//	int count = 0;
//	while (*tmp)
//	{
//		if (*tmp == ' ')
//		{
//			count++;
//		}
//		tmp++;
//	}
//	//printf("%d\n", count);
//	//恢复到字符串大的初始位置
//	tmp = str;
//	//扩大字符串
//	//1.找到最后一个字符的位置
//	while (*tmp)
//	{
//		tmp++;
//	}
//	while (*tmp!=*str)
//	{
//		if (*tmp == ' ')
//		{
//			*(tmp + 2) = '0';
//			*(tmp + 1) = '2';
//			*(tmp + 0) = '%';
//		}
//		else
//		{
//			*(tmp + 3) = *tmp;
//		}
//
//		tmp--;
//	}
//	return str;
//}
//int main()
//{
//	char arr[50] = "abc defgx yz";
//	//char arr[50] = { 'a', 'b', 'c', ' ', 'd', 'e', 'f', ' ', 'd', 's',0 };
//	
//	printf("%s\n", change(arr));
//
//}
//void Replace(char *s, char*str)
//{
//	while (*s)
//	{
//		if (*s != ' ')
//		{
//			*str = *s;
//			str++;
//		}
//		else
//		{
//			strcpy(str, "%20");
//			str = str + 3;
//		}
//		s++;
//	}
//	*str = '\0';
//}
//int main()
//{
//	char s[] = "abc defgx yz";
//	char str[30];
//	Replace(s, str);
//	printf("%s\n", str);
//	return 0;
//}
//先遍历一遍字符数组，计算空格数量，定义两个指针p1,p2，一个指向原字符串的末尾，一个变化后的字符串末尾，p1从尾向头遍历，依次把值赋给p2,p1遇到空格时，在p2所指向的位置插入“%20”
void Replace(char* str, int len)
{
	assert(str);
	int newlength = len;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			newlength += 2;
		}
		i++;
	}
	char *p1 = str + len;
	char *p2 = str + newlength;
	while (p1 != str)
	{
		if (*p1 == ' ')
		{
			p2 -= 2;
			strncpy(p2, "%20", sizeof(char)* 3);
		}
		else
		{
			*p2 = *p1;
		}
		p1--;
		p2--;
	}
}
int main()
{
	char s[50] = "we are yong";
	Replace(s, strlen(s));
	printf("%s\n", s);
	return 0;
}
