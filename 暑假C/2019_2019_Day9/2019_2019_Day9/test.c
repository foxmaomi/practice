#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//void Func(char sttr_arg[2])
//{
//	int m = sizeof(str_arg);
//	int n = strlen(str_arg);
//	printf("%d\n", m);
//	printf("%d\n", n);
//}
//
//int main()
//{
//	char str[] = "hello";
//	Func(str);
//}

//int main()
//{
//	printf("%d", 1 << 3 + 2);
//}
//
//union X
//{
//	int x;
//	char y[4];
//}a;
//int main()
//{
//	a.x = 0x11223344;
//	printf("%x\n", a.y[0]);
//	printf("%x\n", a.y[1]);
//	printf("%x\n", a.y[2]);
//	printf("%x\n", a.y[3]);
//
//}

//int main()
//{
//	int a, x;
//	for (a = 0, x = 0; a <= 1 && !x++; a++)
//	{
//		a++;
//	}
//	printf("%d %d\n", a, x);
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *p1 = (int *)(&a + 1);
//	int *p2 = (int *)((int)a + 1);
//	int *p3 = (int *)(a + 1);
//	printf("%d,%x,%d\n", p1[-1], p2[0], p3[1]);
//	return 0;
//}

int main()
{
	int arr[] = { 1, -2, 3, 3,  -4, 7, 2, -5 };
	int max = 0x80000000;//-2147483648
	int sum = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (sum>0 && sum>max)
		{
				max = sum;
		}
		if (sum < 0)
		{
			sum = arr[i];
		}
		else
		{
			sum = sum + arr[i];
		}
	}
	printf("max = %d,sum = %d\n", max, sum);
}
.........
.

.
...