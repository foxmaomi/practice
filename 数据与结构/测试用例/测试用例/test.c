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
		{ // 只有0个或1个结点，则返回          
			return pHead;  
		}        
			if (pHead.val == pHead.next.val)
			{ // 当前结点是重复结点      
				ListNode pNode = pHead.next;        
				while (pNode != null && pNode.val == pHead.val) 
				{     
					// 跳过值与当前结点相同的全部结点,找到第一个与当前结点不同的结点     
					pNode = pNode.next;    
				}
				return deleteDuplication(pNode); 
				// 从第一个与当前结点不同的结点开始递归     
			}
			else
			{ // 当前结点不是重复结点 
				pHead.next = deleteDuplication(pHead.next); 
				// 保留当前结点，从下一个结点开始递归    
				return pHead;     
			}
	}
}