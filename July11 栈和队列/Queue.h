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

//��β��
void QueuePush(Queue* pq,QDataType x);

//��ͷ��
void QueuePop(Queue* pq);


QDataType QueueFront(Queue* pq);//ȡ��ͷ����
QDataType QueueBack(Queue* pq);//ȡ��β����

int QueuSize(Queue* pq);//ȡ���ݵĸ���
bool QueuEmpty(Queue* pq);//�������ж��Ƿ�Ϊ��