#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
//
//int main()
//{
//	char a[20];
//	char *p1 = (char *)a;
//	char *p2 = (char *)(a + 5);
//	int n = p2 - p1;
//	printf("%d\n", n);
//}

//#define F(x,y) ((x)+(y))
//int main()
//{
//	int a = 3;
//	int b = 4;
//	printf("%d\n", F(a++, b++));
//}

//int main()
//{
//	int x = 5 > 1 + 2 && 2 || 2 * 4 < 4 - !0;
//	printf("%d\n", x);
//}

//int main()
//{
//	int i = 1;
//	int sum = 0;
//	while (i < 10)
//	{
//		sum = sum + 1;
//		i++;
//	}
//	printf("i = %d,sum = %d\n", i, sum);
//}

//int main()
//{
//	struct tagtest1
//	{
//		short a;
//		char d;
//		long b;
//		long c;
//	};
//	struct tagtest2
//	{
//		long b;
//		short c;
//		char d;
//		long a;
//	};
//	struct tagtest3
//	{
//		short c;
//		long b;
//		char d;
//		long a;
//	};
//	struct tagtest1 stt1;
//	struct tagtest2 stt2;
//	struct tagtest3 stt3;
//	printf("%d %d %d\n", sizeof(stt1), sizeof(stt2), sizeof(stt3));
//}


//int main()
//{
//	enum ENUM_A
//	{
//		X1,//0
//		Y1,//1
//		Z1 = 5,
//		A1,//6
//		B1//7
//	};
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d %d\n", enumA, enumB);
//}
//
//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//
//int main()
//{
//	int j = 4;
//	int m = 1;
//	int k = 0;
//	k = fun(j, m);
//	printf("%d\n", k);
//	k = fun(j, m);
//	printf("%d\n", k);
//}


//20  10100



//int main()
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}

//00001111   n
//00001110    n-1
//00001110   n&n-1
int count_one_bits(size_t  n)
{
	// 0000 1111
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}

int main()
{
	int n = 15;
	//int n = -1;
	int ret = count_one_bits(n);
	printf("%d\n", ret);
	return 0;

}