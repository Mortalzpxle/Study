#define _CRT_SECURE_NO_WARNINGS 1

#include"Queue.h"
#include<assert.h>


void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;//�����Ǹı�ṹ�崫���ģ�Ҳ����pqָ������ݣ�
	                           //û�иı�pq,���Բ��ö���ָ��
}

void QueueDestory(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}

	pq->head = pq->tail = NULL;

}


//��β��
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newhead = (QNode*)malloc(sizeof(QNode));
	if (newhead == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	newhead->data = x;
	newhead->next = NULL;

	if (pq->tail == NULL)
	{
		pq->head = pq->tail = newhead;
	}
	else
	{
		pq->tail->next = newhead;
		pq->tail = newhead;

	}
}


//��ͷ��
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);


	//1,ֻʣһ���ڵ��ֱ��free ���Ͳ������Ұָ��tail �����
	//2,����ڵ��ʱ�򣬾ͽ���һ�����else
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}

}


QDataType QueueFront(Queue* pq)//ȡ��ͷ����
{
	assert(pq);
	assert(pq->head);

	return pq->head->data;
}


QDataType QueueBack(Queue* pq)//ȡ��β����
{
	assert(pq);
	assert(pq->head);

	return pq->tail->data;
}

int QueuSize(Queue* pq)//ȡ���ݵĸ���
{
	assert(pq);
	int size = 0;
	QNode* cur = pq->head;
	while (cur)//��˼�ǲ����ڿ�
	{
		++size;
		cur = cur->next;
	}

	return size;
}
bool QueuEmpty(Queue* pq)//�������ж��Ƿ�Ϊ��
{
	assert(pq);
	return pq->head == NULL;
}