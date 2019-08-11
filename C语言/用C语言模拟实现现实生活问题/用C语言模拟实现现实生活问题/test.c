#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//判断凶手

//int main()
//{
//	char answer = 0;
//	for (answer = 'A'; answer <= 'D'; answer++)
//	{
//		if ((answer != 'A') +
//			(answer == 'C') +
//			(answer == 'D') +
//			(answer != 'D') == 3
//			)
//		{
//			printf("%c\n", answer);
//		}
//	}
//	system("pause");
//	return 0;
//}


//


#include <stdio.h>
#include <windows.h>
#define n 10 //控制行数
int main()
{
	int arr[n][n] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i<n; i++)
	{
		for (j = 1; j<n - i; j++)//控制空格
		{
			printf("  ");//打印空格
		}
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)//第一列和i=j列赋成1
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
			printf("%4d", arr[i][j]);//对齐，打印数组
		}
		printf("\n");
	}
	system("color A8");//改变一下颜色
	//system("color D");
	system("pause");
	return 0;
}
//0 = 黑色       8 = 灰色
//1 = 蓝色       9 = 淡蓝色
//2 = 绿色       A = 淡绿色
//3 = 浅绿色     B = 淡浅绿色
//4 = 红色       C = 淡红色
//5 = 紫色       D = 淡紫色
//6 = 黄色       E = 淡黄色
//7 = 白色       F = 亮白色

//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((2 == b && 3 != a) || (2 != b && 3 == a) == 1)
//						{
//							if ((2 == b && 4 != e) || (2 != b && 4 == e) == 1)
//							{
//								if ((1 == c && 2 != d) || (1 != c && 2 == d) == 1)
//								{
//									if ((5 == c && 3 != d) || (5 != c && 3 == d) == 1)
//									{
//										if ((4 == e && 1 != a) || (4 != e && 1 == a) == 1)
//										{//对五个值均不相同的判断
//											if (((a != b) && (a != c) && (a != d) && (a != e))
//												&& ((b != c) && (b != d) && (b != e))
//												&& ((c != d) && (c != e))
//												&& ((d != e)))
//											{
//												printf("a= %d, b= %d,c= %d,d= %d,e= %d\n", a, b, c, d, e);
//											}
//
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//
//	return 0;
//}
