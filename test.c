#define _CRT_SECURE_NO_WARNINGS 1 
#include "SList.h"
int main()
{
	SListNode* pList = NULL;
	/*SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);
	SListPushBack(&pList, 5);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);*/
	SListPushFront(&pList, 1);
	SListPushFront(&pList, 2);
	SListPushFront(&pList, 3);
	SListPushFront(&pList, 4);
	SListPushFront(&pList, 5);
	/*SListPopFront(&pList);*/
	/*SListNode*pos = SListFind(pList, 3);
	if (pos)
	{
		pos->data = 30;
	}*/
	SListPrint(pList);
	return 0;
}