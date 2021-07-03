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

//����һ���ռ�
SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode =  (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}



void SListPushBack(SLTNode** pphead, SLTDataType x)//pphead �� plist��ָ�� ʹ�õ��Ƕ���ָ��
{
	//SLTNode* newnode = malloc(sizeof(SLTNode));
	//newnode->data = x;
	//newnode->next = NULL;

	SLTNode* newnode = BuySListNode(x);


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
	//1.�������Ϊ��
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
	SLTNode* next = (*pphead)->next;//����һ��ָ���ַ��������

	free(*pphead);

	*pphead = next;//�ٰѵ�һ��ָ���ַ��pphead
	 

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


//��pos��ǰ�����x
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)//ĳ��λ�ò���
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
//ɾ��posλ�õ�ֵ
void SListErase(SLTNode** pphead, SLTNode* pos)//ĳ��λ��ɾ��
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