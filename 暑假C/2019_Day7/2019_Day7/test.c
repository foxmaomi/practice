#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int m;
//	int n;
//	for (m = 0, n = -1; n = 0; m++, n++)
//	{
//		n++;
//		printf("hehe\n");
//	}
//}

//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int x;
//	int y;
//	y = 10;
//	x = y++;
//	printf("x = %d,y = %d\n", x, y);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	if ((++i > 0) || (++j > 0))
//	{
//		printf("i = %d,j = %d\n", i, j);
//	}
//}

//#define MOD(x,y) x%y
//
//int main()
//{
//	int a = 13, b = 94;
//	printf("%d\n", MOD(b, a + 4));
//
//}

//int main()
//{
//	int x = 0;
//	switch (++x)
//	{
//	case 0: ++x;
//	case 1: ++x;
//	case 2: ++x;
//	}
//	printf("%d\n", x);
//}

int GetMin(int a[], int sz,int k)
{
	if (k <= sz)
	{
		int min = a[0];
		int i = 0;
		for (i = 0; i < k; i++)
		{
			if (a[i] < min)
			{
				min = a[i];
			}
		}
		return min;
	}
	else
	{
		printf("请输入正确的k值\n");
		return 0;
	}
}

int main()
{
	int a[] = { 6, 2, 3, 5, 1 };
	int k = 0;
	int sz = sizeof(a) / sizeof(a[0]);
	int ret = 0;
	scanf("%d", &k);
	ret = GetMin(a, sz, k);
	printf("min = %d\n", ret);
}