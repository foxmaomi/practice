#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

#define MAXSIZE 1000
typedef struct
{
	int row, col;
	int val;
}Triple;
typedef struct
{
	Triple data[MAXSIZE + 1];
	int rows, cols, nums;
}TSMatrix;

void initTSMatrix(TSMatrix * M, int rows, int cols, int nums)
{
		{
		printf("输入参数有问题\n");
	}
	M->rows = rows;
	M->cols = cols;
	M->nums = nums;
	return;
}
void display(TSMatrix *M)
{
	int i = 0;
	for (i = 0; i< M->nums; i++)
	{
		printf("M->data[i].row= %d,M->data[i].col= %d,M->data[i].val= %d \n", M->data[i].row, M->data[i].col, M->data[i].val);
	}
} 
void TransposeTSMatrix1(TSMatrix A, TSMatrix* B)
{
	int i, j, k;
	B->rows = A.cols;
	B->cols = A.rows;
	B->nums = A.nums;
	if (B->nums>0)
	{
		j = 0;
		for (k = 1; k <= A.cols; k++)
		{
			for (i = 0; i <= A.nums; i++)
			if (A.data[i].col == k)
			{
				B->data[j].row = A.data[i].col;
				B->data[j].col = A.data[i].row;
				B->data[j].val = A.data[i].val;
				j++;
			}
		}
	}
}
int main()
{
	TSMatrix M;
	TSMatrix T;
	int i = 0;
	initTSMatrix(&M, 3, 3, 3);
	for (i = 0; i<M.nums; i++)
	{
		M.data[i].row = i;
		M.data[i].col = i + 1;
		M.data[i].val = i + 2;
	}
	display(&M);
	TransposeTSMatrix1(M, &T);
	display(&T);
}