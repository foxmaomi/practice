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
	invert(ch, len);//���ַ���ȫ������
	while (ch[i] != '\0')
	{
		i = 0;
		while (ch[i] != ' ' && ch[i] != '\0')
		{
			i++;//�����ǰ���ַ���Ϊ�ո���û�з��ʵ�������־����ָ����ƣ�ֱ����ǰ�ַ�Ϊ�ո�
		}
		invert(ch, i);
		if (ch[i] != '\0')//���û�з��ʵ�������־��Ҫ�����ո��ַ������������¸�����
			ch = ch + i + 1;
		else
			ch = ch + i; //�����ǰ�ַ��Ѿ��ǽ�����־�ˣ�����Ҫ�������ո��ַ�����ѭ��������
	}
	

}

void main()
{
	char str[MAX] = {0};
	getline("%s", str);
	Inverse(str);
	printf("%s", str);
}