#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//
//1.
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//a, b, c, d, e;
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
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
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1)&&(a*b*c*d*e==120))
//						{
//							
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}


//2.
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//

//int main()
//{
//	int kill = 0;
//	for (kill = 'a'; kill <= 'd'; kill++)
//	{
//		if ((kill != 'a') +
//			(kill == 'c') +
//			(kill == 'd') +
//			(kill != 'd') == 3)
//		{
//			printf("%c\n", kill);
//		}
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int d = 40;
//	printf("%c %d\n", d, d);
//	system("pause");
//	return 0;
//}
//



//3.����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	int arr[10][10] = { 0 };
	scanf("%d", &n);
	//��ӡ����
	for (i = 1; i < n; i++)
	{
		//��ӡһ��
		for (j = 0; j < i; j++)
		{
			arr[i][0] = 1;
			arr[i][i-1] = 1;
			if (i >= 2 && j>=1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}

	}

	for (i = 0; i < n; i++)
	{
		for (j = n-1; j > i; j--)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;

}


//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 5;
//	//��ӡ����
//
//	for (i = 0; i < n ; i++)
//	{
//		//��ӡÿһ��
//		/*for (j = 0; j <= i; j++)
//		{
//			printf("*");
//		}*/
//		for (j = 5; j >i; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}