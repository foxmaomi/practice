#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	/*int x = 5, y = 2, z = 1;
//	int sum;*/
//	//int q;
//	/*sum = x++ + y++;
//	printf("sum = %d ,x= %d, y = %d\n", sum, x, y);
//	printf("%x\n", -1);*/
//	//q = strlen("20\010019\0sta\0");
//	
//	//printf("%d", q);
//	printf("20\010019\0sta\0");
//	system("pause");
//}


public class Solution 
{
	public ListNode deleteDuplication(ListNode pHead)
	{
		if (pHead == null || pHead.next == null)
		{ // ֻ��0����1����㣬�򷵻�          
			return pHead;  
		}        
			if (pHead.val == pHead.next.val)
			{ // ��ǰ������ظ����      
				ListNode pNode = pHead.next;        
				while (pNode != null && pNode.val == pHead.val) 
				{     
					// ����ֵ�뵱ǰ�����ͬ��ȫ�����,�ҵ���һ���뵱ǰ��㲻ͬ�Ľ��     
					pNode = pNode.next;    
				}
				return deleteDuplication(pNode); 
				// �ӵ�һ���뵱ǰ��㲻ͬ�Ľ�㿪ʼ�ݹ�     
			}
			else
			{ // ��ǰ��㲻���ظ���� 
				pHead.next = deleteDuplication(pHead.next); 
				// ������ǰ��㣬����һ����㿪ʼ�ݹ�    
				return pHead;     
			}
	}
}