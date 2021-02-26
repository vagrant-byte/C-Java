#define _CRT_SECURE_NO_WARNINGS 1 
#include "contact.h"
void Initcontact(struct contact* ps)//��ʼ��ͨѶ¼
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
void addcontact(struct contact* ps)//�����Ϣ��ͨѶ¼
{
	if (ps->size == max)
		printf("ͨѶ¼����\n");
	else
	{
		printf("����������:");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:");
		scanf("%d", &ps->data[ps->size].age);
		printf("�������Ա�:");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}
void showcontact(const struct contact* ps)//չʾͨѶ¼
{
	if (ps->size == 0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		int i = 0;
		printf("%20s\t%4s\t%5s\t%12s\t%30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
int findbyname(const struct contact* ps,char name[max_name])//���Һ����ҵ����ص�ַ�Ҳ�������-1
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
			return i;
	}
	return -1;
}
void delcontact(struct contact* ps)//ɾ��ͨ��¼��Ϣ
{
	char name[max_name];
	printf("������Ҫɾ����������\n");
	scanf("%s", &name);
	int pos = findbyname(ps, name);
	if (-1== pos)
		printf("�Ҳ���Ҫɾ������Ϣ\n");
	else
	{
		int j = 0;
		for (j = 1; j < ps->size - 1; j++)
		{
			ps->data[j]= ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
void searchcontact(const struct contact* ps)//����ͨѶ¼
{
	char name[max_name];
	printf("������Ҫ���ҵ���������\n");
	scanf("%s", &name);
	int pos = findbyname( ps, name);
	if (-1 == pos)
		printf("�Ҳ���������Ϣ\n");
	else
	{
		int i = 0;
		printf("%20s\t%4s\t%5s\t%12s\t%30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
void modifycontact(struct contact* ps)//�޸�ͨѶ¼����ϵ��
{
	char name[max_name];
	printf("������Ҫ�޸ĵ���ϵ��������\n");
	scanf("%s", &name);
	int pos = findbyname(ps, name);
	if (-1 == pos)
		printf("�Ҳ����޸�����Ϣ\n");
	else
	{
		printf("����������:");
		scanf("%s", ps->data[pos].name);
		printf("����������:");
		scanf("%d", &ps->data[pos].age);
		printf("�������Ա�:");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}