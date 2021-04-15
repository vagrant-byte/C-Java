#define _CRT_SECURE_Nvoid 
#include "SList.h"

void SListPrint(SListNode* phead)//打印
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
SListNode* BuySListNode(SListDataType x)//开辟节点
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));//开辟内存，存放要插入的元素
	if (newNode == NULL)//判断节点是否开辟成功
	{
		printf("开辟结点失败\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;//使以前的尾指向新插入数字的地址
}
void SListPushBack(SListNode** pphead, SListDataType x)//尾插
{
	SListNode* newNode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		SListNode* tail = *pphead;//找尾
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
}
void SListPopBack(SListNode** pphead)//尾删
{
	if (*pphead == NULL)//链表为空
	{
		return;
	}
	else if ((*pphead)->next == NULL)//只有一个节点
	{
		free(*pphead);
	}
	else
	{
		SListNode* tail = *pphead;
		SListNode* prev = NULL;//找到尾的前一个地址
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}
void SListPushFront(SListNode** pphead, SListDataType x)//头插
{
	SListNode* newNode = BuySListNode(x);
	newNode->next = *pphead;
	*pphead = newNode;
}
void SListPopFront(SListNode** pphead)//头删
{
	if (*pphead == NULL)
	{
		return;
	}
	else
	{
		SListNode* next = (*pphead)->next;
		free(*pphead);
		*pphead = next;
	}
}


