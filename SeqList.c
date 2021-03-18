#define _CRT_SECURE_NO_WARNINGS 1 
#include"SeqList.h"
void SeqListInit(SL* ps)//˳����ʼ��
{
	ps->a = (SLDataType*)malloc(sizeof(SLDataType)* 4);
	if (ps->a == NULL)
	{
		printf("����ʧ��");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}
void SeqListPrint(SL* ps)//˳����ӡ
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}
void CheckCapacity(SL* ps)//����
{
	if (ps->size == ps->capacity)
	{
		ps->capacity *= 2;
		SL*ptr = (SLDataType*)realloc(ps->a, ps->capacity * sizeof(SLDataType));
		if (ptr == NULL)
		{
			printf("����ʧ��");
			exit(-1);
		}
		else
		{
			ps->a = ptr;
		}
	}
}

void SeqListPushBack(SL* ps, SLDataType* x)//˳���β��
{
	assert(ps);
	if (ps->size <= ps->capacity)
	{
		CheckCapacity(ps);
	}
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPopBack(SL* ps)//˳���βɾ
{
	assert(ps);
	ps->a[ps->size - 1] = 0;
	ps->size--;
}
void SeqListPushFront(SL* ps, SLDataType* x)//˳���ͷ��
{
	assert(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end] = ps->a[end + 1];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SL* ps)//˳���ͷɾ
{
	assert(ps);
	int start = 0;
	while (start < ps->size - 1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}