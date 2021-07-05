#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>//����
#include<stdbool.h>


//������ȡ��SList
//˫����ȡ��DList

//��ͷ˫��ѭ���б� -- ���ŵ�����ṹ������λ�ò���ɾ�����ݶ���O(1)

typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;//��һ���ڵ�
	struct ListNode* prev;//��һ���ڵ�
	int data;
}ListNode;

ListNode* ListInit();  //��ʼ��

void ListPrint(ListNode* phead);

void ListDestory(ListNode* phead);

void ListPushBack(ListNode* phead, LTDataType x);
void ListPushFront(ListNode* phead, LTDataType x);
void ListPopBack(ListNode* phead);
void ListPopFront(ListNode* phead);

ListNode* ListFind(ListNode* phead, LTDataType x);

void ListInsert(ListNode* pos, LTDataType x);//pos λ��֮ǰ����x
void ListErase(ListNode* pos);//ɾ�� posλ�õ�ֵ

bool ListEmpty(ListNode* phead);
int ListSize(ListNode* phead);
