#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//结构体类型
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	flaot score;
//}s1,s2,s3;//全局变量  避免全局变量的使用
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	flaot score;
//}Stu;//全局变量  避免全局变量的使用
//
//int main()
//{
//	//结构体变量
//	struct Stu s;//局部变量
//	Stu ss;
//	return 0;
//}
//struct Point
//{
//	int x;
//	int y;
//
//};
//
//struct Node
//{
//	int data;
//	struct Point p; 
//	struct Node* next ;//为什么不能初始化为空指针
//
//};
//int main()
//{
//	//数据结构
//	//顺序表
//	//链表   // 线性数据结构   树形数据结构
//	//  
//	struct Point p = { 2, 3 };
//	struct Node tmp = { 1, { 2, 8 }, NULL };
//	printf("%d %d\n", p.x, p.y);
//	struct Node n = { 100, { 3, 5 }, &tmp };
//	printf("%d %d %d %p \n", n.data, n.p.x, n.p.y,n.next);
//	//printf("%d %d %d ", *(n.next).datd, *(n.next).p.x, *(n.next).p.y);
//	printf("%d %d %d \n", n.next->data, n.next->p.x, n.next->p.y);
//		system("pause");
//	return 0;
//}
//struct S
//{
//	char data[1000];
//	int n;
//};
//
//void Print1(struct S tmp)
//{
//	printf("%s %d \n", tmp.data, tmp.n);
//}
//
//void Print2(struct S* p)
//{
//	printf("%s %d \n",p->data, p->n);
//}
//
//int main()
//{
//	struct S s = { "hello bit", 100 };
//	Print1(s);
//	Print2(&s);
//	Add(2, 3);  
//	system("pause");
//	return 0;
//}


int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 3;
	int b = 5;
	Add(a, b);
	system("pause");
	return 0;
}

//栈  顶放顶取
//队列  队尾进去队头出
