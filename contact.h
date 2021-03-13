#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
enum Option
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort,
	Emp
};
struct PenInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
struct contact
{
	struct PenInfo* data;
	int sz;//计算存放了多少个人信息
	int capacity;//当前通讯录最大容量
};
void Initcontact(struct contact* pc);//初始化通讯录
void Addcontcat(struct contact* pc);//增加联系人信息
void Subcontact(struct contact* pc);//删除联系人信息
void Searchcontact(struct contact* pc);//查找联系人信息
void Modifycontact(struct contact* pc);//修改联系人信息
void Showcontact(struct contact* pc);//展示联系人信息
void Sortcontact(struct contact* pc);//按姓名进行排序
void Empcontact(struct contact* pc);
void Destorcontact(struct contact* pc);//释放内存空间