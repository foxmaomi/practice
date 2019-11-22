#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<stdbool.h>
#include<time.h>

#define Datatype int 
void Swap(Datatype *x, Datatype *y)
{
	Datatype tmp = *x;
	*x = *y;
	*y = tmp;
}