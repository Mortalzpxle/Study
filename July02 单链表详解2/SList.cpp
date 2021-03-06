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
	printf("\n");
}

//增加一个空间
SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode =  (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}



void SListPushBack(SLTNode** pphead, SLTDataType x)//pphead 是 plist的指针 使用的是二级指针
{
	//SLTNode* newnode = malloc(sizeof(SLTNode));
	//newnode->data = x;
	//newnode->next = NULL;

	SLTNode* newnode = BuySListNode(x);


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


void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	//SLTNode* newnode = malloc(sizeof(SLTNode));
	//newnode->data = x;
	//newnode->next = NULL;

	SLTNode* newnode = BuySListNode(x);

	newnode->next = *pphead;
	*pphead = newnode;

}



void SListPopBack(SLTNode** pphead)
{
	//1.如果链表为空
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;

		}

		free(tail);
		prev->next = NULL;
	}
}


void SListPopFront(SLTNode** pphead)
{
	SLTNode* next = (*pphead)->next;//将第一个指针地址保存起来

	free(*pphead);

	*pphead = next;//再把第一个指针地址给pphead
	 

}



SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	SListNode* cur = phead;
	/*while(cur !=NULL)*/
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur =cur->next;
	}
	return NULL;
}


//在pos的前面插入x
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)//某个位置插入
{
	if (pos == *pphead)
	{
		SListPushFront(pphead, x);
	}
	else
	{
		SLTNode* newnode = BuySListNode(x);

		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}

}
//删除pos位置的值
void SListErase(SLTNode** pphead, SLTNode* pos)//某个位置删除
{
	if (pos == *pphead)
	{
		SListPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		prev->next = pos->next;
		free(pos);
	}

}