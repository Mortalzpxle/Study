#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>


//������ȡ��SList
//˫����ȡ��DList
typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;//��һ���ڵ�
	struct ListNode* prev;//��һ���ڵ�
	int data;
}ListNode;

ListNode* ListInit();  //��ʼ��
void ListDestory(ListNode* phead);
void ListPushBack(ListNode* phead, LTDataType x);

void ListPrint(ListNode* phead);