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
	Initcontact(&con);//初始化通讯录
	do
	{
		menu();
		printf("请选择：");
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
			printf("退出通讯录\n");
			break;
		defaule:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (imput);
	return 0;
}

