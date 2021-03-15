#define _CRT_SECURE_NO_WARNINGS 1 
#include "contact1.h"
void Check_capacity(contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->data, sizeof(struct PenInfo)*(pc->capacity + 2));
		if (ptr == NULL)
		{
			printf("增容失败\n");
			return 1;
		}
		else
		{
			printf("增容成功\n");
			pc->data = ptr;
			pc->capacity += 2;
		}
	}
}
void Loadcontact(struct contact* pc)
{
	//打开文件
	FILE* pfIn = fopen("contact.dat", "rb");
	if (pfIn == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	//读文件内容
	struct PenInfo tmp = { 0 };
	while (fread(&tmp, sizeof(struct PenInfo), 1, pfIn))
	{
		//检测是否增容
		Check_capacity(pc);
		//存储元素
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
	//关闭文件
	fclose(pfIn);
	pfIn = NULL;
}
//初始化
void Initcontact(struct contact* pc)
{
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	pc->data = (PenInfo*)malloc(DEFAULT_SZ*sizeof(struct PenInfo));
	if (pc->data == NULL)
	{
		printf("初始化失败\n");
		exit(1);
	}
	//加载文件
	Loadcontact(pc);
}
//增加
void Addcontact(struct contact* pc)
{
	Check_capacity(pc);
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("添加成功\n");
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
void Delcontact(struct contact* pc)//删除通讯录
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("请输入要删除联系人姓名：");
		scanf("%s", &name);
		int pos = FindByName(pc, name);
		if (pos == -1)
		{
			printf("要删除人不存在\n");
		}
		else
		{
			for (int j = pos; j < pc->sz - 1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("删除成功\n");
		}
	}
}
void Searchcontact(const struct contact* pc)//查找通讯录
{
	char name[MAX_NAME];
	printf("请输入要查找的人姓名：\n");
	scanf("%s", &name);
	int pos = FindByName(pc, name);
	if (-1 == pos)
		printf("找不到此人信息\n");
	else
	{
		int i = 0;
		printf("%20s\t%4s\t%5s\t%12s\t%30s\n", "名字", "年龄", "性别", "电话", "地址");
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
void Modifycontact(struct contact* pc)//修改通讯录中联系人
{
	char name[MAX_NAME];
	printf("请输入要修改的联系人姓名：\n");
	scanf("%s", &name);
	int pos = FindByName(pc, name);
	if (-1 == pos)
		printf("找不到修改人信息\n");
	else
	{
		printf("请输入姓名:");
		scanf("%s", pc->data[pos].name);
		printf("请输入年龄:");
		scanf("%d", &pc->data[pos].age);
		printf("请输入性别:");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话:");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址:");
		scanf("%s", pc->data[pos].addr);
		printf("修改成功\n");
	}
}
void Showcontact(const struct contact* pc)//展示通讯录
{
	if (pc->sz == 0)
		printf("通讯录为空\n");
	else
	{
		int i = 0;
		printf("%20s\t%4s\t%5s\t%12s\t%30s\n", "名字", "年龄", "性别", "电话", "地址");
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
void Empcontact(struct contact* pc)//清空通讯录
{
	pc->sz = 0;
	free(pc);
}

//自定义的比较函数
int CmpByName(const void* e1, const void* e2)
{
	return strcmp((const char*)e1, (const char*)e2);
}

//通过名字排序通讯录中联系人的先后顺序
void Sortcontact(struct contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(struct PeoInfo*), CmpByName);//排序
}
void Destorcontact(struct contact* pc)
{
	free(pc->data);
	pc->data = NULL;
}
//保存
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