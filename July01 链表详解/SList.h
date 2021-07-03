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

void SListPrint(SLTNode* phead);
void SListPushBack(SLTNode** pphead, SLTDataType x);
void SListPushFront(SLTNode* phead, SLTDataType x);

