#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		else if (i % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int t = 1;
//	int n = 0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		t = i*t;
//	}
//	printf("%d", t);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int t = 1;
//	int n = 10;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		t = 1;
//		for (j = 1; j <= i; j++)
//		{
//			t = t * j;
//		}
//		sum = sum + t;
//	}
//	printf("%d", t);
//	system("pause");
//	return 0;
//
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	//��ӡ13��
//	for (i = 1; i <= 7; i++)
//	{
//		//��ӡһ��
//		//��ӡ������
//		for (n = 1; n <= (2 * i - 1); n++)
//			printf("*");
//		printf("\n");
//	}
//	//��ӡ������
//	for (i = 5; i > 0; i--)
//	{
//		for (int n = 0; n < 2 * i - 1;n++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = n; i>0; i--)
//	{
//		for (int j = 0; j<2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999; i++)
//	{
//		int tmp = 0;
//		int sum = 0;
//		int count = 1;
//		tmp = i; //��i��ֵ��tmp
//		while (tmp / 10)//��whileѭ���ж��м�λ��
//		{
//			count++;//����������������++
//			tmp /= 10;
//		}
//		tmp = i;//���¸�ֵ
//		//while(tmp)����ж�
//		while (tmp)//�ж�i�Ƿ�Ϊˮ�ɻ���
//		{
//			sum += pow((tmp % 10), count);//pow��������һ�����Ĵη������������pow��3,3��������27
//			tmp /= 10;
//		}
//		if (sum == i)//���sum����i���ҵ��ˣ��������
//			printf("%d ", i);
//
//
//	}
//	system("pause");
//	return 0;
//
//}
//int main()
//{
//	INT_MAX;
//	int i = 0;
//	int s = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= 5; i++)
//	{
//		s = s + n * 10;
//	}
//	printf("%d", s);
//	system("pause");
//	return 0;
//}
//

