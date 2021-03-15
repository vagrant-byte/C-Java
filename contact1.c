#define _CRT_SECURE_NO_WARNINGS 1 
#include "contact1.h"
void Check_capacity(contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->data, sizeof(struct PenInfo)*(pc->capacity + 2));
		if (ptr == NULL)
		{
			printf("����ʧ��\n");
			return 1;
		}
		else
		{
			printf("���ݳɹ�\n");
			pc->data = ptr;
			pc->capacity += 2;
		}
	}
}
void Loadcontact(struct contact* pc)
{
	//���ļ�
	FILE* pfIn = fopen("contact.dat", "rb");
	if (pfIn == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	//���ļ�����
	struct PenInfo tmp = { 0 };
	while (fread(&tmp, sizeof(struct PenInfo), 1, pfIn))
	{
		//����Ƿ�����
		Check_capacity(pc);
		//�洢Ԫ��
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
	//�ر��ļ�
	fclose(pfIn);
	pfIn = NULL;
}
//��ʼ��
void Initcontact(struct contact* pc)
{
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	pc->data = (PenInfo*)malloc(DEFAULT_SZ*sizeof(struct PenInfo));
	if (pc->data == NULL)
	{
		printf("��ʼ��ʧ��\n");
		exit(1);
	}
	//�����ļ�
	Loadcontact(pc);
}
//����
void Addcontact(struct contact* pc)
{
	Check_capacity(pc);
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("��ӳɹ�\n");
}
static int FindByName(const struct contact*pc, char name[MAX_NAME])
{
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void Delcontact(struct contact* pc)//ɾ��ͨѶ¼
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("������Ҫɾ����ϵ��������");
		scanf("%s", &name);
		int pos = FindByName(pc, name);
		if (pos == -1)
		{
			printf("Ҫɾ���˲�����\n");
		}
		else
		{
			for (int j = pos; j < pc->sz - 1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("ɾ���ɹ�\n");
		}
	}
}
void Searchcontact(const struct contact* pc)//����ͨѶ¼
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���������\n");
	scanf("%s", &name);
	int pos = FindByName(pc, name);
	if (-1 == pos)
		printf("�Ҳ���������Ϣ\n");
	else
	{
		int i = 0;
		printf("%20s\t%4s\t%5s\t%12s\t%30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < pc->sz; i++)
		{
			printf("%20s\t%4d\t%5s\t%12s\t%30s\n",
				pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tele,
				pc->data[pos].addr
				);
		}
	}
}
void Modifycontact(struct contact* pc)//�޸�ͨѶ¼����ϵ��
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ���ϵ��������\n");
	scanf("%s", &name);
	int pos = FindByName(pc, name);
	if (-1 == pos)
		printf("�Ҳ����޸�����Ϣ\n");
	else
	{
		printf("����������:");
		scanf("%s", pc->data[pos].name);
		printf("����������:");
		scanf("%d", &pc->data[pos].age);
		printf("�������Ա�:");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ:");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}
void Showcontact(const struct contact* pc)//չʾͨѶ¼
{
	if (pc->sz == 0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		int i = 0;
		printf("%20s\t%4s\t%5s\t%12s\t%30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < pc->sz; i++)
		{
			printf("%20s\t%4d\t%5s\t%12s\t%30s\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].addr
				);
		}
	}
}
void Empcontact(struct contact* pc)//���ͨѶ¼
{
	pc->sz = 0;
	free(pc);
}

//�Զ���ıȽϺ���
int CmpByName(const void* e1, const void* e2)
{
	return strcmp((const char*)e1, (const char*)e2);
}

//ͨ����������ͨѶ¼����ϵ�˵��Ⱥ�˳��
void Sortcontact(struct contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(struct PeoInfo*), CmpByName);//����
}
void Destorcontact(struct contact* pc)
{
	free(pc->data);
	pc->data = NULL;
}
//����
void Savecontact(struct contact* pc)
{
	FILE* pfOut = fopen("contact.dat", "wb");
	if (pfOut == NULL)
	{
		printf("Savecontact:%s\n", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(struct PenInfo), 1, pfOut);
	}
	fclose(pfOut);
	pfOut = NULL;
}