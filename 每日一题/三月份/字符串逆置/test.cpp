#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<wchar.h>
#define MAX 100
using namespace std;
void invert(char* ch, int n)
{
	int i;
	char tmp;
	for (i = 0; i < n / 2; i++)
	{
		tmp = ch[i];
		ch[i] = ch[n - 1 - i];
		ch[n - 1 - i] = tmp;
	}
}


void Inverse(char* ch)
{
	int i = 0;
	int len = 0;
	len = strlen(ch);
	invert(ch, len);//将字符串全部逆置
	while (ch[i] != '\0')
	{
		i = 0;
		while (ch[i] != ' ' && ch[i] != '\0')
		{
			i++;//如果当前的字符不为空格并且没有访问到结束标志，让指针后移，直到当前字符为空格。
		}
		invert(ch, i);
		if (ch[i] != '\0')//如果没有访问到结束标志，要跳过空格字符，继续访问下个单词
			ch = ch + i + 1;
		else
			ch = ch + i; //如果当前字符已经是结束标志了，不需要再跳过空格字符，外循坏结束。
	}
	

}

void main()
{
	char str[MAX] = {0};
	getline("%s", str);
	Inverse(str);
	printf("%s", str);
}