#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ṹ������
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	flaot score;
//}s1,s2,s3;//ȫ�ֱ���  ����ȫ�ֱ�����ʹ��
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	flaot score;
//}Stu;//ȫ�ֱ���  ����ȫ�ֱ�����ʹ��
//
//int main()
//{
//	//�ṹ�����
//	struct Stu s;//�ֲ�����
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
//	struct Node* next ;//Ϊʲô���ܳ�ʼ��Ϊ��ָ��
//
//};
//int main()
//{
//	//���ݽṹ
//	//˳���
//	//����   // �������ݽṹ   �������ݽṹ
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

//ջ  ���Ŷ�ȡ
//����  ��β��ȥ��ͷ��
