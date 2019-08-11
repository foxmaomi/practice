#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

////字符指针
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
//	char *str3 = "hello bit.";//常量字符串只存一份
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

//[]的优先级比*高
//int *p1[10];//p1和[]先结合组成数组，然后加上*表示他是一个数组指针             指针数组
//int(*p2)[10];//*先和p2结合构成指针，然后加上[]表明它是一个指向数组的指针      数组指针
//p1, p2分别是什么？


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

//&数组名和数组名
//&数组名：取的是整个数组的地址；每次访问指向一个数组，每次加减1表示向前或向后跳过几个数组
//数组名：表示数组的首元素地址
//数组名表示整个数组的地址只有两种情况
//1.sizeof（）内部  求一个数组的大小
//2.&数组名，
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);
//	printf("&arr= %p\n", &arr);
//	printf("arr+1 = %p\n", arr + 1);        //跳过一个整形4个字节
//	printf("&arr+1= %p\n", &arr + 1);        //跳过一个数组40个字节
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
//	//数组名arr，表示首元素的地址
//	//但是二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	print_arr2(arr, 3, 5);
//	system("pause");
//	return 0;
//}
//
//int arr[5];   5个元素的数组
//int *parr1[10];   指针数组   数组有10个元素都是int*
//int(*parr2)[10];   数组指针  一个指针指向一个含有10个元素的的数组
//int(*parr3[10])[5];  指向数组的指针数组

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
////二维数组传参
//void test(int arr[3][5])//ok？     ok
//{}
//void test(int arr[][])//ok？    no  要知道一行有多少列
//{}
//void test(int arr[][5])//ok？   ok
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int *arr)//ok？    一个叫arr的整形指针（arr不代表数组）    第一行是一个数组的地址   数组指针接受  
//{}
//void test(int* arr[5])//ok？ 数组指针本质上还是一个数组 只不过数组里面放的是指针 而数组传参传的是地址，应该用指针来接收   
//{}
//void test(int(*arr)[5])//ok？   ok
//{}
//void test(int **arr)//ok？   如果传的是一个一级指针的地址
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


//一级指针传参
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
//	//一级指针p，传给函数
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

//函数指针
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
////下面pfun1和pfun2哪个有能力存放test函数的地址？
//void(*pfun1)();   函数指针
//void *pfun2();    函数的声明  函数pfun2的返回类型是void*
//首先，能给存储地址，就要求pfun1或者pfun2是指针，那哪个是指针？ 答案是：
//pfun1可以存放。pfun1先和*结合，说明pfun1是指针，指针指向的是一个函数，指向的函数无参数，返回值
//类型为void。
//阅读两段有趣的代码：
//

//代码1 
//(*(void(*)())0)();   把0的地址当做一个函数的地址
//代码2 
//void(*signal(int, void(*)(int)))    (int);   函数指针
//signal一个函数；
//signal函数有两个参数，第一个参数是int类型，第二个参数是是一个函数指针
//该函数指针指向的函数的参数类型是int，返回值是void
//signal函数的返回值是一个函数指针类型  该指针指向的是一个参数为int，返回值为void的函数
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
//指针数组  int *p[5]       数组p有5个元素每个元素的类型是int*（整形指针）           指针数组的实质依旧是数组
//数组指针  int (*p)[5]     指针p指向一个有5个元素的每个元素是int（整形）类型的数组  数组指针的实质依旧是指针
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
//	int(*p)(int, int) = Add;//函数指针
//	int ret = (*p)(3, 7);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//函数指针数组 
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

//指向函数指针数组的指针
//int (*pf)(int, int);      函数指针
//int (*pfarr[5])(int, int);      函数指针数组
//int (*(*pffarr)[5])(int, int) = &pfarr   指向函数指针数组的指针


//冒泡排序  数字大的向后移动

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//一趟循环多少次
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
	//函数指针
	char* (*p)(char*,const char*) = my_strcpy;
	//函数指针数组
	char(*pfarr[])(char*,const char*) = { p };
	//指向函数指针数组的指针
	char(*(*pfarr2)[]) (char*, char*) = &pfarr;
	return 0;

}