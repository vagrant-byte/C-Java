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
void Initcontact(struct contact* ps);//��ʼ��ͨѶ¼
void addcontact(struct contact* ps);//�����Ϣ��ͨѶ¼
void showcontact(const struct contact* ps);//չʾͨѶ¼
void delcontact(struct contact* ps);//ɾ��ͨѶ¼��ָ����Ϣ
void searchcontact(const struct contact* ps);//����ͨѶ¼
void modifycontact(struct contact* ps);//�޸�ͨѶ¼����ϵ��