#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<stdbool.h>
#include<time.h>
#define DataType char

typedef struct BinTreeNode
{
	DataType data;
	struct BinTreeNode *leftChild;
	struct BinTreeNode *rightChild;
}BinTreeNode;
typedef struct BinTree
{
	BinTreeNode *root;
}BinTree;

void BinTreeInit(BinTree *t)//��ʼ��
{
	t->root = NULL;
}

//�������Ĵ���
BinTreeNode* _BinTreeCreate_2()
{
	DataType item;
	scanf("%c", &item);
	if (item == '#')
	{
		return NULL;
	}
	else
	{
		BinTreeNode *t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(t != NULL);
		t->data = item;
		t->leftChild = _BinTreeCreate_2();
		t->rightChild = _BinTreeCreate_2();
		return t;
	}
}
void BinTreeCreate(BinTree *t)
{
	//_BinTreeCreate(&t->root);
	t->root = _BinTreeCreate_2();
}
//ǰ��ݹ����
void _PreOrder(BinTreeNode *t)
{
	if (t != NULL)
	{
		printf("%c ", t->data);
		_PreOrder(t->leftChild);
		_PreOrder(t->rightChild);
	}
}
void PreOrder(BinTree *t)
{
	_PreOrder(t->root);
}
//��������ݹ�
void _InOrder(BinTreeNode *t)
{
	if (t != NULL)
	{
		_InOrder(t->leftChild);
		printf("%c ", t->data);
		_InOrder(t->rightChild);
	}
}
void InOrder(BinTree *t)
{
	_InOrder(t->root);
}
//��������ݹ�
void _PostOrder(BinTreeNode *t)
{
	if (t != NULL)
	{
		_PostOrder(t->leftChild);
		_PostOrder(t->rightChild);
		printf("%c ", t->data);
	}
}
void PostOrder(BinTree *t)
{
	_PostOrder(t->root);
}
//void LevelOrder(BinTree *t)
//{
//
//}
//ͳ�ƶ������Ľ����
void _PreOrdernum(BinTreeNode *t, int *n)
{
	if (t != NULL)
	{
		(*n)++;
		_PreOrdernum(t->leftChild, n);
		_PreOrdernum(t->rightChild, n);
	}
}
void PreOrdernum(BinTree *t, int *n)
{
	_PreOrdernum(t->root, n);
}




int main()
{
	char *str = "ABC##DE##F##G#H##";
	printf("%s\n", str);
	int n = strlen(str);
	int num = 0;
	BinTree bt;
	BinTreeInit(&bt);
	BinTreeCreate(&bt);
	PreOrder(&bt);
	printf("\n");
	InOrder(&bt);
	printf("\n");
	PostOrder(&bt);
	printf("\n");
	//LevelOrder(&bt);
	PreOrdernum(&bt,&num);
	printf("�������Ľ����Ϊ%d\n", num);
}