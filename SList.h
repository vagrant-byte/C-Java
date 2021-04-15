#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;
void SListPushBack(SListNode** pphead, SListDataType x);//Œ≤≤Â
void SListPopBack(SListNode** pphead);//Œ≤…æ
void SListPushFront(SListNode** pphead, SListDataType x);//Õ∑≤Â
void SListPopFront(SListNode** pphead);//Õ∑…æ
void SListPrint(SListNode* phead);//¥Ú”°