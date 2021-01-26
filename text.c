#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*******************************\n");
	printf("******    1      piay   *******\n");
	printf("******    0      exit   *******\n");
	printf("*******************************\n");


}
void game()
{
	printf("游戏开始！\n");//1 表示雷 0 表示非雷
	//存放雷
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化棋盘
	InitBoard(mine, ROWS, COLS,'0');//初始化存雷棋盘全为0
	InitBoard(show, ROWS, COLS,'*');//初始化存放雷信息棋盘全为*
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL, EASY_COUNT);
	//DisplayBoard(mine, ROW, COL);
	//排查雷
	FineMine(mine,show,ROW,COL);
	DisplayBoard(show, ROW, COL);

}
int main()
{
	int imput = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择数字（0/1）\n");
		scanf("%d", &imput);
		switch (imput)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (imput);
	return 0;
}