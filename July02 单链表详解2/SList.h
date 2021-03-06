#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


typedef int SLTDataType;
struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
};


typedef struct SListNode SLTNode;



//不会改变链表的头指针，传一级指针
void SListPrint(SLTNode* phead);

//可能会改变链表的头指针，传二级指针
void SListPushBack(SLTNode** pphead, SLTDataType x);
void SListPushFront(SLTNode** phead, SLTDataType x);
void SListPopBack(SLTNode** phead);
void SListPopFront(SLTNode** phead);



//下面这种在C C++更规范
SLTNode* SListFind(SLTNode* phead, SLTDataType x);
//在pos的前面插入X
void SListInsert(SLTNode** phead, SLTNode* pos, SLTDataType x);//某个位置插入
//删除pos位置的值
void SListErase(SLTNode** phead,SLTNode* pos);//某个位置删除


////有些地方也有这样的
////在pos的前面插入X
//void SListInsert(SLTNode** phead,int i, SLTDataType x);
////删除pos位置的值
//void SListErase(SLTNode** phead,int i);//某个位置删除

