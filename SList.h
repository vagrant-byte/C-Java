#define _CRT_SECURE_NO_WARNINGS 1 
#include<assert.h>
#include <stdio.h>
typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;
void SListPushBack(SListNode** pphead, SListDataType x);//β��
void SListPopBack(SListNode** pphead);//βɾ
void SListPushFront(SListNode** pphead, SListDataType x);//ͷ��
void SListPopFront(SListNode** pphead);//ͷɾ
void SListPrint(SListNode* phead);//��ӡ
SListNode* SListFind(SListNode* phead, SListDataType x);//����
void SListInsertAfter(SListNode* pos, SListDataType x);//��posλ��֮�����X
void SListEraseAfter(SListNode* pos);//ɾ��posλ��