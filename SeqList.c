#define _CRT_SECURE_NO_WARNINGS 1 
#include"SeqList.h"
void SeqListInit(SL* ps)//À≥–Ú±Ì≥ı ºªØ
{
	ps->a = (SLDataType*)malloc(sizeof(SLDataType)* 4);
	if (ps->a == NULL)
	{
		printf("…Í«Î ß∞‹");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}
void SeqListPrint(SL* ps)//À≥–Ú±Ì¥Ú”°
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}
void CheckCapacity(SL* ps)//¿©»›
{
	if (ps->size == ps->capacity)
	{
		ps->capacity *= 2;
		SL*ptr = (SLDataType*)realloc(ps->a, ps->capacity * sizeof(SLDataType));
		if (ptr == NULL)
		{
			printf("¿©»› ß∞‹");
			exit(-1);
		}
		else
		{
			ps->a = ptr;
		}
	}
}

void SeqListPushBack(SL* ps, SLDataType* x)//À≥–Ú±ÌŒ≤≤Â
{
	assert(ps);
	if (ps->size <= ps->capacity)
	{
		CheckCapacity(ps);
	}
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPopBack(SL* ps)//À≥–Ú±ÌŒ≤…æ
{
	assert(ps);
	ps->a[ps->size - 1] = 0;
	ps->size--;
}
void SeqListPushFront(SL* ps, SLDataType* x)//À≥–Ú±ÌÕ∑≤Â
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
void SeqListPopFront(SL* ps)//À≥–Ú±ÌÕ∑…æ
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