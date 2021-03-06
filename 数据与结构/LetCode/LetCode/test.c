#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>


void main()
{
	char ch;
	char name[30];
	int i;
	for (i = 0; i<3; i++) //循环三次，分别输入一个字符和一个名字，以验证方法
	{
		printf("input a char: ");
		scanf("%c", &ch);//输入一个字符
		getchar(); //过滤回车符
		printf("input name: ");
		gets(name); //输入一个带空格的字符串，回车确认，不需要清理回车符
		printf("char:%c name:%s\n", ch, name);
	}
}
//
//int main()
//{
//	char s[10] = { 0 };
//	int i = 1;
//	for (i = 0; i < 10; i++)
//	{
//		printf("请输入数据");
//		scanf("%c", s[i]);
//		printf("\n");
//	}
//	printf("%s", s);
//}

//顺序表语链表
//1、https://leetcode-cn.com/problems/remove-linked-list-elements/description/ [删除链表中等于给定值 val 的所有节点]
///**
//* Definition for singly-linked list.
//* struct ListNode {
//*     int val;
//*     struct ListNode *next;
//* };
//*/
//
//
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	if (head == NULL)
//		return NULL;
//
//	struct ListNode *p = head;
//	struct ListNode *prev = NULL;
//
//	while (p != NULL)
//	{
//		if (p->val == val)
//		{
//			if (prev == NULL)
//			{
//				head = head->next;
//				free(p);
//				p = head;
//			}
//			else
//			{
//				prev->next = p->next;
//				free(p);
//				p = prev->next;
//			}
//		}
//		else
//		{
//			prev = p;
//			p = p->next;
//		}
//	}
//	return head;
//}
//
//2、https://leetcode-cn.com/problems/reverse-linked-list/description/ [反转一个单链表]
///**
//* Definition for singly-linked list.
//* struct ListNode {
//*     int val;
//*     struct ListNode *next;
//* };
//*/
//
//
//struct ListNode* reverseList(struct ListNode* head)
//{
//	if (head == NULL || head->next == NULL)
//		return head;
//
//	struct ListNode *p = head->next;
//	head->next = NULL;
//	while (p != NULL)
//	{
//		struct ListNode *q = p->next;
//		p->next = head;
//		head = p;
//		p = q;
//	}
//	return head;
//}
//
//3、https://leetcode-cn.com/problems/reverse-linked-list/submissions/ 
//[给定一个带有头结点 head 的非空单链表，返回链表的中间结点。如果有两个中间结点，则返回第二个
//中间结点]
///**
//* Definition for singly-linked list.
//* struct ListNode {
//*     int val;
//*     struct ListNode *next;
//* };
//*/
//
//struct ListNode* middleNode(struct ListNode* head)
//{
//	if (head == NULL && head->next == NULL)
//		return NULL;
//	struct ListNode *fast, *slow;
//	fast = slow = head;
//	while (fast && fast->next != NULL)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	return slow;
//}
//
///*
//int GetLength(struct ListNode *head)
//{
//int nodeCount = 0;
//struct ListNode *p = head;
//while(p != NULL)
//{
//nodeCount++;
//p = p->next;
//}
//return nodeCount;
//}
//
//struct ListNode* middleNode(struct ListNode* head)
//{
//int nodeCount = GetLength(head);
//struct ListNode *p = head;
//for(int i=0; i<nodeCount/2; ++i)
//p = p->next;
//return p;
//}
//*/
//
//4、 https ://leetcode-cn.com/problems/middle-of-the-linked-list/ [输入一个链表，输出该链表中倒数第k个结点]
//
//
//
//栈和队列_Oj
//
//1、https://leetcode-cn.com/problems/valid-parentheses/ [括号匹配]
//
//#define DataType char
//typedef struct StackNode
//{
//	DataType data;
//	struct StackNode *next;
//}StackNode;
//
//typedef StackNode* ListStack;
//
//
//bool ListStackEmpty(ListStack *pst);
//void ListStackInit(ListStack *pst);
//DataType ListStackTop(ListStack *pst);
//void ListStackPush(ListStack *pst, DataType x);
//void ListStackPop(ListStack *pst);
//void ListStackShow(ListStack pst);
//
//bool ListStackEmpty(ListStack *pst)
//{
//	return *pst == NULL;
//}
//
//void ListStackInit(ListStack *pst)
//{
//	*pst = NULL;
//}
//
//DataType ListStackTop(ListStack *pst)
//{
//	assert(*pst != NULL);//
//	return (*pst)->data;
//}
//
//void ListStackPush(ListStack *pst, DataType x)
//{
//	StackNode *node = (StackNode*)malloc(sizeof(StackNode));
//	assert(node != NULL);
//	node->data = x;
//
//	node->next = *pst;
//	*pst = node;
//}
//
//void ListStackPop(ListStack *pst)
//{
//	StackNode *p = *pst;
//	*pst = p->next;
//	free(p);
//}
//
/////////////////////////////////////////////////////////////
//bool isValid(char * s)
//{
//	if (s == NULL)
//		return false;
//	if (*s == '\0')
//		return true;
//
//	ListStack st;
//	ListStackInit(&st);
//
//	while (*s != '\0')
//	{
//		if (*s == '(' || *s == '[' || *s == '{')
//		{
//			ListStackPush(&st, *s);
//		}
//		else
//		{
//			if (ListStackEmpty(&st))
//				return false;
//
//			int topval = ListStackTop(&st);
//			if ((*s == ')'&& topval != '(')
//				|| (*s == ']'&& topval != '[')
//				|| (*s == '}'&& topval != '{'))
//				return false;
//			ListStackPop(&st);
//		}
//		s++;
//	}
//
//	bool flag = ListStackEmpty(&st);
//	free(st);
//	st = NULL;
//	return flag;
//}

/*
bool isValid(char * s)
{
if(s == NULL)
return false;
if(*s == '\0')
return true;

int len = strlen(s);
char *st = (char*)malloc(sizeof(char) * len);
int top = 0;

while(*s != '\0')
{
if(*s=='(' || *s=='[' || *s=='{')
{
st[top++] = *s;
}
else
{
if(top == 0)
return false;

if((*s==')'&&st[top-1]!='(')
|| (*s==']'&&st[top-1]!='[')
|| (*s=='}'&&st[top-1]!='{'))
return false;
top--;
}
s++;
}

bool flag = (top==0?1:0);
free(st);
st = NULL;
return flag;
}
*/
//
//2、https://leetcode-cn.com/problems/implement-stack-using-queues/submissions/[用队列实现栈]
//typedef struct Queue
//{
//	int *base;
//	int front;
//	int tail;
//}Queue;
//
//void QueueInit(Queue *Q)
//{
//	int n = 1000;
//	Q->base = (int*)malloc(sizeof(int)* n);
//	Q->front = Q->tail = 0;
//}
//void QueuePush(Queue *Q, int x)
//{
//	Q->base[Q->tail++] = x;
//}
//void QueuePop(Queue *Q)
//{
//	Q->front++;
//}
//int QueueFront(Queue *Q)
//{
//	return Q->base[Q->front];
//}
//int QueueBack(Queue *Q)
//{
//	return Q->base[Q->tail - 1];
//}
//bool QueueEmpty(Queue *Q)
//{
//	return Q->front == Q->tail;
//}
////////////////////////////////////////////////////////
//typedef struct
//{
//	Queue  q1;
//	Queue  q2;
//} MyStack;
//
///** Initialize your data structure here. */
//
//MyStack* myStackCreate()
//{
//	MyStack *pst = (MyStack *)malloc(sizeof(MyStack));
//	QueueInit(&(pst->q1));
//	QueueInit(&(pst->q2));
//	return pst;
//}
//
///** Push element x onto stack. */
//void myStackPush(MyStack* obj, int x)
//{
//	Queue *pnoempty;
//	if (QueueEmpty(&(obj->q1)))
//	{
//		pnoempty = &(obj->q2);
//	}
//	else
//	{
//		pnoempty = &(obj->q1);
//	}
//	QueuePush(pnoempty, x);
//}
//
///** Removes the element on top of the stack and returns that element. */
//int myStackPop(MyStack* obj)
//{
//	Queue *pnoempty, *pempty;
//	if (QueueEmpty(&(obj->q1)))
//	{
//		pempty = &(obj->q1);
//		pnoempty = &(obj->q2);
//	}
//	else
//	{
//		pempty = &(obj->q2);
//		pnoempty = &(obj->q1);
//	}
//
//	int val;
//	while (!QueueEmpty(pnoempty))
//	{
//		val = QueueFront(pnoempty);
//		QueuePop(pnoempty);
//		if (QueueEmpty(pnoempty))
//			break;
//		QueuePush(pempty, val);
//	}
//	return val;
//}
//
///** Get the top element. */
//int myStackTop(MyStack* obj)
//{
//	Queue *pnoempty;
//	if (QueueEmpty(&(obj->q1)))
//	{
//		pnoempty = &(obj->q2);
//	}
//	else
//	{
//		pnoempty = &(obj->q1);
//	}
//
//	return QueueBack(pnoempty);
//}
//
///** Returns whether the stack is empty. */
//bool myStackEmpty(MyStack* obj)
//{
//	return QueueEmpty(&(obj->q1)) && QueueEmpty(&(obj->q2));
//}
//
//void myStackFree(MyStack* obj)
//{
//	free(obj);
//}
//
///**
//* Your MyStack struct will be instantiated and called as such:
//* MyStack* obj = myStackCreate();
//* myStackPush(obj, x);
//
//* int param_2 = myStackPop(obj);
//
//* int param_3 = myStackTop(obj);
//
//* bool param_4 = myStackEmpty(obj);
//
//* myStackFree(obj);
//*/
//
//3、https://leetcode-cn.com/problems/implement-queue-using-stacks/ [用栈实现队列]
//
//typedef struct Stack
//{
//	int *base;
//	int  top;
//	int  capacity;
//}Stack;
//
//bool StackFull(Stack *pst)
//{
//	return pst->top >= pst->capacity;
//}
//bool StackEmpty(Stack *pst)
//{
//	return pst->top == 0;
//}
//Stack* StackCreate(int k)
//{
//	Stack *pst = (Stack*)malloc(sizeof(Stack));
//	pst->capacity = k;
//	pst->base = (int*)malloc(sizeof(int)* pst->capacity);
//	pst->top = 0;
//	return pst;
//}
//void StackFree(Stack *pst)
//{
//	free(pst->base);
//	pst->base = NULL;
//	pst->capacity = pst->top = 0;
//}
//void StackPush(Stack *pst, int x)
//{
//	if (StackFull(pst))
//		return;
//	pst->base[pst->top++] = x;
//}
//void StackPop(Stack *pst)
//{
//	if (StackEmpty(pst))
//		return;
//	pst->top--;
//}
//int StackTop(Stack *pst)
//{
//	assert(pst->top != 0);
//	return pst->base[pst->top - 1];
//}
//
////////////////////////////////////////////////////////////////////
//typedef struct
//{
//	Stack *stack1;
//	Stack *stack2;
//} MyQueue;
//
///** Initialize your data structure here. */
//
//MyQueue* myQueueCreate()
//{
//	int n = 100;
//	MyQueue *queue = (MyQueue*)malloc(sizeof(MyQueue));
//	queue->stack1 = StackCreate(n);
//	queue->stack2 = StackCreate(n);
//	return queue;
//}
//
///** Push element x to the back of queue. */
//void myQueuePush(MyQueue* obj, int x)
//{
//	StackPush(obj->stack1, x);
//}
//
///** Removes the element from in front of queue and returns that element. */
//int myQueuePop(MyQueue* obj)
//{
//	if (StackEmpty(obj->stack2))
//	{
//		while (!StackEmpty(obj->stack1))
//		{
//			StackPush(obj->stack2, StackTop(obj->stack1));
//			StackPop(obj->stack1);
//		}
//	}
//	int val = StackTop(obj->stack2);
//	StackPop(obj->stack2);
//	return val;
//}
//
///** Get the front element. */
//int myQueuePeek(MyQueue* obj)
//{
//	if (StackEmpty(obj->stack2))
//	{
//		while (!StackEmpty(obj->stack1))
//		{
//			StackPush(obj->stack2, StackTop(obj->stack1));
//			StackPop(obj->stack1);
//		}
//	}
//	int val = StackTop(obj->stack2);
//	return val;
//}
//
///** Returns whether the queue is empty. */
//bool myQueueEmpty(MyQueue* obj)
//{
//	return StackEmpty(obj->stack1) && StackEmpty(obj->stack2);
//}
//
//void myQueueFree(MyQueue* obj)
//{
//	free(obj->stack1);
//	free(obj->stack2);
//	free(obj);
//}
//
///**
//* Your MyQueue struct will be instantiated and called as such:
//* MyQueue* obj = myQueueCreate();
//* myQueuePush(obj, x);
//
//* int param_2 = myQueuePop(obj);
//
//* int param_3 = myQueuePeek(obj);
//
//* bool param_4 = myQueueEmpty(obj);
//
//* myQueueFree(obj);
//*/
//
//4、https://leetcode-cn.com/problems/min-stack/submissions/ [实现一个最小栈]
//
//typedef struct Stack
//{
//	int *base;
//	int  top;
//	int  capacity;
//}Stack;
//
//bool StackFull(Stack *pst)
//{
//	return pst->top >= pst->capacity;
//}
//bool StackEmpty(Stack *pst)
//{
//	return pst->top == 0;
//}
//Stack* StackCreate(int k)
//{
//	Stack *pst = (Stack*)malloc(sizeof(Stack));
//	pst->capacity = k;
//	pst->base = (int*)malloc(sizeof(int)* pst->capacity);
//	pst->top = 0;
//	return pst;
//}
//void StackFree(Stack *pst)
//{
//	free(pst->base);
//	pst->base = NULL;
//	pst->capacity = pst->top = 0;
//}
//void StackPush(Stack *pst, int x)
//{
//	if (StackFull(pst))
//		return;
//	pst->base[pst->top++] = x;
//}
//void StackPop(Stack *pst)
//{
//	if (StackEmpty(pst))
//		return;
//	pst->top--;
//}
//int StackTop(Stack *pst)
//{
//	assert(pst->top != 0);
//	return pst->base[pst->top - 1];
//}
//
//////////////////////////////////////////////////////////////////////
//
//typedef struct
//{
//	Stack *st;
//	Stack *min_st;
//} MinStack;
//
///** initialize your data structure here. */
//
//MinStack* minStackCreate()
//{
//	int n = 1000;
//	MinStack *pst = (MinStack*)malloc(sizeof(MinStack));
//	pst->st = StackCreate(n);
//	pst->min_st = StackCreate(n);
//	return pst;
//}
//
//void minStackPush(MinStack* obj, int x)
//{
//	StackPush(obj->st, x);
//	if (StackEmpty(obj->min_st) || x <= StackTop(obj->min_st))
//	{
//		StackPush(obj->min_st, x);
//	}
//}
//
//void minStackPop(MinStack* obj)
//{
//	int val = StackTop(obj->st);
//	StackPop(obj->st);
//
//	if (val == StackTop(obj->min_st))
//	{
//		StackPop(obj->min_st);
//	}
//}
//
//int minStackTop(MinStack* obj)
//{
//	return StackTop(obj->st);
//}
//
//int minStackGetMin(MinStack* obj)
//{
//	return StackTop(obj->min_st);
//}
//
//void minStackFree(MinStack* obj)
//{
//	free(obj->st);
//	free(obj->min_st);
//	free(obj);
//}
//
///**
//* Your MinStack struct will be instantiated and called as such:
//* MinStack* obj = minStackCreate();
//* minStackPush(obj, x);
//
//* minStackPop(obj);
//
//* int param_3 = minStackTop(obj);
//
//* int param_4 = minStackGetMin(obj);
//
//* minStackFree(obj);
//*/
//
//5、https://leetcode-cn.com/problems/design-circular-queue/ [设计循环队列]
//
//typedef struct
//{
//	int *base;
//	int capacity;
//	int front;
//	int tail;
//} MyCircularQueue;
//
///** Initialize your data structure here. Set the size of the queue to be k. */
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj);
///** Checks whether the circular queue is full or not. */
//bool myCircularQueueIsFull(MyCircularQueue* obj);
//
//MyCircularQueue* myCircularQueueCreate(int k)
//{
//	MyCircularQueue *pc = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//	pc->capacity = k + 1;
//	pc->base = (int*)malloc(sizeof(int)*pc->capacity);
//	pc->front = pc->tail = 0;
//	return pc;
//}
//
///** Insert an element into the circular queue. Return true if the operation is successful. */
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
//{
//	if (myCircularQueueIsFull(obj))
//		return false;
//	obj->base[obj->tail] = value;
//	obj->tail = (obj->tail + 1) % obj->capacity;
//	return true;
//}
//
///** Delete an element from the circular queue. Return true if the operation is successful. */
//bool myCircularQueueDeQueue(MyCircularQueue* obj)
//{
//	if (myCircularQueueIsEmpty(obj))
//		return false;
//	obj->front = (obj->front + 1) % obj->capacity;
//	return true;
//}
//
///** Get the front item from the queue. */
//int myCircularQueueFront(MyCircularQueue* obj)
//{
//	if (myCircularQueueIsEmpty(obj))
//		return -1;
//	return obj->base[obj->front];
//}
//
///** Get the last item from the queue. */
//int myCircularQueueRear(MyCircularQueue* obj)
//{
//	if (myCircularQueueIsEmpty(obj))
//		return -1;
//	return obj->base[(obj->tail - 1 + obj->capacity) % obj->capacity];
//}
//
///** Checks whether the circular queue is empty or not. */
//bool myCircularQueueIsEmpty(MyCircularQueue* obj)
//{
//	return obj->front == obj->tail;
//}
//
///** Checks whether the circular queue is full or not. */
//bool myCircularQueueIsFull(MyCircularQueue* obj)
//{
//	return (obj->tail + 1) % (obj->capacity) == obj->front;
//}
//
//void myCircularQueueFree(MyCircularQueue* obj)
//{
//	free(obj->base);
//	free(obj);
//}
//
///**
//* Your MyCircularQueue struct will be instantiated and called as such:
//* MyCircularQueue* obj = myCircularQueueCreate(k);
//* bool param_1 = myCircularQueueEnQueue(obj, value);
//
//* bool param_2 = myCircularQueueDeQueue(obj);
//
//* int param_3 = myCircularQueueFront(obj);
//
//* int param_4 = myCircularQueueRear(obj);
//
//* bool param_5 = myCircularQueueIsEmpty(obj);
//
//* bool param_6 = myCircularQueueIsFull(obj);
//
//* myCircularQueueFree(obj);
//*/
//
//二叉树
//1、https://leetcode-cn.com/problems/binary-tree-preorder-traversal/ [二叉树的前序遍历]
///**
//* Definition for a binary tree node.
//* struct TreeNode {
//*     int val;
//*     struct TreeNode *left;
//*     struct TreeNode *right;
//* };
//*/
//
//
///**
//* Note: The returned array must be malloced, assume caller calls free().
//*/
//
//int size(struct TreeNode *root)
//{
//	if (root == NULL)
//		return 0;
//	else
//		return size(root->left) + size(root->right) + 1;
//}
//
//void _preorderTraversal(struct TreeNode* root, int *preorder, int *i)
//{
//	if (root != NULL)
//	{
//		preorder[*i] = root->val;
//		(*i)++;
//		_preorderTraversal(root->left, preorder, i);
//		_preorderTraversal(root->right, preorder, i);
//	}
//}
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize)
//{
//	int n = size(root);
//	int *preorder = (int*)malloc(sizeof(int)*n);
//	*returnSize = n;
//
//	int i = 0;
//	_preorderTraversal(root, preorder, &i);
//
//	return preorder;
//}
//
//2、https://leetcode-cn.com/problems/binary-tree-inorder-traversal/submissions/ [二叉树的中序遍历]
///**
//* Definition for a binary tree node.
//* struct TreeNode {
//*     int val;
//*     struct TreeNode *left;
//*     struct TreeNode *right;
//* };
//*/
//
//
///**
//* Note: The returned array must be malloced, assume caller calls free().
//*/
//
//int size(struct TreeNode *root)
//{
//	if (root == NULL)
//		return 0;
//	else
//		return size(root->left) + size(root->right) + 1;
//}
//void _inorderTraversal(struct TreeNode* root, int *inorder, int *i)
//{
//	if (root != NULL)
//	{
//		_inorderTraversal(root->left, inorder, i);
//		inorder[*i] = root->val;
//		(*i)++;
//		_inorderTraversal(root->right, inorder, i);
//	}
//}
//int* inorderTraversal(struct TreeNode* root, int* returnSize)
//{
//	int n = size(root);
//	*returnSize = n;
//	int *inorder = (int*)malloc(sizeof(int)* n);
//
//	int index = 0;
//	_inorderTraversal(root, inorder, &index);
//
//	return inorder;
//}
//
//3、https://leetcode-cn.com/problems/binary-tree-postorder-traversal/submissions/ [二叉树的后序遍历]
///**
//* Definition for a binary tree node.
//* struct TreeNode {
//*     int val;
//*     struct TreeNode *left;
//*     struct TreeNode *right;
//* };
//*/
//
//
///**
//* Note: The returned array must be malloced, assume caller calls free().
//*/
//
//
//int size(struct TreeNode *root)
//{
//	if (root == NULL)
//		return 0;
//	else
//		return size(root->left) + size(root->right) + 1;
//}
//void _postorderTraversal(struct TreeNode* root, int *postorder, int *i)
//{
//	if (root != NULL)
//	{
//		_postorderTraversal(root->left, postorder, i);
//		_postorderTraversal(root->right, postorder, i);
//		postorder[*i] = root->val;
//		(*i)++;
//	}
//}
//
//int* postorderTraversal(struct TreeNode* root, int* returnSize)
//{
//	int n = size(root);
//	*returnSize = n;
//	int *postorder = (int*)malloc(sizeof(int)* n);
//
//	int index = 0;
//	_postorderTraversal(root, postorder, &index);
//
//	return postorder;
//}
//
//4、https://leetcode-cn.com/problems/same-tree/submissions/ [检查两颗树是否相同]
///**
//* Definition for a binary tree node.
//* struct TreeNode {
//*     int val;
//*     struct TreeNode *left;
//*     struct TreeNode *right;
//* };
//*/
//
//
//bool isSameTree(struct TreeNode* p, struct TreeNode* q)
//{
//	if (p == NULL && q == NULL)
//		return true;
//	if (p == NULL || q == NULL)
//		return false;
//	return p->val == q->val && isSameTree(p->left, q->left)
//		&& isSameTree(p->right, q->right);
//}
//
//5、https://leetcode-cn.com/problems/subtree-of-another-tree/ [另一颗树的子树]
///**
//* Definition for a binary tree node.
//* struct TreeNode {
//*     int val;
//*     struct TreeNode *left;
//*     struct TreeNode *right;
//* };
//*/
//
//bool isSameTree(struct TreeNode* p, struct TreeNode* q)
//{
//	if (p == NULL && q == NULL)
//		return true;
//	if (p == NULL || q == NULL)
//		return false;
//	return p->val == q->val && isSameTree(p->left, q->left)
//		&& isSameTree(p->right, q->right);
//}
//
//bool isSubtree(struct TreeNode* s, struct TreeNode* t)
//{
//	if (t == NULL)
//		return true;
//	if (s == NULL)
//		return false;
//	if (isSameTree(s, t))
//		return true;
//	return isSubtree(s->left, t) || isSubtree(s->right, t);
//}
//
//6、https://leetcode-cn.com/problems/maximum-depth-of-binary-tree/submissions/ [二叉树最大深度]
///**
//* Definition for a binary tree node.
//* struct TreeNode {
//*     int val;
//*     struct TreeNode *left;
//*     struct TreeNode *right;
//* };
//*/
//
//
//int maxDepth(struct TreeNode* root)
//{
//	if (root == NULL)
//		return 0;
//	else
//	{
//		int left_h = maxDepth(root->left);
//		int right_h = maxDepth(root->right);
//		return (left_h>right_h ? left_h : right_h) + 1;
//	}
//}
//
//7、https://leetcode-cn.com/problems/balanced-binary-tree/submissions/ [判断一颗二叉树是否是平衡二叉树]
///**
//* Definition for a binary tree node.
//* struct TreeNode {
//*     int val;
//*     struct TreeNode *left;
//*     struct TreeNode *right;
//* };
//*/
//
//int maxDepth(struct TreeNode* root)
//{
//	if (root == NULL)
//		return 0;
//	else
//	{
//		int left_h = maxDepth(root->left);
//		int right_h = maxDepth(root->right);
//		return (left_h>right_h ? left_h : right_h) + 1;
//	}
//}
//
//bool isBalanced(struct TreeNode* root)
//{
//	if (root == NULL)
//		return true;
//	int left_h = maxDepth(root->left);
//	int right_h = maxDepth(root->right);
//
//	return (abs(left_h - right_h)<2)
//		&& isBalanced(root->left)
//		&& isBalanced(root->right);
//}
//
//8、https://leetcode-cn.com/problems/symmetric-tree/ [对称二叉树]
///**
//* Definition for a binary tree node.
//* struct TreeNode {
//*     int val;
//*     struct TreeNode *left;
//*     struct TreeNode *right;
//* };
//*/
//
//bool _isSymmetric(struct TreeNode *t1, struct TreeNode *t2)
//{
//	if (t1 == NULL && t2 == NULL)
//		return true;
//	if (t1 == NULL || t2 == NULL)
//		return false;
//	return t1->val == t2->val
//		&& _isSymmetric(t1->left, t2->right)
//		&& _isSymmetric(t1->right, t2->left);
//}
//
//bool isSymmetric(struct TreeNode* root)
//{
//	if (root == NULL)
//		return true;
//	return _isSymmetric(root->left, root->right);
//}
//
//9、https://www.nowcoder.com/practice/4b91205483694f449f94c179883c1fef?tpId=60&&tqId=29483&rp=1&ru=/activity/oj&qru=/ta/tsing-kaoyan/question-ranking [二叉树的构建及遍历]
//#include<stdio.h>
//
//typedef struct BinTreeNode
//{
//	char val;
//	struct BinTreeNode *left;
//	struct BinTreeNode *right;
//}BinTreeNode;
//
//typedef BinTreeNode* BinTree;
//
//BinTree CreateBinTree(char *str, int *i)
//{
//	if (str[*i] == '#' || str[*i] == '\0')
//		return NULL;
//	BinTreeNode *t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
//	t->val = str[*i];
//	(*i)++;
//	t->left = CreateBinTree(str, i);
//	(*i)++;
//	t->right = CreateBinTree(str, i);
//	return t;
//}
//
//void InOrder(BinTree t)
//{
//	if (t != NULL)
//	{
//		InOrder(t->left);
//		printf("%c ", t->val);
//		InOrder(t->right);
//	}
//}
//
//int main()
//{
//	BinTree bt = NULL;
//	char str[1000] = { 0 };
//	scanf("%s", str);
//	int i = 0;
//	bt = CreateBinTree(str, &i);
//	InOrder(bt);
//
//	return 0;
//}







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