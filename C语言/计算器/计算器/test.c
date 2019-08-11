#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

void menu()
{
	printf("*****************************\n");
	printf("****     1.Add    2.Sub  ****\n");
	printf("****     3.Mul    4.Div  ****\n");
	printf("****         0.exit      ****\n");
	printf("*****************************\n");
	
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x*y;
}

int Div(int x, int y)
{
	return x / y;
}


//1.case内部语句冗余，可以分装为一个函数
//2.如果计算的方法越多，那么对计算方法的编号会难以记忆，不方便使用

//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入要操作的数字=>");
//	scanf("%d%d", &x, &y);
//	ret =  pf(x, y);
//	printf("ret=%d\n", ret);
//}

int main()
{
	int ret = 0;

	int input = 0;
	int(*pfarr[5])(int, int) = { 0, Add, Sub, Mul, Div };
	do
	{
		int x = 0;
		int y = 0;
		
		menu();
		printf("请选择要执行的算法=>");
		scanf("%d", &input);
		if (input >= 1 && input <=4)
		{
			printf("请输入要计算的数字=>");
			scanf("%d%d", &x, &y);
			ret = pfarr[input](x, y);
			printf("ret=%d\n", ret);
		}
		
		//
		///*switch (input)
		//{
		//case 1:
		//	calc(Add);
		//	
		//	break;
		//case 2:
		//	calc(Sub);
		//	break;
		//case 3:
		//	calc(Mul);
		//	break;
		//case 4:
		//	calc(Div);
		//	break;
		//case 0:
		//	printf("结束\n");
		//	break;
		//default:
		//	printf("选择错误，请重新选择=>\n");

		//}*/
	
		
	} while (input);
	
	system("pause");
		return 0;
}