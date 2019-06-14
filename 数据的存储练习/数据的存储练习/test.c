#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//一代
//int count_one_bits(unsigned int i)
//{
//	
//	int count = 0;
//	
//	while (i)
//	{
//		if (i % 2 == 1)
//		{
//			count++;
//			
//		}
//		i = i / 2;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = count_one_bits(i);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//int count_one_bits(int i)
//{
//	int count = 0;
//	int n = 0;
//	for (n = 0; n < 32; n++)
//	{
//		if (((i >> n) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = count_one_bits(i);
//	printf("%d\n", ret);
//	system("color A9");
//	system("pause");
//	return 0;
//
//}

int count_one_bits(int n)
{
	int count = 0;

	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = count_one_bits(n);
	printf("%d\n", ret);
	system("pause");
	system("color D6");
	return 0;
}

//int main()
//{
//	int i = 1;
//	int j = 0;
//	for (j = 0; j < 32;j++)
//	{
//		if (i == 1)
//		{
//			//打印奇数
//			printf("奇数位为%d", (n>>i) & 1);
//		}
//		else
//		{
//			//打印偶数
//			printf("偶数位为0");
//		}
//		i = -i;
//	}
//
//}
//
//
