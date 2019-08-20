#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
//typedef char STRING[225];
//
//int main()
//{
//	int ret = 0;
//	STRING s;
//	ret = sizeof(s);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	double b = 3.14;
//	int c = 0;
//	int ret = 0;
//	
//	ret = sizeof('A' + a + b);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char s[] = "\\123456\\123456\t";
//	printf("%d ", strlen(s));
//	return 0;
//}
//int main()
//{
//	int s = 0;
//	int n = 0;
//	for (n = 0; n < 4; n++)
//	{
//		switch (n)
//		{
//		default: s += 4;
//		case 1: s += 1;
//		case 2: s += 2;
//		case 3: s += 3;
//		}
//	}
//	printf("%d ", s);
//	return  0;
//}

//int main()
//{
//	char *p = "blue1";
//	char a[] = "blue1";
//	printf("%d\n", strlen(p));
//	printf("%d\n", strlen(a));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(a));
//	return 0;
//}


//int main()
//{
//	unsigned long ula = 0x11000000;
//	printf("%x\n", *(unsigned char *)&ula);
//	return 0;
//}

//编写函数：求数组中元素出现次数超过数组长度一半的数字。如：{1,2,3,2,2,2,5,4,2}数字2超过数组长度一半的数字

void Morenum(int *str, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = i + 1; j < sz; j++)
		{
			if (*(str + i) > *(str + j))
			{
				int tmp = *(str + i);
				*(str + i) = *(str + j);
				*(str + j) = tmp;
			}
		}
	}
}


int main()
{
	int arr[] = { 2, 2, 2, 3, 3, 3, 2, 2, 2 };
	int sz = sizeof(arr) / sizeof(arr[0]); 
	int mid = sz / 2;
	int i = 0;
	Morenum(arr, sz);
	printf("morenum = %d\n", arr[mid]);
	return 0;
}