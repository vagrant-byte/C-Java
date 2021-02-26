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
	struct contact con;//创建通讯录  包含1000的元素和size
	Initcontact(&con);//初始化通讯录
	do
	{
		menu();
		printf("请选择：\n");
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
			printf("退出程序\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	}while (imput);
}