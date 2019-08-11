#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//int main()
//{
//	int arr[5] = { 0 };//[]方括号中只能写常量表达式
//	//数组的类型有两个重要点
//	//1.数组可以访问几个字节
//	//2.数组+1，向后访问几个字节
//	int a = 0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[5]));//数组的类型:去掉数组名剩下的叫数组类型
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
//	//[]下标引用操作符
//	//printf("%s\n", arr1);//printf遇见‘\0’才结束打印
//	//‘\0’是字符串结束标识符；strlen计算的是‘\0’前面的字符个数
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
//二维数组在初始化可以不写行数，但必须标明列数

//冒泡排序
//相邻的两个元素之间进行交换


//void bubble_sort(int arr[], int sz)//参数接收数组元素个数
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


////冒泡排序
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 3, 1, 7, 5, 8, 9, 0, 2, 4, 6 };
//	int i = 0;
//	int j = 0;
//	//bubble_sort(arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz); //使用的时候，传数组元素个数
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
//		//一趟
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
//	//冒泡排序的趟数
//	for(i=0; i<sz-1; i++)
//	{
//		printf("%d\n", sz);
//		int flag = 1;//假设有序
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;//无序
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
	//打印
	print_arr(arr, sz);
	//排序
	bubble_sort(arr, sz);
	//打印
	print_arr(arr, sz);

	system("pause");
	return 0;
}