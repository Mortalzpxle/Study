#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>//断言


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

void ListPrint(ListNode* phead);

void ListDestory(ListNode* phead);

void ListPushBack(ListNode* phead, LTDataType x);
void ListPushFront(ListNode* phead, LTDataType x);
void ListPopBack(ListNode* phead);
void ListPopFront(ListNode* phead);

ListNode* ListFind(ListNode* phead, LTDataType x);

void ListInsert(ListNode* pos, LTDataType x);//pos 位置之前插入x
void ListErase(ListNode* pos);//删除 pos位置的值
