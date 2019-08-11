#define _CRT_SECURE_NO_WARNINGSl

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//void qsort(void *base, //要交换的起始位置
//	       size_t num,//要交换的长度
//		   size_t width,//每一个要交换的数据的大小
//		   int(__cdecl *compare)(const void *elem1, const void *elem2));//要比较的方法

//  < 0 elem1 less than elem2
//  = 0 elem1 equivalent to elem2
//  > 0 elem1 greater than elem2

//void*指针不能进行解引用
//struct Stu
//{
//	char name[20];
//	int age;
//
//};
   int cmp_int(const void *e1, const void *e2)
 {
	  return *(int *)e1 - *(int *)e2;
  }

  void print(int arr[], int sz)
  {
	  int i = 0;
	  for (i = 0; i < sz ; i++)
	  {
		  printf("%d ", arr[i]);
	  }
	  printf("\n");
  }

  void _Swap(char* buf1, char* buf2, int width)
  {
	  int i = 0;
	  for (i = 0; i < width; i++)
	  {
		  char  tmp = *buf1;
		  *buf1 = *buf2;
		  *buf2 = tmp;
		  buf1++;
		  buf2++;
	  }

  }

  void bubble_arr(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))   //需要比较数据的始末位置
  {
	  int i = 0;
	  //趟数
	  for (i = 0; i < sz - 1; i++)
	  {
		  int j = 0;
		  for (j = 0; j < sz - 1 - i; j++)
		  {
			  //比较
			  if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			  {
				  _Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			  }

		  }
	  }
  }

  void test1()
  {
	  int arr[] = { 2, 1, 4, 8, 6, 0, 3, 7, 5, 9 };
	  int sz = sizeof(arr) / sizeof(arr[0]);
	  bubble_arr(arr, sz, sizeof(arr[0]), cmp_int);
	  //qsort(arr, sz, sizeof(arr[0]), cmp_int);
	  print(arr, sz);
  }

 // int cmp_stu_by_name(const void *e1, const void *e2)
 // {
	//return     strcmp((*(struct Stu*)e1).name, (*(struct Stu*)e2).name);
 // }
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp((*(struct Stu*)e1).name, (*(struct Stu*)e2).name);
//}

  //void test2()
  //{
	 // int i = 0;
	 // struct Stu arr[3] = { { "zhangsan", 10 }, { "lisi", 50 }, { "wangwu", 15 } };
	 // int sz = sizeof(arr) / sizeof(arr[0]);
	 // qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	 // for (i = 0; i < 3; i++)
	 // {
		//  printf("%s\n", arr[i].name);
	 // }
  //}

  //int cmp_stu_by_age(const void *e1, const void *e2)
  //{
	 // return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
  //}
  //void test3()
  //{
	 //  int i = 0;
	 //  struct Stu arr[3] = { { "zhangsan", 10 }, { "lisi", 50 }, { "wangwu", 15 } };
	 //  int sz = sizeof(arr) / sizeof(arr[0]);
	 //  qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	 //  for (i = 0; i < 3; i++)
	 //  {
	 //   printf("%d\n", arr[i].age);
	 //  }
  //}
int main()
{
	test1();
	//test2();
	//test3();
	system("pause");
	return 0;

}



