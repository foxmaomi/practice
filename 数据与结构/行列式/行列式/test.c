#define _CRT_SECURE_NO_WARNINGS

//#include"line.h"

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
	int  coef; //系数
	int exp;  //指数
	struct node *next;  //后继结点指针
}nodetype, *polyty;

polyty CreatePolyn(int m)
{
	int exp;
	int coef;
	polyty head;
	nodetype *r;
	nodetype *pa;
	int k;
	head = (nodetype *)malloc(sizeof(nodetype));
	head->next = NULL;
	r = head;
	//录入系数和指数
	for (k = 0; k < m; k++)
	{
		/*printf("请输入指数和系数");
		scanf("%d,%d%", &coef, &exp);*/
		printf("请输入系数-》");
		scanf("%d", &coef);
		printf("请输入指数->");
		scanf("%d", &exp);
		pa = (nodetype *)malloc(sizeof(nodetype));
		pa->coef = coef;
		pa->exp = exp;
		r->next = pa;
		r = pa;
	}
	r->next = NULL;
	return head;
}

void PrintPolyn(polyty head)
{
	nodetype *pt;
	printf(" The polynomial is :");
	pt = head->next;
	while (pt != NULL)
	{
		printf("%dx^%d", pt->coef, pt->exp);
		if (pt->next != NULL)
		{
			printf("+");
		}
		pt = pt->next;
	}
}

void PolyAdd(polyty la, polyty lb)
{
	nodetype *a;
	nodetype *b;
	nodetype *c;
	nodetype *temp;
	int sum;
	a = la->next;
	b = lb->next;
	c = la;
	while (a != NULL && b != NULL)
	{
		if (a->exp < b->exp)
		{
			c->next = a;
			c = a;
			a = a->next;
		}
		else if (a->exp == b->exp)
		{
			sum = a->coef + b->coef;
			if (sum != 0)//和系数不为0，则修改多项式a的该项系数，将la的节点加入和多项式，释放lb中该项的结点
			{
				a->coef = sum;
				c->next = a;
				c = a;
				a = a->next;
				temp = b;
				b = b->next;
				free(temp);
			}
			else // 和系数为0，则将la、lb中表示该项的结点都删除
			{
				temp = a;
				a = a->next;
				free(temp);
				temp = b;
				b = b->next;
				free(temp);
			}
		}
		else
		{
			c->next = b;
			c = b;
			b = b->next;
		}
		if (a != NULL)
			c->next = a;
		else
			c->next = b;
	}
}


int main()
{
	int m = 0;
	printf("请输入多项式a的元素个数");
	scanf("%d", &m);
	polyty psla = CreatePolyn(m);   //创建多项式a
	printf("\n");
	PrintPolyn(psla);
	printf("\n");
	printf("请输入多项式b的元素个数");
	scanf("%d", &m);
	polyty pslb = CreatePolyn(m);   //创建多项式b
	printf("\n");
	PrintPolyn(pslb);
	printf("\n");
	PolyAdd(psla, pslb);
	PrintPolyn(psla);
	printf("\n");
	return 0;
}