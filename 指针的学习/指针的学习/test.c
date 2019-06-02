#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int n = 10;
//	char *pc = (char*)&n;
//	int *pi = &n; //指针类型的意义  1.指针可以访问几个字节  2.指针加1可以向后移动几个字节
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%P\n", pi);
//	printf("%p\n", pi + 1);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int n = 0x11223344;
//	char *pc = (char *)&n;
//	char *pi = &n;
//	*pc = 0x55;   //重点在调试的过程中观察内存的变化。
//	*pi = 0;      //重点在调试的过程中观察内存的变化。
//	return 0;
//}
//
//int main()
//{
//	int n = 0x11223344;
//	int *pa = &n;
//	*pa = 0;
//	return 0;
//
//}

//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float *vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//}

////错误
//int main()
//{
//	int arr[10] = { 0 };
//	char * p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i+1;
//	}
//	//*(p + 1) = 1;
//	//*(p + 2) = 1;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int * p = arr;
//
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i+1;
//	}
//	
//// 	*(p+0)
//// 	*(p+1)
//// 	*(p+i)
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//int My_strlen(char* p)
//{
//	//char* b=NULL;
//	//char* c = p;
//	//while (*c!=0)
//	//{
//	//	b = c + 1;
//	//	c = c + 1;
//	//}
//	//return b - p;
//	char* b = p;
//	while (*b != 0)
//	{
//		b++;
//	}
//	return b - p;
//}
//int main()
//{
//	int len = My_strlen("abc");
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}

 
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//	int *p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i<sz; i++)
//	{
//		printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
//		//  *(p+i)<====>arr[i]
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//指针数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a, &b, &c };
//	printf("%d\n", *arr[1]);
//	system("pause");
//	return 0;
//}
int main()
{
	//int arr[10] = { 0 };
	//int *p = arr;
	//*(p + i) == *(arr + i) == arr[i]

	int a1[] = { 1, 2, 3, 4, 5 };
	int a2[] = { 2, 3, 4, 5, 6 };
	int a3[] = { 3, 4, 5, 6, 7 };
	int* a4[] = { a1, a2, a3 };
	int i = 0;
	int sz1 = sizeof(a4) / sizeof(a4[0]);
	int sz2 = sizeof(a1) / sizeof(a1[0]);
	for (i = 0; i < sz1; i++)
	{
		int j = 0;
		for (j = 0; j < sz2; j++)
		{
			printf("%d ", a4[i][j]);
		}	
		printf("\n");
	}
	system("pause");
	return 0;
}