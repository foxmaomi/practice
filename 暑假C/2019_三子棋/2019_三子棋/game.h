#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void Initboard(char board[ROW][COL],int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
int Checkwin(char board[ROW][COL], int row, int col);


//玩家赢返回@
//电脑赢返回#
//平局返回P；
//继续返回C；