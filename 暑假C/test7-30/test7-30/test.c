#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//char tmp = *((char *)p1 + i);
//*((char *)p1 + i) = *((char *)p2 + i);
//*((char *)p2 + i) = tmp;
// }
//}
//void bubble(void *base, int count, int size, int(*cmp)(void *, void *))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i< count - 1; i++)
//	{
//		for (j = 0; j<count - i - 1; j++)
//		{
//			if (cmp((char *)base + j*size, (char *)base + (j + 1)*size) > 0)
//			{
//				_swap((char *)base + j*size, (char *)base + (j + 1)*size, size);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	//char *arr[] = {"aaaa","dddd","cccc","bbbb"}; 
//	int i = 0;
//	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof (int), int_cmp);
//	for (i = 0; i< sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//ָ���������������
////һά����
////sizeof�ڲ���������������ʱ��ʾ��������
////&��������ȡ������������ĵ�ַ
//int arr[10];   arr[0]  *arr
//int a[] = { 1, 2, 3, 4 };
//printf("%d\n", sizeof(a));    16   ��������Ĵ�С
//printf("%d\n", sizeof(a + 0));4
//printf("%d\n", sizeof(*a));  4
//printf("%d\n", sizeof(a + 1));4
//printf("%d\n", sizeof(a[1]));4
//printf("%d\n", sizeof(&a));4
//printf("%d\n", sizeof(*&a));16
//printf("%d\n", sizeof(&a + 1));   4
//printf("%d\n", sizeof(&a[0]));4
//printf("%d\n", sizeof(&a[0] + 1));4
//
//sizeof�����С����0�Ż�ͣ����
//strlen���㳤������0�Ż�ͣ����,����ʱ�����ǵ�ַ,���㳤��ʱ������\0.
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//printf("%d\n", sizeof(arr));       //  6
//	//printf("%d\n", sizeof(arr + 0));     //4
//	//printf("%d\n", sizeof(*arr));       //1
//	//printf("%d\n", sizeof(arr[1]));       //1
//	//printf("%d\n", sizeof(&arr));     //4
//	//printf("%d\n", sizeof(&arr + 1));//4
//	//printf("%d\n", sizeof(&arr[0] + 1));//4
//	printf("%d\n", strlen(arr));      // x
//	printf("%d\n", strlen(arr + 0));//x
//	//printf("%d\n", strlen(*arr));//x
//	//printf("%d\n", strlen(arr[1]));//x-1
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//	system("pause");
//}
//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));    //7
//	//printf("%d\n", sizeof(arr + 0));//4
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4
//	//printf("%d\n", sizeof(&arr + 1));//4
//	//printf("%d\n", sizeof(&arr[0] + 1));//4
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));\\
//	//printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//?
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	char *p = "abcdef";
//	//printf("%d\n", sizeof(p));  //4
//	//printf("%d\n", sizeof(p + 1));//4
//	//printf("%d\n", sizeof(*p));//1   a
//	//printf("%d\n", sizeof(p[0]));//1   p[0]=*(p+0)
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p + 1));//4
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));
//	//printf("%d\n", strlen(p[0]));
//	printf("%d\n", strlen(&p));
//	printf("%d\n", strlen(&p + 1));
//	printf("%d\n", strlen(&p[0] + 1));//5
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0] + 1));
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(*(a + 1)));
//	printf("%d\n", sizeof(&a[0] + 1));
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a[3]));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//  2   5
//	system("pause");
//	return 0;
//}
//
//���ؿƼ�
//printf("%d\n", sizeof(a));
//printf("%d\n", sizeof(a[0][0]));
//printf("%d\n", sizeof(a[0]));
//printf("%d\n", sizeof(a[0] + 1));
//printf("%d\n", sizeof(*(a[0] + 1)));
//printf("%d\n", sizeof(a + 1));
//printf("%d\n", sizeof(*(a + 1)));
//printf("%d\n", sizeof(&a[0] + 1));
//printf("%d\n", sizeof(*(&a[0] + 1)));
//printf("%d\n", sizeof(*a));
//printf("%d\n", sizeof(a[3]));
//�ܽ᣺ �����������壺
//1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С��
//2. &���������������������ʾ�������飬ȡ��������������ĵ�ַ��
//3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��
//ָ�������
//������1��
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
////����Ľ����ʲô��
//������2
////���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x100001    ����һ���ṹ��
//	printf("%p\n", (unsigned long)p + 0x1);//    ����һ������
//	printf("%p\n", (unsigned int*)p + 0x1);//   ����һ��ָ��
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);    
//	int *ptr2 = (int *)((int)a + 1);//2
//	printf("%x,%x", ptr1[-1], *ptr2);//һ�����ͼ�1����һ���ֽ�   500>> 501  
//	system("pause");
//	return 0;
//}


//int main(int argc, char * argv[])
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//()�����ֻ�����һ�����ŵ�ֵ��
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);//0
//	system("pause");
//	return 0;
//}



int main() 
{
	int a[5][5];
	int(*p)[4];//����ָ��
	p = a;
	//-4
	//11111111 11111111 11111111 11111111 11111111 11111111 11111111 11111100
	//F         F          F        F        F       F          F       FC
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	system("pause");
	return 0;
}
//
//������6
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}