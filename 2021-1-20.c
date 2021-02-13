<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("***********************\n");
	printf("*******  1  play ******\n");
	printf("*******  0  exit ******\n");
	printf("***********************\n");
}
void game()
{
	int ret = rand() % 100 + 1;//产生一个1-100间的随机数
	int i = 0;
	while (1)
	{
		printf("请猜数字\n");
		scanf("%d", &i);
		if (i >ret)
		{
			printf("猜大了\n");
		}
		else if (i <ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入数字（0/1）：");
		scanf("%d", &input);
		switch (input)
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
	} while (input);
	return 0;
}
=======
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("***********************\n");
	printf("*******  1  play ******\n");
	printf("*******  0  exit ******\n");
	printf("***********************\n");
}
void game()
{
	int ret = rand() % 100 + 1;//产生一个1-100间的随机数
	int i = 0;
	while (1)
	{
		printf("请猜数字\n");
		scanf("%d", &i);
		if (i >ret)
		{
			printf("猜大了\n");
		}
		else if (i <ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入数字（0/1）：");
		scanf("%d", &input);
		switch (input)
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
	} while (input);
	return 0;
}
>>>>>>> eef6d59599fe62faf34583906fb120c75478c9db
