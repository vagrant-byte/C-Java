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
	int ret = rand() % 100 + 1;//����һ��1-100��������
	int i = 0;
	while (1)
	{
		printf("�������\n");
		scanf("%d", &i);
		if (i >ret)
		{
			printf("�´���\n");
		}
		else if (i <ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
		printf("���������֣�0/1����");
		scanf("%d", &input);
		switch (input)
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
	int ret = rand() % 100 + 1;//����һ��1-100��������
	int i = 0;
	while (1)
	{
		printf("�������\n");
		scanf("%d", &i);
		if (i >ret)
		{
			printf("�´���\n");
		}
		else if (i <ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
		printf("���������֣�0/1����");
		scanf("%d", &input);
		switch (input)
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
	} while (input);
	return 0;
}
>>>>>>> eef6d59599fe62faf34583906fb120c75478c9db
