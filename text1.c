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
	printf("��ʼ��Ϸ\n");
	char ret = 0;
	char board[Row][Col];//���ݴ洢����λ����
	Initboard(board, Row, Col);//��ʼ������ ��ʼ��Ϊ�ո�
	DisplayBoard(board, Row, Col);//��ӡ����
	while (1)
	{
		//�������
		PlayerMove(board, Row, Col);
		ret = Checkwin(board,Row,Col);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, Row, Col);//��ӡ����
		printf("--------------------\n");
		//��������
		ComputerMove(board, Row, Col);
		ret = Checkwin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, Row, Col);//��ӡ����
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else if (ret == "Q")
		printf("ƽ��\n");
}
int main()
{
	srand((unsigned int)time(NULL));//ʱ��� ���������
	int imput = 0;
	do
	{
		meau();
		printf("���������֣�1/0)\n");
		scanf("%d", &imput);
		switch (imput)
		{
		case 1:
				game();
				break;
		case 0:
				printf("�˳���Ϸ\n");
				break;
		default:
				printf("�����������������\n");
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
	printf("��ʼ��Ϸ\n");
	char ret = 0;
	char board[Row][Col];//���ݴ洢����λ����
	Initboard(board, Row, Col);//��ʼ������ ��ʼ��Ϊ�ո�
	DisplayBoard(board, Row, Col);//��ӡ����
	while (1)
	{
		//�������
		PlayerMove(board, Row, Col);
		ret = Checkwin(board,Row,Col);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, Row, Col);//��ӡ����
		printf("--------------------\n");
		//��������
		ComputerMove(board, Row, Col);
		ret = Checkwin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, Row, Col);//��ӡ����
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else if (ret == "Q")
		printf("ƽ��\n");
}
int main()
{
	srand((unsigned int)time(NULL));//ʱ��� ���������
	int imput = 0;
	do
	{
		meau();
		printf("���������֣�1/0)\n");
		scanf("%d", &imput);
		switch (imput)
		{
		case 1:
				game();
				break;
		case 0:
				printf("�˳���Ϸ\n");
				break;
		default:
				printf("�����������������\n");
				break;
		}
	} while (imput);
	return 0;
>>>>>>> eef6d59599fe62faf34583906fb120c75478c9db
}