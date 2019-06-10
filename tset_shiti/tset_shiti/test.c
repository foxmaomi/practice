#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int i =0;
//	for (i = 0; i < 5; i++)
//	{
//		/*static*/  int num = 1;
//		num++;
//		printf("%d", num);
//	}
//	system("pause");
//	return 0;
//}

//struct Test
//{
//	char i;
//	double a;
//	int b;
//};
//
//int main()
//{
//	struct Test t;
//	printf("%d\n", sizeof(t));
//	system("pause");
//	return 0;
//}

//int* fun()
//{
//	int tmp = 10;
//	return &tmp;
//}
//
//int main()
//{
//	fun();
//	system("pause");
//	return 0;
//}

//打印9*9口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

char My_strcpy(char* s, char* c)
{
	int i = 0;
	while (*s = *(c++) )
	{
		;
	}
	return s;
}
int main()
{
	char s = "abcd" ;
	char c = "qwer" ;
	printf("%s\n", s);
	printf("%s\n", c);
	My_strcpy(&s, &c);
	printf("%s\n", s);
	printf("%s\n", c);
	system("pause");
	return 0;
}