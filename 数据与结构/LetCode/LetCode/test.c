#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>








//#define ElementType int
//#define MAXSIZE     100
//typedef struct {
//	ElementType *stack_in;
//	ElementType *stack_out;
//	int top_in;
//	int top_out;
//} MyQueue;
///** Initialize your data structure here. */
//
//MyQueue* myQueueCreate() {
//	MyQueue *S;
//	S = (MyQueue *)malloc(sizeof(MyQueue));
//	if (S == NULL)
//		return NULL;
//	S->stack_in = (int *)malloc(sizeof(int)* MAXSIZE);
//	S->stack_out = (int *)malloc(sizeof(int)* MAXSIZE);
//	S->top_in = -1;
//	S->top_out = -1;
//	return S;
//}
//
///** Push element x to the back of queue. */
//void myQueuePush(MyQueue* obj, int x) {
//	obj->stack_in[++(obj->top_in)] = x;
//}
//
///** Removes the element from in front of queue and returns that element. */
//int myQueuePop(MyQueue* obj) {
//	if (obj->top_out == -1){
//		while (obj->top_in != -1){
//			obj->stack_out[++(obj->top_out)] = obj->stack_in[(obj->top_in)--];
//		}
//	}
//	return obj->stack_out[(obj->top_out)--];
//}
//
///** Get the front element. */
//int myQueuePeek(MyQueue* obj){
//	if (obj->top_out != -1){
//		return obj->stack_out[(obj->top_out)];
//	}
//	else if (obj->top_in != -1){
//		return obj->stack_in[0];
//	}
//	else
//		return 0;
//}
//
///** Returns whether the queue is empty. */
//bool myQueueEmpty(MyQueue* obj) {
//	return (obj->top_in == -1 && obj->top_out == -1) ? true : false;
//}
//
//void myQueueFree(MyQueue* obj) {
//	free(obj);
//}



////移除链表中所有给定的值
//
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	struct ListNode* p = head;
//	if (p)
//	{
//		//头结点为删除数
//		while (p->val == val)
//		{
//			if (p->next == NULL)
//				return NULL;
//			p = p->next;
//		}
//		head = p;
//		while (p != NULL)
//		{
//			if (p->val == val)
//			{
//				p = head;
//			}
//			if (p->next != NULL && p->next->val == val)
//			{
//				p->next = p->next->next;
//			}
//			p = p->next;
//		}
//	}
//	return head;
//}
//递归法
//struct ListNode* removeElements(struct ListNode* head, int val){
//
//	if (!head)
//		return head;
//	head->next = removeElements(head->next, val);
//	return head->val == val ? head->next : head;
//
//
//}

//bool IsValid(char *s)
//{
//	if (s == NULL || s[0] == '\0')
//		return true;
//	char *stack = (char *)malloc(strlen(s));
//	int i = 0;
//	int top = 0;
//	for (i = 0; s[i]; ++i)
//	{
//		if (s[i] == '(' || s[i] == '['  || s[i] == '{')
//		{
//			stack[top++] = s[i];
//		}
//		else
//		{
//			if ((--top) < 0)
//				return false;
//			if (s[i] == ')' && stack[top] != ')')
//				return false;
//			if (s[i] == '[' && stack[top] != ']')
//				return false;
//			if (s[i] == '{' && stack[top] != '}')
//				return false;
//		}
//	}
//	return (!top);
//}
//
//void print()
//{
//	printf("shdfgds\n");
//	printf("shdfgds\n");
//	printf("shdfgds\n");
//}
//
//int main()
//{
//	char s[] = "((()))[]{}";
//	//IsValid(s);
//	print();
//}