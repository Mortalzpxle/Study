#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"



////增删查改等接口函数
//void SeqListInit(SL* ps)
//{
//	//初始化
//	memset(ps->a, 0, sizeof(SQDataType) * MAX_SIZE);
//	ps->size = 0;
//	
//} 
//
//
//
//
//
////头插 尾插 头删  尾删
//void SeqListPushBack(SL* ps, SQDataType x)
//{
//	if (ps->size >= MAX_SIZE)
//	{
//		printf("SeqList is Full\n");
//		return;
//	}
//	ps->a[ps->size] = x;
//	ps->size++;
//
//}
//
//
//void SeqListPushFronk(SL* ps, SQDataType x);
//void SeqListPopBack(SL* ps);
//void SeqListPopFront(SL* ps);

 ////////////////////////////////////////////////////////////////////////////
 

 
 
 
 //增删查改等接口函数
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;

}

void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

//扩容代码
void SeqListCheckCapacity(SL* ps)
{
	//满了就要扩容，一般是扩2倍
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SQDataType* tmp = (SQDataType*)realloc(ps->a, newcapacity * sizeof(SQDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
		}
	}
}

//头插 尾插 头删  尾删
void SeqListPushBack(SL* ps, SQDataType x)
{
	SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}


void SeqListPushFronk(SL* ps, SQDataType x)
{

	SeqListCheckCapacity(ps);

	//1.初始条件
	//2.结束条件
	//3.迭代过程
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}



void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);//断言 看是否到是最前面的数字

	//ps->a[ps->size - 1] = 0;
	ps->size--;
}



void SeqListPopFront(SL* ps)
{
	assert(ps->size > 0);//断言


	int start = 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		++start;
	}
	ps->size--;
}



void SeqListInsert(SL* ps, int pos, SQDataType x)
{
	assert(pos < ps->size);//断言
	SeqListCheckCapacity(ps);

	int end = ps->size - 1;
	while (end >= pos)
	{
		ps ->a[end + 1] = ps->a[end];
		--end;
	}
	
	ps->a[pos] = x;
	ps->size++;

}

void SeqListErase(SL* ps, int pos)
{
	assert(pos < ps->size);//断言

	int start = pos + 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		++start;
	}
	ps->size--;
}




void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
