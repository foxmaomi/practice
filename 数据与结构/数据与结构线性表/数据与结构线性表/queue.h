#define _CRT_SECURE_NO_WARNINGS

#ifndef _QUEUE_H_
#define _QUEUE_H_
#define _DEFAULT_QUEUE_SIZE_ 8
#include"common.h"

//队列




//bool SeqQueueCyFull(SeqCyQueue *Q);
//bool SeqQueueCyEmpty(SeqCyQueue *Q);
//void SeqQueueCyInit(SeqCyQueue *Q, int sz);
//void SeqQueueCyEn(SeqCyQueue *Q, DataType x);
//void SeqQueueCyShow(SeqCyQueue *Q);
//DataType SeqQueueCyFront(SeqCyQueue *Q);
//void SeqQueueCyDe(SeqCyQueue *Q);
//void SeqQueueCyDestroy(SeqCyQueue *Q);

//循环队列
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
//	return (Q->tail + 1) % Q->capacity == Q->tail;
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
//		printf("循环队列已满， %d不能插入。\n", x);
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
//		printf("队列已空，不能取对头元素。\n");
//		return;
//	}
//	return Q->base[Q->front];
//}
//
//void SeqQueueCyDe(SeqCyQueue *Q)
//{
//	if (SeqQueueCyEmpty(Q))
//	{
//		printf("队列已空，不能出队。\n");
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