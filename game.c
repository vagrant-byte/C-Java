#define _CRT_SECURE_NO_WARNINGS 1 
#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char ret)//初试划棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= rows; i++)
	{
		for (j = 0; j <= cols; j++)
		{
			board[i][j] = ret;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)//打印棋盘
{
	int i = 0;
	int j = 0;
	printf("----------------------------\n");
	for (i = 0; i <= row; i++)//打印行号
	{
		printf("%d  ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d  ", i);//打印列号
		for (j = 1; j <= col; j++)
		{
			printf("%c  ",board[i][j]);
		}
		printf("\n");
	}

}
void SetMine(char mine[ROWS][COLS], int row, int col, int count)//布置雷
{
	for (int i = 0; i <= EASY_COUNT; i++)
	{
		while(count)
		{
			int x = rand() % row+1;//产生1-9的数字
			int y = rand() % col+1;
			if (mine[x][y] == '0')
			{
				mine[x][y] = '1';
				count--;
			}
		}
	}
}
int GetMineCont(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}
void FineMine(char mine[ROW][COLS], char show[ROWS][COLS], int row, int col)//排雷
{
	int win = 0;//判断排雷是否成功
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入要排查的坐标：");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		//检验坐标合法性
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = GetMineCont(mine, x, y);
				show[x][y] = count+'0';//存放的是数字字符
				DisplayBoard(show, row, col);
				win++;
			}
				
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	if (win = row*col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功！\n");
		DisplayBoard(mine, row, col);
	}
}