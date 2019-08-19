#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
//
//1.在屏幕上输出以下图案：
//      *    //6
//     ***    //5
//    *****     // 4
//   *******     //3
//  *********     //2
// ***********    ///1
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//

//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	//控制行数
//	//打印上三角
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//	//打印空格数
//		for (j = i; j < n; j++)
//		{
//			printf(" ");
//		}
//		//k控制每一行的数目
//
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	//打印下三角
//	for (i = 1; i < n; i++)
//	{
//		int j = 0;
//		//打印空格数
//		//for (j = 1; j < i; j++)
//		//{
//		//	printf("?");
//		//}
//		
//		for (j = 1; j <= 2 * (n - 1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//上部分
//	for(i=0; i<line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for(j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for(j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下部分
//	for(i=0; i<line-1; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for(j=0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//
///*
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//153 = 1^3 + 5^3 + 3^3。
//370 = 3^3 + 7^3 + 0^3。
//371 = 3^3 + 7^3 + 1^3。
//407 = 4^3 + 0^3 + 7^3。
//*/
//
//
//int main()
//{
//	int count = 0;
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		int tmp = i;
//		ret = 0;
//		while (tmp)
//		{
//			ret = pow(tmp % 10, 3) + ret;
//			tmp /= 10;
//		}
//		if (ret == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}



//int main()
//{
//	int n = 0;
//	//123
//	//
//	for(n=1; n<=1000; n++)
//	{
//		//判断n是否为水仙花数
//		int count = 1;
//		int sum = 0;
//		int tmp = n;
//		//统计n的位数
//		while(tmp/10)
//		{
//			count++;
//			tmp = tmp/10;
//		}
//		//
//		tmp = n;
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp /= 10;
//		}
//		if(n == sum)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}

//3.
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

int main()
{
	int sn = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	scanf("%d", &n);
	for (i = 0; i < 5; i++)
	{
		sn = n*pow(10, i) + sn;
		sum = sum + sn;
	}
	printf("%d\n", sum);
	//printf("%d\n", 2 + 22 + 222 + 2222 + 22222);
}

