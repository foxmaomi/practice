#define _CRT_SECURE_NO_WARNINGS
//������
//����������
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define ROW 3
#define COL 3
void DisplayBoard(char board[ROW][COL], int row, int col);
void InitBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//���Ӯ��*
//����Ӯ��#
//ƽ��----Q
//����----C
//
int Checkwin(char board[ROW][COL], int row, int col);