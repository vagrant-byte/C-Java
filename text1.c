<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include"game.h"
void meau()
{
	printf("********************************\n");
	printf("********   1      play   *******\n");
	printf("********   0      exit   *******\n");
	printf("********************************\n");
}
void game()
{
	printf("开始游戏\n");
	char ret = 0;
	char board[Row][Col];//数据存储是两位数组
	Initboard(board, Row, Col);//初始化棋盘 初始化为空格
	DisplayBoard(board, Row, Col);//打印棋盘
	while (1)
	{
		//玩家下棋
		PlayerMove(board, Row, Col);
		ret = Checkwin(board,Row,Col);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, Row, Col);//打印棋盘
		printf("--------------------\n");
		//电脑下棋
		ComputerMove(board, Row, Col);
		ret = Checkwin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, Row, Col);//打印棋盘
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else if (ret == "Q")
		printf("平局\n");
}
int main()
{
	srand((unsigned int)time(NULL));//时间戳 产生随机数
	int imput = 0;
	do
	{
		meau();
		printf("请输入数字（1/0)\n");
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
				printf("输入错误，请重新输入\n");
				break;
		}
	} while (imput);
	return 0;
=======
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include"game.h"
void meau()
{
	printf("********************************\n");
	printf("********   1      play   *******\n");
	printf("********   0      exit   *******\n");
	printf("********************************\n");
}
void game()
{
	printf("开始游戏\n");
	char ret = 0;
	char board[Row][Col];//数据存储是两位数组
	Initboard(board, Row, Col);//初始化棋盘 初始化为空格
	DisplayBoard(board, Row, Col);//打印棋盘
	while (1)
	{
		//玩家下棋
		PlayerMove(board, Row, Col);
		ret = Checkwin(board,Row,Col);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, Row, Col);//打印棋盘
		printf("--------------------\n");
		//电脑下棋
		ComputerMove(board, Row, Col);
		ret = Checkwin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, Row, Col);//打印棋盘
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else if (ret == "Q")
		printf("平局\n");
}
int main()
{
	srand((unsigned int)time(NULL));//时间戳 产生随机数
	int imput = 0;
	do
	{
		meau();
		printf("请输入数字（1/0)\n");
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
				printf("输入错误，请重新输入\n");
				break;
		}
	} while (imput);
	return 0;
>>>>>>> eef6d59599fe62faf34583906fb120c75478c9db
}