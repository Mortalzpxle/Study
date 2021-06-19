#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"



//增删查改等接口函数
void SeqListInit(struct SeqList s)
{
	//初始化
	memset(s.a, 0, sizeof(SQDataType) * MAX_SIZE);
	s.size = 0;
	
}

