#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int line = 0;
//	int j = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)	//��ӡһ��
//	{
//		for (j = 0; j < line-1 - i; j++)   //��ӡ���ո�
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)//��ӡ�°���
//	{
//		for (j = 0; j <= i; j++)//��ӡ�ո�
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 1000000; n++)
//	{
//		//�ж�nΪ��λ��
//		int count = 1;
//		int sum = 0;
//		int tmp = n;//ѭ���ڲ����ܸı�ѭ������
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		//����ˮ�ɻ���
//		tmp = n;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (n == sum)
//		{
//			printf("count=%d  ", count);
//			printf("%d", sum);
//			printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 1000000; n++)
//	{
//		//���㼸λ��
//		int sum = 0;
//		int count = 1;
//		int tmp = n;
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = n;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (n == sum)
//		{
//			printf("count=%d  ", count);
//			printf("%d", sum);
//			printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int n = 0;
	int sum = 0;
	int i = 0;
	int a = 0;
	int count = 0;
	scanf("%d%d", &a,&n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * 10 + a;
		count = sum + count;
	}
	printf("%d", sum);
	printf("\n");
	printf("%d", count);
	system("pause");
	return 0;
}