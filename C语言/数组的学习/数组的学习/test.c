#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//int main()
//{
//	int arr[5] = { 0 };//[]��������ֻ��д�������ʽ
//	//�����������������Ҫ��
//	//1.������Է��ʼ����ֽ�
//	//2.����+1�������ʼ����ֽ�
//	int a = 0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[5]));//���������:ȥ��������ʣ�µĽ���������
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(a));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char arr1[] = { 'a', 'b', 'c' ,0};
////	int arr1[] = { a, b, c };
//	char arr2[] = "abc";
//	//[]�±����ò�����
//	//printf("%s\n", arr1);//printf������\0���Ž�����ӡ
//	//��\0�����ַ���������ʶ����strlen������ǡ�\0��ǰ����ַ�����
//	//printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));//>3
//	printf("%d\n", strlen(arr2));//3
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		printf("&arr[%d]=%p<==> %p\n", i, &arr,p+i);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int count = 10;
//	int arr[count] = { 0 };
//	system("pause");
//	return 0;
//}
//��ά�����ڳ�ʼ�����Բ�д�������������������

//ð������
//���ڵ�����Ԫ��֮����н���


//void bubble_sort(int arr[], int sz)//������������Ԫ�ظ���
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i< sz;i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			int t = arr[i+1];
//			arr[i + 1] = arr[i];
//			arr[i] = t;
//		}
//	}
//}


////ð������
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 3, 1, 7, 5, 8, 9, 0, 2, 4, 6 };
//	int i = 0;
//	int j = 0;
//	//bubble_sort(arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz); //ʹ�õ�ʱ�򣬴�����Ԫ�ظ���
//	/*for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int t = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = t;
//			}
//
//		}
//	}*/
//	for (j = 0; j < sz; j++)
//	{
//		//һ��
//		for (i = 0; i < sz -1- j; i++)
//		{
//			if (arr[i]>arr[i + 1])
//			{
//				int t = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = t;
//			}
//		}
//	}
//	for (i = 0; i<sz; i++)
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//	{


//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	//ð�����������
//	for(i=0; i<sz-1; i++)
//	{
//		printf("%d\n", sz);
//		int flag = 1;//��������
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;//����
//			}
//		}
//		if(flag == 1)
//		{
//			return;
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 0; i < sz - 1; i++)
	{
	
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			return ;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,10,9 };

	int sz = sizeof(arr) / sizeof(arr[0]);
	//��ӡ
	print_arr(arr, sz);
	//����
	bubble_sort(arr, sz);
	//��ӡ
	print_arr(arr, sz);

	system("pause");
	return 0;
}