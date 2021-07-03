#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>


//单链表取名SList
//双链表取名DList
typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;//下一个节点
	struct ListNode* prev;//上一个节点
	int data;
}ListNode;

ListNode* ListInit();  //初始化
void ListDestory(ListNode* phead);
void ListPushBack(ListNode* phead, LTDataType x);

void ListPrint(ListNode* phead);