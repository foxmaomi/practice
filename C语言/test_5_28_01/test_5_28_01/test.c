#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//DAY-11-01
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
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
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1)  )
//						{
//							if ((a*b*c*d*e) == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	system("color D");	
//	return 0;
//}


//36   6
//25   5
//牛客网智力题
//
//int main()
//{
//	char k = 0;
//	for (k = 'a'; k <= 'd'; k++)
//	{
//		if ((k != 'a') + (k == 'c') + (k == 'd') + (k != 'd') == 3)
//		{
//			printf("%c\n", k);
//		}
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//	
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//			
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//打印每一行
//		//
//		//  1//    1   //4
//		//	2//   1 1   //3
//		//	3//  1 2 1  //2
//		//	4// 1 3 3 1  //1
//		//	5//1 4  6 4 1
//		//             1      //10
//		//	          1 1           //8
//		//	         1 2 1      //7
//		//	        1 3 3 1    //6
//		//	       1 4 6 4 1     //5
//		//	      1 5 10 10 5 1    //4
//		//	     1 6 15 20 15 6 1    //3
//		//	   1 7 21 35 35 21 7 1       //2
//		//	  1 8 28 56 70 56 28 8 1    //1
//		//	1 9 36 84 126 126 84 36 9 1
//		////  
//		
//		for (j = 1; j < 10 - i;j++)
//		{
//			//打印空格数
//			printf("  ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%4d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a = 6;
//	int s = 0;
//	s = (a += a -= a*a);
//	printf("%d", s);
//	system("pause");
//	return 0;
//}


//打印杨辉三角




//

