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
	printf("��Ϸ��ʼ��\n");//1 ��ʾ�� 0 ��ʾ����
	//�����
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//��ʼ������
	InitBoard(mine, ROWS, COLS,'0');//��ʼ����������ȫΪ0
	InitBoard(show, ROWS, COLS,'*');//��ʼ���������Ϣ����ȫΪ*
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL, EASY_COUNT);
	//DisplayBoard(mine, ROW, COL);
	//�Ų���
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
		printf("��ѡ�����֣�0/1��\n");
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
			printf("����������������룡\n");
			break;
		}
	} while (imput);
	return 0;
}