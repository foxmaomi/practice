#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

//�Ƴ����������и�����ֵ

struct ListNode* removeElements(struct ListNode* head, int val)
{
	struct ListNode* p = head;
	if (p)
	{
		//ͷ���Ϊɾ����
		while (p->val == val)
		{
			if (p->next == NULL)
				return NULL;
			p = p->next;
		}
		head = p;
		while (p != NULL)
		{
			if (p->val == val)
			{
				p = head;
			}
			if (p->next != NULL && p->next->val == val)
			{
				p->next = p->next->next;
			}
			p = p->next;
		}
	}
	return head;
}
//�ݹ鷨
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