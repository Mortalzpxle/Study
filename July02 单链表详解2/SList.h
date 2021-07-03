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



//����ı������ͷָ�룬��һ��ָ��
void SListPrint(SLTNode* phead);

//���ܻ�ı������ͷָ�룬������ָ��
void SListPushBack(SLTNode** pphead, SLTDataType x);
void SListPushFront(SLTNode** phead, SLTDataType x);
void SListPopBack(SLTNode** phead);
void SListPopFront(SLTNode** phead);



//����������C C++���淶
SLTNode* SListFind(SLTNode* phead, SLTDataType x);
//��pos��ǰ�����X
void SListInsert(SLTNode** phead, SLTNode* pos, SLTDataType x);//ĳ��λ�ò���
//ɾ��posλ�õ�ֵ
void SListErase(SLTNode** phead,SLTNode* pos);//ĳ��λ��ɾ��


////��Щ�ط�Ҳ��������
////��pos��ǰ�����X
//void SListInsert(SLTNode** phead,int i, SLTDataType x);
////ɾ��posλ�õ�ֵ
//void SListErase(SLTNode** phead,int i);//ĳ��λ��ɾ��

