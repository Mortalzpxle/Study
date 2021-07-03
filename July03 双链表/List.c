#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"



ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;

}

ListNode* ListInit()//初始化
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;//两个节点都指向自己
	return phead;
}



void ListDestory(ListNode* phead)
{}


void ListPrint(ListNode* phead)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}


void ListPushBack(ListNode* phead, LTDataType x)//尾插
{
	ListNode* tail = phead->prev;
	ListNode* newnode = BuyListNode(x);//创建一个新节点

	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;

}