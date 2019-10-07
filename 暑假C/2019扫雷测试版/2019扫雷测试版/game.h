#define _CRT_SECURE_NO_WARNINGS

#ifndef __GAME_H__
#define __GAME_H__
#define ROWS 10
#define COLS 10
#define DEFAULT_COUNT 10
void display(char arr[ROWS + 2][COLS + 2], int rows, int cols);
void set_sweep(char arr[ROWS + 2][COLS + 2], int rows, int cols);
int get_sweep_count(char arr[ROWS + 2][COLS + 2], int x, int y);
void move_sweep(char arr[ROWS + 2][COLS + 2], int i, int j);
#endif//__GAME_H__
