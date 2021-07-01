#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"



void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL");
}


void SListPushBack(SLTNode** pphead, SLTDataType x)//pphead �� plist��ָ�� ʹ�õ��Ƕ���ָ��
{
	SLTNode* newnode = malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	if (*pphead == NULL)//*pplist ָ�� plist
	{
		*pphead = newnode;
	}
	else
	{

		SLTNode* tail = *pphead;
		while (tail->next != NULL)//�ҵ�β�ڵ��ָ��
		{
			tail = tail->next;
		}

		//β�ڵ㣬�����½ڵ�
		tail->next = newnode;
	}
}