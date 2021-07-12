#define _CRT_SECURE_NO_WARNINGS 1

#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>




typedef int STDataType;


//���Ǿ�̬����ȱ��
//#define MAX 100
//struct Stack
//{
//	STDataType a[MAX];
//	int top;//ջ��
//
//};


typedef struct Stack
{
	STDataType* a;//���Ƕ�̬��ջ ���õ����������ʽ
	int top;//ջ��
	int capacity;
}ST;


void StackInit(ST* ps);//��ʼ��
void StackDestory(ST* ps);


//ջ������ɾ������

void StackPush(ST* ps, STDataType x);//��ջ
void StackPop(ST* ps);//��ջ
STDataType StackTop(ST* ps);


int StackSize(ST* ps);
bool StackEmpty(ST* ps);//bool �������



