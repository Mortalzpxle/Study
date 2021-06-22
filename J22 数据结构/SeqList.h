#pragma once
//#ifndef __SEQLIST__H__
//#define __SEQLIST__H__
//��ֹ���ظ��İ���

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>


//#define MAX_SIZE 10
////�����
//typedef int SQDataType;
////������������ͣ�ֱ�Ӱ�int ���˾���
////��̬˳���
////���⣺�����˲����ã��������ò����˷ѣ�����������
//
//
// 
//typedef struct SeqList
//{
//	SQDataType a[MAX_SIZE ];
//	int size;
//}SL;
//
////typedef struct SeqList SL:
////�ȼ�����
//
//
////��ɾ��ĵȽӿں���
//void SeqListInit(SL* ps);
//
//
////ͷ�� β�� ͷɾ  βɾ
//void SeqListPushBack(SL* ps, SQDataType x);
//void SeqListPushFronk(SL* ps, SQDataType x);
//void SeqListPopBack(SL* ps);
//void SeqListPopFront(SL* ps);
//
///////////////////////////////////////////////////////////////////////////////////




//�����
typedef int SQDataType;
//��̬��

typedef struct SeqList
{
	SQDataType* a;
	int size;      //��Ч���ݵĸ���
	int capacity;  //����
}SL;

//typedef struct SeqList SL:
//�ȼ�����


//��ɾ��ĵȽӿں���
void SeqListInit(SL* ps);
void SeqListPrint(SL* ps);
void SeqListDestory(SL* ps);


//ͷ�� β�� ͷɾ  βɾ
void SeqListPushBack(SL* ps, SQDataType x);
void SeqListPushFronk(SL* ps, SQDataType x);
void SeqListPopBack(SL* ps);
void SeqListPopFront(SL* ps);
void SeqListInsert(SL* ps, int pos, SQDataType x);
void SeqListErase(SL* ps, int pos);


void SeqListFind(SL* ps, SQDataType x);//����

void SeqListModity(SL* ps, int pos, SQDataType x);



//#endif




