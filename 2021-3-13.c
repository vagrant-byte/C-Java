#define _CRT_SECURE_NO_WARNINGS 1 
#include "contact.h"
void menu()
{
	printf("***********************************\n");
	printf("******  1.add  ****  2.Del  ******\n");
	printf("******  3.search  *  4.modify  ***\n");
	printf("******  5.show  ***  6.sort  *****\n");
	printf("******  7.emp   ***  0.exit  *****\n");
}
int main()
{
	int imput = 0;
	struct contact con;
	Initcontact(&con);//��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &imput);
		switch (imput)
		{
		case Add:
			Addcontact(&con);
			break;
		case Del:
			Delcontact(&con);
			break;
		case Search:
			Searchcontact(&con);
			break;
			break;
		case Modify:
			Modifycontact(&con);
			break;
		case Show:
			Showcontact(&con);
			break;
		case Sort:
			Sortcontact(&con);
			break;
		case Exit:
			Destorcontact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		defaule:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (imput);
	return 0;
}

