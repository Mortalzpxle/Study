#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>//断言
#include<stdbool.h>


//单链表取名SList
//双链表取名DList

//带头双向循环列表 -- 最优的链表结构，任意位置插入删除数据都是O(1)

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

bool ListEmpty(ListNode* phead);
int ListSize(ListNode* phead);
