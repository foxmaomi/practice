#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//�ж�����

//int main()
//{
//	char answer = 0;
//	for (answer = 'A'; answer <= 'D'; answer++)
//	{
//		if ((answer != 'A') +
//			(answer == 'C') +
//			(answer == 'D') +
//			(answer != 'D') == 3
//			)
//		{
//			printf("%c\n", answer);
//		}
//	}
//	system("pause");
//	return 0;
//}


//


#include <stdio.h>
#include <windows.h>
#define n 10 //��������
int main()
{
	int arr[n][n] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i<n; i++)
	{
		for (j = 1; j<n - i; j++)//���ƿո�
		{
			printf("  ");//��ӡ�ո�
		}
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)//��һ�к�i=j�и���1
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
			printf("%4d", arr[i][j]);//���룬��ӡ����
		}
		printf("\n");
	}
	system("color A8");//�ı�һ����ɫ
	//system("color D");
	system("pause");
	return 0;
}
//0 = ��ɫ       8 = ��ɫ
//1 = ��ɫ       9 = ����ɫ
//2 = ��ɫ       A = ����ɫ
//3 = ǳ��ɫ     B = ��ǳ��ɫ
//4 = ��ɫ       C = ����ɫ
//5 = ��ɫ       D = ����ɫ
//6 = ��ɫ       E = ����ɫ
//7 = ��ɫ       F = ����ɫ

//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((2 == b && 3 != a) || (2 != b && 3 == a) == 1)
//						{
//							if ((2 == b && 4 != e) || (2 != b && 4 == e) == 1)
//							{
//								if ((1 == c && 2 != d) || (1 != c && 2 == d) == 1)
//								{
//									if ((5 == c && 3 != d) || (5 != c && 3 == d) == 1)
//									{
//										if ((4 == e && 1 != a) || (4 != e && 1 == a) == 1)
//										{//�����ֵ������ͬ���ж�
//											if (((a != b) && (a != c) && (a != d) && (a != e))
//												&& ((b != c) && (b != d) && (b != e))
//												&& ((c != d) && (c != e))
//												&& ((d != e)))
//											{
//												printf("a= %d, b= %d,c= %d,d= %d,e= %d\n", a, b, c, d, e);
//											}
//
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//
//	return 0;
//}
