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


void SListPushBack(SLTNode** pphead, SLTDataType x)//pphead 是 plist的指针 使用的是二级指针
{
	SLTNode* newnode = malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	if (*pphead == NULL)//*pplist 指向 plist
	{
		*pphead = newnode;
	}
	else
	{

		SLTNode* tail = *pphead;
		while (tail->next != NULL)//找到尾节点的指针
		{
			tail = tail->next;
		}

		//尾节点，链接新节点
		tail->next = newnode;
	}
}