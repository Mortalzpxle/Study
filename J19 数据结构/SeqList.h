#pragma once
//#ifndef __SEQLIST__H__
//#define __SEQLIST__H__
//防止被重复的包含

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


#define MAX_SIZE 100
//定义宏
typedef int SQDataType;
//如果是其他类型，直接把int 改了就行


 
typedef struct SeqList
{
	SQDataType a[MAX_SIZE ];
	int size;
}SL;

//typedef struct SeqList SL:
//等价上面


//增删查改等接口函数
void SeqListInit(struct SeqList s);




//#endif











































































































































































































































int main()
{

}
