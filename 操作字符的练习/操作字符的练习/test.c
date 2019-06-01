#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
//算术操作符  + - / * %
//%操作符只能对整形进行运算：并且以整形形式返回余数

//位操作符：对象必须是整数
//1.按位与&     
//1010
//1100
//1110    规则：相对应的两个位置同时为1则结果为1，否则为0
//某一位按位与1   则得到的是改为的二进制数

//2.按位或 | 
//10110
//11000
//11110     规则：相对应的两个位有一个为1则结果为1，否则为0
// 

//3.按位异或 ^
//1010
//1100
//0110     规则：相对应的两个二进制位相同为0；相异为1
//int main()
//{
//
//	//算术右移
//	int num = -1;
//	printf("%d\n", num);
//	num = num >> 1;
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}


////有问题代码
//int main()
//{
//	int a = -10;
//	int *p = NULL;
//	printf("%d\n", !2);//0
//	printf("%d\n", !0);//1
//	a = -a;
//	p = &a;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);//4    由此得出sizeof是操作符不是函数
//	system("pause");
//	return 0;
//}



//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)//4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)//4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)//40
//	printf("%d\n", sizeof(ch));//(3)//10
//	test1(arr);
//	test2(ch);
//	//数组在传参时传的是首元素地址
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//后置++，先引用后自加
//	//int b = a++;
//	//int c = a--;.
//	//前置++，先自加，后引用
//	int b = ++a;
//	int c = --a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//0001
//	//0010   
//	//0000    &按位与
//	//0011    |按位或
//	//a = 1 & 2;
//	//b = 1 && 2;//逻辑与
//	a = 1 | 2;
//	b = 1 || 2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//
//}


//逻辑操作符  &&   ||
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;     //  1,2,3,4    从左向右计算遇见一个表达式为0（假），则后面的表达式不用参与计算
//	i = a++ || ++b || d++;          //    1，3，3，4   从左向右计算遇见一个表达式1（真），则后面的表达式不用参与计算
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//int a = 0;
//	int a = 10;
//	//1010   
//	printf("%d\n", ~a);   //~按位取反操作符
//	system("pause");
//	return 0;
//}

//.使用条件表达式实现找两个数中较大值。
//  exp1 ? exp2 : exp3
//int main()
//{
//	int a = 3;
//	int b = 5;
//	/*int max = 0;
//	
//	max= a> b ? a :  b;*/
//	int max = 0;
//	a > b ? max = 5 : max = 3;
//		printf("%d\n", max);
//	system("pause");
//	return 0;
//}

//用、函数调用和结构成员
//1.[] 下标引用操作符
//操作数：一个数组名 + 一个索引值
//2.() 函数调用操作符 接受一个或者多个操作数：第一个操作数是函数名，剩余的操作数就是传递给函数的参数。
//3.访问一个结构的成员
//.结构体.成员名
//->结构体指针->成员名

//如果使用逗号表达式，改写：
//while (a = get_val(), count_val(a), a>0)
//{
//	//业务处理
//}
//int arr[10];//创建数组
//arr[9] = 10;//实用下标引用操作符。
////[]的两个操作数是arr和9。
////#include <stdio.h>
//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char *str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1();            //实用（）作为函数调用操作符。
//	test2("hello bit.");//实用（）作为函数调用操作符。
//	return 0;
//}
////#include <stdio.h>
////struct Stu
////{
////	char name[10];
////	int age;
////	char sex[5];
////	double score;
////};
//void test1()
//{
//	printf("hehe\n");
//}
//
//void test2(const char *str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	test1();
//	test2("hello bit.");
//	system("pause");
//	return 0;
//}
//
//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//void set_age1(struct Stu stu)
//{
//	stu.age = 18;
//}
//void set_age2(struct Stu* pStu)
//{
//	pStu->age = 18;//结构成员访问
//}
//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu;//结构成员访问
//
//	stu.age = 20;//结构成员访问
//	set_age1(stu);
//
//	pStu->age = 20;//结构成员访问
//	set_age2(pStu);
//	system("pause");
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	double price;
//	char id[20];
//};
//int main()
//{
//	struct Book b = { "cnm", 25.3, "jjjjj" };
//	//printf("%s %lf %s\n", b.name, b.price, b.id);
//如何访问结构体变量
//结构体名.变量名
//inr结构体指针->变量名
//	struct Book* pb = &b;
//	printf("%s %lf %s\n", pb->name,pb->price,pb->id);
//	system("pause");
//	return 0;
//
//}
//
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	system("pause");
//	return 0;
//}
//test_5_12 1
int main()
{
	char a = 127;
	char b = 3;
	char c = a + b;
	printf("%d\n", c);
	system("pause");
	return 0;
}