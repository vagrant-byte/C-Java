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
	int sz;//�������˶��ٸ�����Ϣ
	int capacity;//��ǰͨѶ¼�������
};
void Initcontact(struct contact* pc);//��ʼ��ͨѶ¼
void Addcontcat(struct contact* pc);//������ϵ����Ϣ
void Subcontact(struct contact* pc);//ɾ����ϵ����Ϣ
void Searchcontact(struct contact* pc);//������ϵ����Ϣ
void Modifycontact(struct contact* pc);//�޸���ϵ����Ϣ
void Showcontact(struct contact* pc);//չʾ��ϵ����Ϣ
void Sortcontact(struct contact* pc);//��������������
void Empcontact(struct contact* pc);
void Destorcontact(struct contact* pc);//�ͷ��ڴ�ռ�