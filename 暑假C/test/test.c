#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15  4 �� 1
//����ԭ�ͣ�
//
//
//int binsearch(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n / 2;
//	}
//	return count;
//}

//0000 1111 -n
//0000 1110 -n-1
//0000 1110 - n&(n-1)
//int binsearch(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n&(n - 1);
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = binsearch(n);
//	printf("%d\n", ret);
//	return 0;
//
//}

//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
//}
//

//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//
//  0101
//
//for (i = 1; i < 32; i += 2)
//{
//	tmp = 1;
//	printf("%d ", tmp&(n >> i));
//}
//printf("\n");
//for (i = 0; i < 32; i += 2)
//{
//	tmp = 1;
//	printf("%d ", tmp&(n >> i));
//}
//5   0101
//00000000
// 1010
//void print(int n)
//{
//	int i = 0;
//	int tmp = 1;
//	printf("ż��λ\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		tmp = 1;
//		printf("%d ", tmp&(n >> i));
//	}
//	printf("\n");
//	printf("����λ\n");
//	for (i = 31; i > 0; i -= 2)
//	{
//		tmp = 1;
//		printf("%d ", tmp&(n >> i));
//	}
//	
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//3. ���һ��������ÿһλ��
//

//void print(int n)
//{
//	if (n <= 9)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//		
//	}
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

int difbin(int m, int n)
{
	int count = 0;
	int i = 0;
	int tmp = 1;
	for (i = 0; i < 32; i++)
	{
		tmp = 1;
		if ((tmp&(m >> i)) != ((n >> i)&tmp))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n = 0;
	int m = 0;
	int ret = 0;
	scanf("%d%d", &m, &n);
	ret = difbin(m, n);
	printf("%d\n", ret);
	return 0;
}