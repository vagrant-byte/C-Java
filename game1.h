#define Row  3
#define Col  3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��ʼ������
void Initboard(char board[Row][Col], int row, int col);
//��ӡ����
void DisplayBoard(char board[Row][Col], int row, int col);
//�������
void PlayerMove(char board[Row][Col], int row, int col);
//��������
void ComputerMove(char board[Row][Col], int row, int col);

char Checkwin(char board[Row][Col], int row, int col);//�ж���Ӯ


//����Ӯ #
//���Ӯ *
//ƽ��  Q
//����  C