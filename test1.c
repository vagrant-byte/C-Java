#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<assert.h>
typedef struct SListNode
{
	int  data;
	struct SListNode* next;
}SListNode;
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
SListNode* BuySListNode(int x)//���ٽڵ�
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
void SListPushFront(SListNode** pphead, int x)//ͷ��
{
	SListNode* newNode = BuySListNode(x);
	newNode->next = *pphead;
	*pphead = newNode;
}
int SListCount(SListNode*phead, int date)
{
	assert(phead);
	int count = 0;
	while (phead!= NULL)
	{
		if (phead->data == date)
		{
			count++;
		}
		phead = phead->next;
	}
	return count;
}
SListNode SListProgress(SListNode**pphead)
{
	assert(*pphead);
	SListNode* newhead = NULL;
	SListNode* 
}
int main()
{
	SListNode* pList = NULL;
	SListPushFront(&pList, 1);
	SListPushFront(&pList, 2);
	SListPushFront(&pList, 4);
	SListPushFront(&pList, 5);
	SListPushFront(&pList, 7);
	SListPushFront(&pList, 6);
	SListPrint(pList);
	int ret=SListCount(pList, 3);
	printf("%d",ret);

}