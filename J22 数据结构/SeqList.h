#pragma once
//#ifndef __SEQLIST__H__
//#define __SEQLIST__H__
//防止被重复的包含

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>


//#define MAX_SIZE 10
////定义宏
//typedef int SQDataType;
////如果是其他类型，直接把int 改了就行
////静态顺序表
////问题：给少了不够用，给多了用不完浪费，不能灵活控制
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
////等价上面
//
//
////增删查改等接口函数
//void SeqListInit(SL* ps);
//
//
////头插 尾插 头删  尾删
//void SeqListPushBack(SL* ps, SQDataType x);
//void SeqListPushFronk(SL* ps, SQDataType x);
//void SeqListPopBack(SL* ps);
//void SeqListPopFront(SL* ps);
//
///////////////////////////////////////////////////////////////////////////////////




//定义宏
typedef int SQDataType;
//动态的

typedef struct SeqList
{
	SQDataType* a;
	int size;      //有效数据的个数
	int capacity;  //容量
}SL;

//typedef struct SeqList SL:
//等价上面


//增删查改等接口函数
void SeqListInit(SL* ps);
void SeqListPrint(SL* ps);
void SeqListDestory(SL* ps);


//头插 尾插 头删  尾删
void SeqListPushBack(SL* ps, SQDataType x);
void SeqListPushFronk(SL* ps, SQDataType x);
void SeqListPopBack(SL* ps);
void SeqListPopFront(SL* ps);
void SeqListInsert(SL* ps, int pos, SQDataType x);
void SeqListErase(SL* ps, int pos);


void SeqListFind(SL* ps, SQDataType x);//查找

void SeqListModity(SL* ps, int pos, SQDataType x);



//#endif




