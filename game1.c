<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1 
#include"game.h"
//初始化棋盘 初始化为空格
void Initboard(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col;j++)
		{
		   board[i][j] = ' ';
		}
	}
}
//打印棋盘
void DisplayBoard(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		//打印数据
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
//玩家下棋
void PlayerMove(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j =0;
	printf("玩家走：\n");
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d %d", &i, &j);
		if (1 <= i <= row && 1 <= j <= col)
		{
			if (board[i-1][j-1] != ' ')//玩家并非是程序员 是从1开始输入 而棋盘是从0开始 所以减1
			{
				printf("坐标被占用，请重新输入！\n");
			}
			else
			{
				board[i - 1][j - 1] = '*';
				break;
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}
//电脑下棋
void ComputerMove(char board[Row][Col], int row, int col)
{
	printf("电脑走：\n");
	while (1)
	{
		int i = rand() % row;//产生0-2的随机数
		int j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
}
//判断输赢
char Checkwin(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//三行判断
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return  board[i][0];
	}
	int j = 0;
	for (j = 0; j < col; j++)//三列判断
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
			return  board[0][j];
	}
	//对角线判断
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 'C';
		}
	}
	return 'Q';
}
=======
#define _CRT_SECURE_NO_WARNINGS 1 
#include"game.h"
//初始化棋盘 初始化为空格
void Initboard(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col;j++)
		{
		   board[i][j] = ' ';
		}
	}
}
//打印棋盘
void DisplayBoard(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		//打印数据
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
//玩家下棋
void PlayerMove(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j =0;
	printf("玩家走：\n");
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d %d", &i, &j);
		if (1 <= i <= row && 1 <= j <= col)
		{
			if (board[i-1][j-1] != ' ')//玩家并非是程序员 是从1开始输入 而棋盘是从0开始 所以减1
			{
				printf("坐标被占用，请重新输入！\n");
			}
			else
			{
				board[i - 1][j - 1] = '*';
				break;
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}
//电脑下棋
void ComputerMove(char board[Row][Col], int row, int col)
{
	printf("电脑走：\n");
	while (1)
	{
		int i = rand() % row;//产生0-2的随机数
		int j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
}
//判断输赢
char Checkwin(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//三行判断
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return  board[i][0];
	}
	int j = 0;
	for (j = 0; j < col; j++)//三列判断
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
			return  board[0][j];
	}
	//对角线判断
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 'C';
		}
	}
	return 'Q';
}
>>>>>>> eef6d59599fe62faf34583906fb120c75478c9db
