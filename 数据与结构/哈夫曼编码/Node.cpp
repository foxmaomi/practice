#include "Node.h"
Node BinartNodes::pop()
{
	Node n = *ms.begin();   //获取multise第一个数据
	ms.erase(ms.find(*ms.begin()));    // 从multiset中删除该数据
	return n;
}