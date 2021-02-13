#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
void InitBoard(char board[ROWS][COLS], int rows,int cols ,char ret);//≥ı ºªØ∆Â≈Ã
void DisplayBoard(char board[ROWS][COLS],int row,int col);//¥Ú”°∆Â≈Ã
void SetMine(char mine[ROWS][COLS], int row, int col, int count);//≤º÷√¿◊
void FineMine(char mine[ROW][COLS],char show[ROWS][COLS], int row, int col);//≈≈¿◊