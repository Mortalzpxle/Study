#define _CRT_SECURE_NO_WARNINGS 1

#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>




typedef int STDataType;


//这是静态，有缺陷
//#define MAX 100
//struct Stack
//{
//	STDataType a[MAX];
//	int top;//栈顶
//
//};


typedef struct Stack
{
	STDataType* a;//这是动态的栈 采用的是数组的形式
	int top;//栈顶
	int capacity;
}ST;


void StackInit(ST* ps);//初始化
void StackDestory(ST* ps);


//栈顶插入删除数据

void StackPush(ST* ps, STDataType x);//入栈
void StackPop(ST* ps);//出栈
STDataType StackTop(ST* ps);


int StackSize(ST* ps);
bool StackEmpty(ST* ps);//bool 就是真假



