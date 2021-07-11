#define _CRT_SECURE_NO_WARNINGS 1

#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>

typedef int QDataType;


typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;


typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;

void QueueInit(Queue* pq);
void QueueDestory(Queue* pq);

//队尾入
void QueuePush(Queue* pq,QDataType x);

//队头出
void QueuePop(Queue* pq);


QDataType QueueFront(Queue* pq);//取队头数据
QDataType QueueBack(Queue* pq);//取队尾数据

int QueuSize(Queue* pq);//取数据的个数
bool QueuEmpty(Queue* pq);//对数据判断是否为空