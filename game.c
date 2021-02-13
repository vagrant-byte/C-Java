#define _CRT_SECURE_NO_WARNINGS 1 
#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char ret)//���Ի�����
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
void DisplayBoard(char board[ROWS][COLS], int row, int col)//��ӡ����
{
	int i = 0;
	int j = 0;
	printf("----------------------------\n");
	for (i = 0; i <= row; i++)//��ӡ�к�
	{
		printf("%d  ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d  ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c  ",board[i][j]);
		}
		printf("\n");
	}

}
void SetMine(char mine[ROWS][COLS], int row, int col, int count)//������
{
	for (int i = 0; i <= EASY_COUNT; i++)
	{
		while(count)
		{
			int x = rand() % row+1;//����1-9������
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
void FineMine(char mine[ROW][COLS], char show[ROWS][COLS], int row, int col)//����
{
	int win = 0;//�ж������Ƿ�ɹ�
	while (win<row*col-EASY_COUNT)
	{
		printf("������Ҫ�Ų�����꣺");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		//��������Ϸ���
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = GetMineCont(mine, x, y);
				show[x][y] = count+'0';//��ŵ��������ַ�
				DisplayBoard(show, row, col);
				win++;
			}
				
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	if (win = row*col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
		DisplayBoard(mine, row, col);
	}
}