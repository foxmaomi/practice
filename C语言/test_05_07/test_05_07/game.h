#define _CRT_SECURE_NO_WARNINGS
//三子棋
//函数的声明
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

//玩家赢—*
//电脑赢—#
//平局----Q
//继续----C
//
int Checkwin(char board[ROW][COL], int row, int col);