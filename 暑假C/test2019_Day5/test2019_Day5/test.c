#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
//11111111111111111111111111111111111111111111111111111111 1110  0101

//
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n - 2; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", c);
//}




//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5 };
//	int *pa;
//	pa = a;
//	printf("a[1]=%d\n", a[1]);
//	printf("%d\n", *(pa + 1));
//
//}

//int Change(int *px)
//{
//	int y = 8;
//	y = y - *px;
//	px = &y;
//	return 0;
//}
//
//int main()
//{
//	int xx = 3;
//	int *py = &xx;
//	Change(py);
//	printf("%d\n", *py);
//	return 0;
//}

//int main()
//{
//	char arr[2][4];
//	strcpy((char*)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	int b = 3;
//	int *p;
//	int *q;
//	int *w;
//	p = &a;
//	q = &b;
//	w = q;
//	q = NULL;
//	printf("%d,%d\n", *p, *w);
//}
//
//int fun(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x & (x - 1);
//	}
//	return count;
//}
//
//int main()
//{
//	printf("fun(2017)=%d\n", fun(2019));
//	return 0;
//}
//
//#define CIR(r) r*r
//void main()
//{
//	int a = 1;
//	int b = 2;
//	int t;
//	t = CIR(a + b);
//	printf("%d\n", t);
//	return;
//}
//
//unsigned long g_ulglobal = 0;
//
//void Globalinit(unsigned long ularg)
//{
//	ularg = 0x01;
//	return;
//}
//
//void test()
//{
//	Globalinit(g_ulglobal);
//	printf("%lu", g_ulglobal);
//	return 0;
//}
//
//int main()
//{
//	test();
//	return 0;
//}