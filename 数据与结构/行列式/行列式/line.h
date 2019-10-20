#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
	int  coef; //ϵ��
	int exp;  //ָ��
	struct node *next;  //��̽��ָ��
}nodetype,*polyty;

polyty CreatePolyn(int m);
void PrintPolyn(polyty head);
void PolyAdd(polyty la, polyty lb);

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
	//¼��ϵ����ָ��
	for (k = 0; k < m; k++)
	{
		/*printf("������ָ����ϵ��");
		scanf("%d,%d%", &coef, &exp);*/
		printf("������ϵ��-��");
		scanf("%d", &coef);
		printf("������ָ��->");
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
	printf("\n The polynomial is :\n");
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
			if (sum != 0)//��ϵ����Ϊ0�����޸Ķ���ʽa�ĸ���ϵ������la�Ľڵ����Ͷ���ʽ���ͷ�lb�и���Ľ��
			{
				a->coef = sum;
				c->next = a;
				c = a;
				a = a->next;
				temp = b;
				b = b->next;
				free(temp);
			}
			else // ��ϵ��Ϊ0����la��lb�б�ʾ����Ľ�㶼ɾ��
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