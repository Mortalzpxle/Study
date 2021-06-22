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

	//SeqListModity(&sl, 1);

}

void menu()
{
	printf("************************************\n");
	printf("1.β������                2.ͷ������\n");
	printf("3.βɾ����                4.ͷɾ����\n");
	printf("5.��ӡ����               -1.��    ��\n");
	printf("************************************\n");
	printf("��������Ĳ���ѡ�                \n");
}
int main()
{
	//TestSeqList1();
	//TestSeqList2();
	//TestSeqList3();
	SL s;
	SeqListInit(&s);
	int option = 0;
	int x = 0;
	while (option != -1)
	{
		menu();
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("��������Ҫ��������ݣ���-1����\n");
			do
			{
				scanf("%d", &x);
				if (x != -1)
				{
					SeqListPushBack(&s, x);
				}
			} while (x != -1);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			SeqListPrint(&s);
			break;
		dafault:
			break;
		}
	}
	SeqListDestory(&s);

	
	return 0;
}



