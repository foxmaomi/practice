#define _CRT_SECURE_NO_WARNINGS

#ifndef _QUEUE_H_
#define _QUEUE_H_
#define _DEFAULT_QUEUE_SIZE_ 8
#include"common.h"

//��ʽ����
typedef struct LinkQueueNode
{
	DataType data;
	struct LinkQueueNode *next;
}LinkQueueNode;

typedef struct LinkQueue
{
	LinkQueueNode *front;
	LinkQueueNode *tail;
}LinkQueue;

bool LinkQueueEmpty(LinkQueue *Q)
{
	return Q->front == NULL;
}
void LinkQueueInit(LinkQueue *Q);
void LinkQueueEn(LinkQueue *Q,DataType x);
void LinkQueueShow(LinkQueue *Q);
DataType LinkQueueFront(LinkQueue *Q);
void LinkQueueDe(LinkQueue *Q);
void LinkQueueDestroy(LinkQueue *Q);

void LinkQueueInit(LinkQueue *Q)
{
	Q->front = Q->tail = NULL;
}

void LinkQueueEn(LinkQueue *Q,DataType x)
{
	LinkQueueNode *s = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
	assert(s != NULL);
	s->data = x;
	s->next = NULL;
	if (LinkQueueEmpty(Q))
	{
		Q->front = Q->tail = s;
	}
	else
	{
		Q->tail->next = s;
		Q->tail = s;
	}
}

void LinkQueueShow(LinkQueue *Q)
{
	LinkQueueNode *p = Q->front;
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

DataType LinkQueueFront(LinkQueue *Q)
{
	if (LinkQueueEmpty(Q))
	{
		printf("�����ѿգ�����ȡ��ͷԪ�ء�\n");
	}
	return Q->front->data;
}
void LinkQueueDe(LinkQueue *Q)
{
	if (LinkQueueEmpty(Q))
	{
		printf("�����ѿգ����ܳ��ӡ�\n");
		return;
	}
	LinkQueueNode *p = Q->front;
	Q->front = Q->front->next;
	free(p);
}
void LinkQueueDestroy(LinkQueue *Q)
{
	LinkQueueNode *p = Q->front;
	while (p != NULL)
	{
		Q->front = Q->front->next;
		free(p);
		p = Q->front;
	}
	Q->front = Q->tail = NULL;
}



//˳�����
//
//typedef struct SeqQueue
//{
//	DataType *base;
//	size_t capacity;
//	int front;
//	int tail;
//}SeqQueue;
//
//bool SeqQueueFull(SeqQueue *Q)
//{
//	return Q->tail >= Q->capacity;
//}
//bool SeqQueueEmpty(SeqQueue *Q)
//{
//	return Q->front == Q->tail;
//}
//
//bool SeqQueueFull(SeqQueue *Q);
//bool SeqQueueEmpty(SeqQueue *Q);
//void SeqQueueInit(SeqQueue *Q, int sz);
//void SeqQueueEn(SeqQueue *Q, DataType x);
//void SeqQueueShow(SeqQueue *Q);
//DataType SeqQueueFront(SeqQueue *Q);
//void SeqQueueDe(SeqQueue *Q);
//void SeqQueueDestroy(SeqQueue *Q);
//
//void SeqQueueInit(SeqQueue *Q, int sz)
//{
//	Q->capacity = sz > _DEFAULT_QUEUE_SIZE_ ? sz : _DEFAULT_QUEUE_SIZE_;
//	Q->base = (DataType *)malloc(sizeof(DataType)* Q->capacity);
//	Q->front = Q->tail = 0;
//}
//
//void SeqQueueEn(SeqQueue *Q, DataType x)
//{
//	if (SeqQueueFull(Q))
//	{
//		printf("����������%d�������.\n", x);
//		return;
//	}
//	Q->base[Q->tail++] = x;
//}
//
//void SeqQueueShow(SeqQueue *Q)
//{
//	int i;
//	for (i = Q->front; i < Q->tail; ++i)
//	{
//		printf("%d ", Q->base[i]);
//	}
//	printf("\n");
//}
//
//DataType SeqQueueFront(SeqQueue *Q)
//{
//	if (SeqQueueEmpty(Q))
//	{
//		printf("�����ѿգ�����ȡ��ͷԪ��.\n");
//		return;
//	}
//	return Q->base[Q->tail];
//}
//
//void SeqQueueDe(SeqQueue *Q)
//{
//	if (SeqQueueEmpty(Q))
//	{
//		printf("�����ѿգ����ܳ���.\n");
//		return;
//	}
//	Q->front++;
//}
//
////C++ malloc new freee delete
////�ڴ�й©
//void SeqQueueDestroy(SeqQueue *Q)
//{
//	free(Q->base);
//	Q->base;
//	Q->capacity = Q->front = Q->tail = 0;
//}
//ѭ������
//typedef struct SeqQueue
//{
//	DataType *base;
//	size_t capacity;
//	int front;
//	int tail;
//}SeqCyQueue;

//bool SeqQueueCyFull(SeqCyQueue *Q);
//bool SeqQueueCyEmpty(SeqCyQueue *Q);
//void SeqQueueCyInit(SeqCyQueue *Q, int sz);
//void SeqQueueCyEn(SeqCyQueue *Q, DataType x);
//void SeqQueueCyShow(SeqCyQueue *Q);
//DataType SeqQueueCyFront(SeqCyQueue *Q);
//void SeqQueueCyDe(SeqCyQueue *Q);
//void SeqQueueCyDestroy(SeqCyQueue *Q);
//
//bool SeqQueueCyFull(SeqCyQueue *Q)
//{
//	return (Q->tail + 1) % Q->capacity == Q->front;
//	//if ((Q->front + Q->tail) >= Q->capacity)
//	//	return false;
//	//return true;
//}
//bool SeqQueueCyEmpty(SeqCyQueue *Q)
//{
//	return Q->front == Q->tail;
//}
//
//
//void SeqQueueCyInit(SeqCyQueue *Q, int sz)
//{
//	Q->capacity = sz > _DEFAULT_QUEUE_SIZE_ ? sz : _DEFAULT_QUEUE_SIZE_;
//	Q->base = (DataType*)malloc(sizeof(DataType) * Q->capacity);
//	Q->front = Q->tail = 0;
//}
//
//void SeqQueueCyEn(SeqCyQueue *Q, DataType x)
//{
//	if (SeqQueueCyFull(Q))
//	{
//		printf("ѭ������������ %d���ܲ��롣\n", x);
//		return;
//	}
//	Q->base[Q->tail] = x;
//	Q->tail = (Q->tail + 1) % Q->capacity;
//	//if (Q->tail > Q->front)
//	//{
//	//	Q->base[Q->tail++] = x;
//	//}
//	//else
//	//{
//	//	if (Q->tail == 8)
//	//	{
//	//		Q->tail = (Q->tail) % 8;
//	//	}
//	//	Q->base[Q->tail++] = x;
//	//}
//	
//}
//
//void SeqQueueCyShow(SeqCyQueue *Q)
//{
//	int i = 0;
//	for (i = Q->front; i != Q->tail;)
//	{
//		printf("%d ", Q->base[i]);
//		i = (i + 1) % Q->capacity;
//	}
//	printf("\n");
//	//int i = 0;
//	//if (Q->tail > Q->front)
//	//{
//	//	for (i = Q->front; i < Q->tail; i++)
//	//	{
//	//		printf("%d->", Q->base[i]);
//	//	}
//	//	printf("\n");
//	//}
//	//else
//	//{
//	//	for (i = Q->front; i < Q->capacity; i++)
//	//	{
//	//		printf("%d->", Q->base[i]);
//	//	}
//	//	for (i = 0; i < Q->tail; i++)
//	//	{
//	//		printf("%d->", Q->base[i]);
//	//	}
//	//}
//}
//
//DataType SeqQueueCyFront(SeqCyQueue *Q)
//{
//	if (SeqQueueCyEmpty(Q))
//	{
//		printf("�����ѿգ�����ȡ��ͷԪ�ء�\n");
//		return;
//	}
//	return Q->base[Q->front];
//}
//
//void SeqQueueCyDe(SeqCyQueue *Q)
//{
//	if (SeqQueueCyEmpty(Q))
//	{
//		printf("�����ѿգ����ܳ��ӡ�\n");
//		return;
//	}
//	Q->front = (Q->front + 1) % Q->capacity;
//}
//
//void SeqQueueCyDestroy(SeqCyQueue *Q)
//{
//	free(Q->base);
//	Q->base = NULL;
//	Q->capacity = Q->front = Q->tail = 0;
//}

#endif 