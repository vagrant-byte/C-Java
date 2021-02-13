<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1 
#include"game.h"
//��ʼ������ ��ʼ��Ϊ�ո�
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
//��ӡ����
void DisplayBoard(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		//��ӡ����
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
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
//�������
void PlayerMove(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j =0;
	printf("����ߣ�\n");
	while (1)
	{
		printf("���������꣺");
		scanf("%d %d", &i, &j);
		if (1 <= i <= row && 1 <= j <= col)
		{
			if (board[i-1][j-1] != ' ')//��Ҳ����ǳ���Ա �Ǵ�1��ʼ���� �������Ǵ�0��ʼ ���Լ�1
			{
				printf("���걻ռ�ã����������룡\n");
			}
			else
			{
				board[i - 1][j - 1] = '*';
				break;
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
}
//��������
void ComputerMove(char board[Row][Col], int row, int col)
{
	printf("�����ߣ�\n");
	while (1)
	{
		int i = rand() % row;//����0-2�������
		int j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
}
//�ж���Ӯ
char Checkwin(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//�����ж�
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return  board[i][0];
	}
	int j = 0;
	for (j = 0; j < col; j++)//�����ж�
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
			return  board[0][j];
	}
	//�Խ����ж�
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
//��ʼ������ ��ʼ��Ϊ�ո�
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
//��ӡ����
void DisplayBoard(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		//��ӡ����
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
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
//�������
void PlayerMove(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j =0;
	printf("����ߣ�\n");
	while (1)
	{
		printf("���������꣺");
		scanf("%d %d", &i, &j);
		if (1 <= i <= row && 1 <= j <= col)
		{
			if (board[i-1][j-1] != ' ')//��Ҳ����ǳ���Ա �Ǵ�1��ʼ���� �������Ǵ�0��ʼ ���Լ�1
			{
				printf("���걻ռ�ã����������룡\n");
			}
			else
			{
				board[i - 1][j - 1] = '*';
				break;
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
}
//��������
void ComputerMove(char board[Row][Col], int row, int col)
{
	printf("�����ߣ�\n");
	while (1)
	{
		int i = rand() % row;//����0-2�������
		int j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
}
//�ж���Ӯ
char Checkwin(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//�����ж�
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return  board[i][0];
	}
	int j = 0;
	for (j = 0; j < col; j++)//�����ж�
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
			return  board[0][j];
	}
	//�Խ����ж�
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
