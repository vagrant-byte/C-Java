#define _CRT_SECURE_NO_WARNINGS 1 
#include    "contact.h"
void menu()
{
	printf("**********************************\n");
	printf("******1.add         2.del    *****\n");
	printf("******3.search      4.modify *****\n");
	printf("******5.show        6.sort   *****\n");
	printf("******0.exit                 *****\n");
	printf("**********************************\n");
}

int main()
{
	int imput = 0;
	struct contact con;//����ͨѶ¼  ����1000��Ԫ�غ�size
	Initcontact(&con);//��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &imput);
		switch (imput)
		{
		case add:
			    addcontact(&con);
				break;
		case del:
			delcontact(&con);
			break;
		case search:
			searchcontact(&con);
			break;
		case modify:
			modifycontact(&con);
			break;
		case show:
			showcontact(&con);
			break;
		case sort:
			break;
		case exit:
			printf("�˳�����\n");
			break;
		default:
			printf("�����������������\n");
		}
	}while (imput);
}