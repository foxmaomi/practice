#define _CRT_SECURE_NO_WARNINGS

#include"line.h"

int main()
{
	int m = 0;
	scanf("%d", &m);
	polyty psla = CreatePolyn(m);   //创建多项式a
	PrintPolyn(psla);
	polyty pslb = CreatePolyn(m);   //创建多项式b
	PrintPolyn(pslb);
	PolyAdd(psla, pslb);
	return 0;
}