#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

////�ַ�ָ��
//int main()
//{
//	char ch = 'w';
//	char *p = &ch;
//	*p = 'a';
//	printf("%c\n", ch);
//	system("pause");
//	return 0;
//
//}
//const
//int main()
//{
//	int m = 10;
//	int n = 20;
//	const int *pm = &m;
//	//*pm = 30;
//	m = 15;
//	printf("%d\n", m);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int n = 10;
//	int m = 1;
//	int * const p = &n;
//	//*p = m;
//	p = &n;
//	printf("%p\n", p);
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//
//}
//
//int main()
//{
//	char *p = "dshgagd";
//	printf("%p\n", p);
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";//�����ַ���ֻ��һ��
//	char *str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	system("color A9");
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	int *arr[3] = { &a };
//	return 0;
//}

//[]�����ȼ���*��
//int *p1[10];//p1��[]�Ƚ��������飬Ȼ�����*��ʾ����һ������ָ��             ָ������
//int(*p2)[10];//*�Ⱥ�p2��Ϲ���ָ�룬Ȼ�����[]��������һ��ָ�������ָ��      ����ָ��
//p1, p2�ֱ���ʲô��


//
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	system("color D9");
//	system("pause");
//	return 0;
//}

//&��������������
//&��������ȡ������������ĵ�ַ��ÿ�η���ָ��һ�����飬ÿ�μӼ�1��ʾ��ǰ�����������������
//����������ʾ�������Ԫ�ص�ַ
//��������ʾ��������ĵ�ַֻ���������
//1.sizeof�����ڲ�  ��һ������Ĵ�С
//2.&��������
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);
//	printf("&arr= %p\n", &arr);
//	printf("arr+1 = %p\n", arr + 1);        //����һ������4���ֽ�
//	printf("&arr+1= %p\n", &arr + 1);        //����һ������40���ֽ�
//	system("pause");
//	return 0;
//}

//
 
//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<row; i++)
//	{
//		
//		for (j = 0; j<col; j++)
//			
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	int i = 0;
//	for (i = 0; i<row; i++)
//	{
//		
//
//		for (j = 0; j<col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print_arr2(int (*arr)[5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);  //  *arr[i] + j == arr[i][j]       ==    *(*(p+i)+j)
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//print_arr1(arr, 3, 5);
//	//������arr����ʾ��Ԫ�صĵ�ַ
//	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	//��������ָ��������
//	print_arr2(arr, 3, 5);
//	system("pause");
//	return 0;
//}
//
//int arr[5];   5��Ԫ�ص�����
//int *parr1[10];   ָ������   ������10��Ԫ�ض���int*
//int(*parr2)[10];   ����ָ��  һ��ָ��ָ��һ������10��Ԫ�صĵ�����
//int(*parr3[10])[5];  ָ�������ָ������

//
//void test(int arr[]) //ok?   ok
//{}
//void test(int arr[10])//ok?   ok
//{}
//void test(int *arr)//ok?   ok
//{}
//
//void test2(int *arr[20])//ok?    ok
//{}
//void test2(int **arr)//ok?   ok
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}
////
////��ά���鴫��
//void test(int arr[3][5])//ok��     ok
//{}
//void test(int arr[][])//ok��    no  Ҫ֪��һ���ж�����
//{}
//void test(int arr[][5])//ok��   ok
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int *arr)//ok��    һ����arr������ָ�루arr���������飩    ��һ����һ������ĵ�ַ   ����ָ�����  
//{}
//void test(int* arr[5])//ok�� ����ָ�뱾���ϻ���һ������ ֻ������������ŵ���ָ�� �����鴫�δ����ǵ�ַ��Ӧ����ָ��������   
//{}
//void test(int(*arr)[5])//ok��   ok
//{}
//void test(int **arr)//ok��   ���������һ��һ��ָ��ĵ�ַ
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


//һ��ָ�봫��
// 
//void print(int *p, int sz)
//{
//
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", *(p + i));    //   *(p + i) == p[i]
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//
//	print(p, sz);
//	system("pause");
//	return 0;
//}
//	
//
//void print(int **p)
//{
//	printf("%d ", **p);
//}
//
//
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	int **pt = &p;
//	print(&p);
//	system("pause");
//	return 0;
//}

//����ָ��
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	system("pause");
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*p)(int, int) = Add;
//	printf("%d\n", (*p)(2, 3));
//	printf("%d\n", p(2, 3));
//	printf("%d\n", Add(2, 3));
//	system("pause");
//
//	return 0;
//}
//
//void test()
//{
//	printf("hehe\n");
//}
////����pfun1��pfun2�ĸ����������test�����ĵ�ַ��
//void(*pfun1)();   ����ָ��
//void *pfun2();    ����������  ����pfun2�ķ���������void*
//���ȣ��ܸ��洢��ַ����Ҫ��pfun1����pfun2��ָ�룬���ĸ���ָ�룿 ���ǣ�
//pfun1���Դ�š�pfun1�Ⱥ�*��ϣ�˵��pfun1��ָ�룬ָ��ָ�����һ��������ָ��ĺ����޲���������ֵ
//����Ϊvoid��
//�Ķ�������Ȥ�Ĵ��룺
//

//����1 
//(*(void(*)())0)();   ��0�ĵ�ַ����һ�������ĵ�ַ
//����2 
//void(*signal(int, void(*)(int)))    (int);   ����ָ��
//signalһ��������
//signal������������������һ��������int���ͣ��ڶ�����������һ������ָ��
//�ú���ָ��ָ��ĺ����Ĳ���������int������ֵ��void
//signal�����ķ���ֵ��һ������ָ������  ��ָ��ָ�����һ������Ϊint������ֵΪvoid�ĺ���
//
//typedef unsigned int uint:
//typedef void(*pf_t)(int);
//pf_t signal(int, pf_t);
//void(*signal(int, void(*)(int)))(int);
//int main()
//{
//	return 0;
//}
//
//void(*signal(int, void(*)(int)))(int);
//typedef void(*pf_t)(int);
//pf_t signal(int, pf_t); 
//ָ������  int *p[5]       ����p��5��Ԫ��ÿ��Ԫ�ص�������int*������ָ�룩           ָ�������ʵ������������
//����ָ��  int (*p)[5]     ָ��pָ��һ����5��Ԫ�ص�ÿ��Ԫ����int�����Σ����͵�����  ����ָ���ʵ��������ָ��
//
//int main()
//{
//	char s[] = "abcdef";
//	int(*p1)[7] = "abcdef";
//	int *p2 = &s;
//	printf("%p\n",p1);
//	printf("%p\n", p2);
//	system("pause");
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	int(*p)(int, int) = Add;//����ָ��
//	int ret = (*p)(3, 7);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//����ָ������ 
//int((*p[5])(int, int))

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int *arr1[5] = { 0 };
//	char *arr2[5] = { 0 };
//	int (*parr1)(int, int) = &Add;
//	int (*parr2)(int, int) = &Sub;
//	int(*p2[5])(int, int) = { Add, Sub };
//	int ret = (*p2[0])(3, 5);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//

//ָ����ָ�������ָ��
//int (*pf)(int, int);      ����ָ��
//int (*pfarr[5])(int, int);      ����ָ������
//int (*(*pffarr)[5])(int, int) = &pfarr   ָ����ָ�������ָ��


//ð������  ���ִ������ƶ�

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//һ��ѭ�����ٴ�
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int tmp = 0;
//			if (arr[j]>arr[j + 1])
//			{
//				tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 2, 1, 4, 8, 6, 0, 3, 7, 5, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print(arr, sz);
//	system("pause");
//	return 0;
//
//}

char* my_strcpy(char* dest,const char* src)
{

}

int main()
{
	//����ָ��
	char* (*p)(char*,const char*) = my_strcpy;
	//����ָ������
	char(*pfarr[])(char*,const char*) = { p };
	//ָ����ָ�������ָ��
	char(*(*pfarr2)[]) (char*, char*) = &pfarr;
	return 0;

}