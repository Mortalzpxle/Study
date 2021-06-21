#pragma once

#include"SeqList.h"



void TestSeqList1()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPushBack(&sl, 6);
	SeqListPushBack(&sl, 7);


	SeqListPrint(&sl);

	SeqListDestory(&sl);
}
void TestSeqList2()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushFronk(&sl, 1);
	SeqListPushFronk(&sl, 2);
	SeqListPushFronk(&sl, 3);
	SeqListPushFronk(&sl, 4);
	SeqListPushFronk(&sl, 5);
	SeqListPushFronk(&sl, 6);
	SeqListPushFronk(&sl, 7);
	SeqListPrint(&sl);

	SeqListPopBack(&sl);
	SeqListPrint(&sl);

	SeqListPopFront(&sl);
	SeqListPrint(&sl);

	SeqListDestory(&sl);
}

void TestSeqList3()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushFronk(&sl, 1);
	SeqListPushFronk(&sl, 2);
	SeqListPushFronk(&sl, 3);
	SeqListPushFronk(&sl, 4);
	SeqListPushFronk(&sl, 5);
	SeqListPushFronk(&sl, 6);
	SeqListPushFronk(&sl, 7);
	SeqListPrint(&sl);

	SeqListInsert(&sl, 3, 20);
	SeqListPrint(&sl);

	SeqListErase(&sl, 3);
	SeqListPrint(&sl);

	SeqListDestory(&sl);

	SeqListModity(&sl, 1);

}


int main()
{
	//TestSeqList1();
	//TestSeqList2();
	TestSeqList3();

	
	return 0;
}



