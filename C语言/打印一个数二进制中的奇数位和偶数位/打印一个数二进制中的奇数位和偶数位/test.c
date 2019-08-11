#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//get_ji_ou(n);
//	int i = 1;
//	int j = 0;
//	int count = 0;
//	for (j = 0; j < 32; j++)
//	{
//		if (i == 1)
//		{
//			//打印奇数
//			printf("奇数位为%d\n", (n >> i) & 1);
//
//		}
//		else
//		{
//			//打印偶数
//			printf("偶数位为0\n");
//		}
//		i = -i;
//		count++;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//
//}


int main()
{
	int n = 10;
	int i = 0;
	//00000000000000000000000000001010
	printf("奇数位->");
	for(i=30; i>=0; i-=2)
	{
		
		printf("%d ", (n>>i)&1);
	}
	printf("\n");
	printf("偶数位->");
	for(i=31; i>=1; i-=2)
	{
		
		printf("%d ", (n>>i)&1);
	}
	printf("\n");

	system("pause");

	return 0;
}
