#define _CRT_SECURE_NO_WARNINGS 1 
#include<assert.h>
#include <stdio.h>
typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;
void SListPushBack(SListNode** pphead, SListDataType x);//尾插
void SListPopBack(SListNode** pphead);//尾删
void SListPushFront(SListNode** pphead, SListDataType x);//头插
void SListPopFront(SListNode** pphead);//头删
void SListPrint(SListNode* phead);//打印
SListNode* SListFind(SListNode* phead, SListDataType x);//查找
void SListInsertAfter(SListNode* pos, SListDataType x);//在pos位置之后插入X
void SListEraseAfter(SListNode* pos);//删除pos位置