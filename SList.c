#define _CRT_SECURE_Nvoid 
#include "SList.h"

void SListPrint(SListNode* phead)//��ӡ
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
SListNode* BuySListNode(SListDataType x)//���ٽڵ�
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));//�����ڴ棬���Ҫ�����Ԫ��
	if (newNode == NULL)//�жϽڵ��Ƿ񿪱ٳɹ�
	{
		printf("���ٽ��ʧ��\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;//ʹ��ǰ��βָ���²������ֵĵ�ַ
}
void SListPushBack(SListNode** pphead, SListDataType x)//β��
{
	SListNode* newNode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		SListNode* tail = *pphead;//��β
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
}
void SListPopBack(SListNode** pphead)//βɾ
{
	if (*pphead == NULL)//����Ϊ��
	{
		return;
	}
	else if ((*pphead)->next == NULL)//ֻ��һ���ڵ�
	{
		free(*pphead);
	}
	else
	{
		SListNode* tail = *pphead;
		SListNode* prev = NULL;//�ҵ�β��ǰһ����ַ
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
void SListPushFront(SListNode** pphead, SListDataType x)//ͷ��
{
	SListNode* newNode = BuySListNode(x);
	newNode->next = *pphead;
	*pphead = newNode;
}
void SListPopFront(SListNode** pphead)//ͷɾ
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


