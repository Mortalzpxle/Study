#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"



//��ɾ��ĵȽӿں���
void SeqListInit(struct SeqList s)
{
	//��ʼ��
	memset(s.a, 0, sizeof(SQDataType) * MAX_SIZE);
	s.size = 0;
	
}

