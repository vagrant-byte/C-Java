#define _CRT_SECURE_NO_WARNINGS 1 
#include "contact.h"
void Initcontact(struct contact* ps)//初始化通讯录
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
void addcontact(struct contact* ps)//添加信息到通讯录
{
	if (ps->size == max)
		printf("通讯录已满\n");
	else
	{
		printf("请输入姓名:");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:");
		scanf("%d", &ps->data[ps->size].age);
		printf("请输入性别:");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}
void showcontact(const struct contact* ps)//展示通讯录
{
	if (ps->size == 0)
		printf("通讯录为空\n");
	else
	{
		int i = 0;
		printf("%20s\t%4s\t%5s\t%12s\t%30s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%20s\t%4d\t%5s\t%12s\t%30s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr
				);
		}
	}
}
int findbyname(const struct contact* ps,char name[max_name])//查找函数找到返回地址找不到返回-1
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
			return i;
	}
	return -1;
}
void delcontact(struct contact* ps)//删除通信录信息
{
	char name[max_name];
	printf("请输入要删除的姓名：\n");
	scanf("%s", &name);
	int pos = findbyname(ps, name);
	if (-1== pos)
		printf("找不到要删除人信息\n");
	else
	{
		int j = 0;
		for (j = 1; j < ps->size - 1; j++)
		{
			ps->data[j]= ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
void searchcontact(const struct contact* ps)//查找通讯录
{
	char name[max_name];
	printf("请输入要查找的人姓名：\n");
	scanf("%s", &name);
	int pos = findbyname( ps, name);
	if (-1 == pos)
		printf("找不到此人信息\n");
	else
	{
		int i = 0;
		printf("%20s\t%4s\t%5s\t%12s\t%30s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%20s\t%4d\t%5s\t%12s\t%30s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr
				);
		}
	}
}
void modifycontact(struct contact* ps)//修改通讯录中联系人
{
	char name[max_name];
	printf("请输入要修改的联系人姓名：\n");
	scanf("%s", &name);
	int pos = findbyname(ps, name);
	if (-1 == pos)
		printf("找不到修改人信息\n");
	else
	{
		printf("请输入姓名:");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:");
		scanf("%d", &ps->data[pos].age);
		printf("请输入性别:");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功\n");
	}
}