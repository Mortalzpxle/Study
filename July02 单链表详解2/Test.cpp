#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

void TestSList1()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);//尾插
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);

	SListPushFront(&plist, 5);//头插
	SListPrint(plist);

	SListPopFront(&plist);//头删
	
	SListPrint(plist);

	SListPopBack(&plist);//尾删
	SListPrint(plist);

}

void TestSList2()
{
	SLTNode* plist = NULL;

	SListPushBack(&plist, 1);//尾插
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	//想在1的前面插入一个10
	SLTNode* pos = SListFind(plist, 1);
	if (pos)
	{
		SListInsert(&plist, pos, 10);
	}
	SListPrint(plist);


	pos = SListFind(plist, 3);
	if (pos)
	{
		SListInsert(&plist, pos, 30);
	}
	SListPrint(plist);


}

void TestSList3()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);//尾插
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPrint(plist);

	SLTNode* pos = SListFind(plist, 4);
	if (pos)
	{
		SListErase(&plist, pos);
	}
	SListPrint(plist);

}


int main()
{
	//TestSList1();
	/*TestSList2();*/
	TestSList3();
	return 0;
}

