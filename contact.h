#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#define max 1000
#define max_name 20
#define max_sex 5
#define max_tele 12
#define max_addr 30

enum option
{
	exit,
	add,
	del,
	search,
	modify,
	show,
	sort
};
struct peoinof
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
};
struct contact
{
	struct peoinof data[max];
	int size;
};
void Initcontact(struct contact* ps);//初始化通讯录
void addcontact(struct contact* ps);//添加信息到通讯录
void showcontact(const struct contact* ps);//展示通讯录
void delcontact(struct contact* ps);//删除通讯录中指定信息
void searchcontact(const struct contact* ps);//查找通讯录
void modifycontact(struct contact* ps);//修改通讯录中联系人