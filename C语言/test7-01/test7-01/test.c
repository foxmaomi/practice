#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int y = 0;
	int num = 0;
	int s = 0;
	scanf("%d", &num);
	s = num;
	while (s>0)
	{
		y = y * 10 + s % 10;
		s = s / 10;
	}
	if (y == num)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	system("pause");
}