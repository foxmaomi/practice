#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

#include<math.h>

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//}

//
//1.����Ļ���������ͼ����
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
//

//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	for (i = 0; i < line ; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*(line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//2.���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
//
///*
//�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
//����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
//153 = 1^3 + 5^3 + 3^3��
//370 = 3^3 + 7^3 + 0^3��
//371 = 3^3 + 7^3 + 1^3��
//407 = 4^3 + 0^3 + 7^3��
//*/
//int main()
//{
//	int i = 0;
//	for(i=1; i<=1000000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ��λ��
//		//i=123
//		int sum = 0;
//		int count = 0;
//		int tmp = i;
//		while(tmp)
//		{
//			tmp/=10;
//			count++;
//		}
//		//2. ��η���
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp /= 10;
//		}
//		//3. �ж�
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//
//void koujue(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//��ӡһ��
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-4d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	koujue(n);
//	return 0;
//}
//2.ʹ�ú���ʵ���������Ľ�����
//

//void exchange(int *left, int *right)
//{
//	int tmp = *left;
//	*left = *right;
//	*right = tmp;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 4;
//	printf("a = %d, b = %d\n", a, b);
//	exchange(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//}
//3.ʵ��һ�������ж�year�ǲ������ꡣ
//
//int is_leap_year(int y)
//{
//	return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
//}
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	scanf("%d", &year);
//	ret = is_leap_year(year);
//	if (ret == 1)
//	{
//		printf("year = %d������\n",year);
//	}
//	else
//	{
//		printf("%d��������\n", year);
//	}
//}
//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//void
void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		arr[i] = i;
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void empty(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		arr[i] = 0;
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
}

int main()
{
	int arr[10] = { 1, 2, 3, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	empty(arr, sz);
	init(arr,sz);
	
	reverse(arr,sz);
}
//5.ʵ��һ���������ж�һ�����ǲ���������