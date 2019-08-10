#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//特别：注册自己的csdn博客。
//
//1. 打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	int sum = 0;
//
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int count = 0;
//		
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				count++;
//			}
//		}
//		if (count == 0)
//		{
//			printf("%d\n", i);
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//}



//2. 输出乘法口诀表
//int main()
//{
//	int i = 0;
//	//打印行数
//	for (i = 1; i <= 9; i++)
//	{
//		//打印每一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf(" %d*%d=%-2d", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//3. 判断1000年-- - 2000年之间的闰年
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 || (i % 100 != 0 && i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}

//int main()
//{
//	printf("\a\a\a\a\a");
//}

//4.
//写一篇博客。谈谈
//1>写一个自我介绍
//2>列出你编程的目标。
//3>你打算怎么学习编程？
//4>你打算在学习编程这件事上每周花费多少时间？
//5>你最想进入的一家IT公司。
//将链接发我并分享到班级群里。
//
//博客注意事项：
//博客内容中，不要学生气，不要提报了培训班学习。
//最好的方式是自己搭建一个博客。
int main()
{
	int year=0;
	int count = 0;
	for(year=1000; year<=2000; year++)
	{
		//判断闰年

		if(((year%4==0)&&(year%100!=0))||(year%400==0))
		{
			printf("%d ", year);
			count++;
		}
		/*if(year%4==0)
		{
			if(year%100 != 0)
			{
				printf("%d ", year);
				count++;
			}
		}
		if(year%400 == 0)
		{
			printf("%d ", year);
			count++;
		}*/
	}
	printf("\ncount = %d\n", count);
	system("pause");
	return 0;
}