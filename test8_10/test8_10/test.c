#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//�ر�ע���Լ���csdn���͡�
//
//1. ��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	int sum = 0;
//
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int count = 0;
//		
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				count++;
//			}
//		}
//		if (count == 0)
//		{
//			printf("%d\n", i);
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//}



//2. ����˷��ھ���
//int main()
//{
//	int i = 0;
//	//��ӡ����
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡÿһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf(" %d*%d=%-2d", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//3. �ж�1000��-- - 2000��֮�������
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 || (i % 100 != 0 && i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}

//int main()
//{
//	printf("\a\a\a\a\a");
//}

//4.
//дһƪ���͡�̸̸
//1>дһ�����ҽ���
//2>�г����̵�Ŀ�ꡣ
//3>�������ôѧϰ��̣�
//4>�������ѧϰ����������ÿ�ܻ��Ѷ���ʱ�䣿
//5>����������һ��IT��˾��
//�����ӷ��Ҳ������༶Ⱥ�
//
//����ע�����
//���������У���Ҫѧ��������Ҫ�ᱨ����ѵ��ѧϰ��
//��õķ�ʽ���Լ��һ�����͡�
int main()
{
	int year=0;
	int count = 0;
	for(year=1000; year<=2000; year++)
	{
		//�ж�����

		if(((year%4==0)&&(year%100!=0))||(year%400==0))
		{
			printf("%d ", year);
			count++;
		}
		/*if(year%4==0)
		{
			if(year%100 != 0)
			{
				printf("%d ", year);
				count++;
			}
		}
		if(year%400 == 0)
		{
			printf("%d ", year);
			count++;
		}*/
	}
	printf("\ncount = %d\n", count);
	system("pause");
	return 0;
}