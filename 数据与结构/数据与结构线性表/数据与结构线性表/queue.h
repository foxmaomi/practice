#define _CRT_SECURE_NO_WARNINGS

#ifndef _QUEUE_H_
#define _QUEUE_H_
#define _DEFAULT_QUEUE_SIZE_ 8
#include"common.h"

typedef struct SeqQueue
{
	DataType *base;
	size_t capacity;
	int front;
	int tail;
}SeqQueue;

bool SeqQueueCyFull(SeqQueue *Q);
bool SeqQueueCyEmpty(SeqQueue *Q);
void SeqQueueCyInit(SeqQueue *Q,int sz);
void SeqQueueCyEn(SeqQueue *Q, DataType x);
void SeqQueueCyShow(SeqQueue *Q);
DataType SeqQueueCyFront(SeqQueue *Q);

bool SeqQueueCyFull(SeqQueue *Q)
{
	return (Q->tail + 1) % Q->capacity == Q->tail;
	//if ((Q->front + Q->tail) >= Q->capacity)
	//	return false;
	//return true;
}
bool SeqQueueCyEmpty(SeqQueue *Q)
{
	return Q->front == Q->tail;
}


void SeqQueueCyInit(SeqQueue *Q , int sz)
{
	Q->capacity = sz > _DEFAULT_QUEUE_SIZE_ ? sz : _DEFAULT_QUEUE_SIZE_;
	Q->base = (DataType*)malloc(sizeof(DataType)*_DEFAULT_QUEUE_SIZE_);
	Q->front = Q->tail = 0;
}

void SeqQueueCyEn(SeqQueue *Q, DataType x)
{
	if (SeqQueueCyFull(Q))
	{
		printf("队列已满， %d不能插入。\n", x);
		return;
	}
	Q->base[Q->tail] = x;
	Q->tail = (Q->tail + 1) % Q->capacity;
	//if (Q->tail > Q->front)
	//{
	//	Q->base[Q->tail++] = x;
	//}
	//else
	//{
	//	if (Q->tail == 8)
	//	{
	//		Q->tail = (Q->tail) % 8;
	//	}
	//	Q->base[Q->tail++] = x;
	//}
	
}

void SeqQueueCyShow(SeqQueue *Q)
{
	for (i = Q->front; i < Q->tail;)
	{
		printf("%d ", Q->base[i]);

	}

	//int i = 0;
	//if (Q->tail > Q->front)
	//{
	//	for (i = Q->front; i < Q->tail; i++)
	//	{
	//		printf("%d->", Q->base[i]);
	//	}
	//	printf("\n");
	//}
	//else
	//{
	//	for (i = Q->front; i < Q->capacity; i++)
	//	{
	//		printf("%d->", Q->base[i]);
	//	}
	//	for (i = 0; i < Q->tail; i++)
	//	{
	//		printf("%d->", Q->base[i]);
	//	}
	//}
}

DataType SeqQueueCyFront(SeqQueue *Q)

#endif 