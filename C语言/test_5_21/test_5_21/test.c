#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//1234
//123取模然后除10
//12
//int count_one_bit(unsigned int a)
//{
//	//1111
//	//>>右移操作符可以起到把一个数除2的效果
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 15;
//	//scanf("%d", &a);
//	int ret = count_one_bit(a);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//int count_one_bit(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//int count_one_bit(int n)
//{
//	//00001111-a
//	//00001110- a-1
//	//00001110- a&a-1
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count++;
//}
int count_one_bit(int a)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		//00001111
		//00000001
		if ((a >> i & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int a = 15;
	int ret = count_one_bit(a);
	printf("%d\n", ret);
	system("pause");
	return 0;
}