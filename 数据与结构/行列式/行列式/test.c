#define _CRT_SECURE_NO_WARNINGS

#include"line.h"

int main()
{
	int m = 0;
	scanf("%d", &m);
	polyty psla = CreatePolyn(m);   //��������ʽa
	PrintPolyn(psla);
	polyty pslb = CreatePolyn(m);   //��������ʽb
	PrintPolyn(pslb);
	PolyAdd(psla, pslb);
	return 0;
}