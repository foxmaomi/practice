#include "Node.h"
Node BinartNodes::pop()
{
	Node n = *ms.begin();   //��ȡmultise��һ������
	ms.erase(ms.find(*ms.begin()));    // ��multiset��ɾ��������
	return n;
}