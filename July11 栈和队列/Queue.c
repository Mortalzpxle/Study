#define _CRT_SECURE_NO_WARNINGS 1

#include"Queue.h"
#include<assert.h>


void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;//这里是改变结构体传来的，也就是pq指向的内容，
	                           //没有改变pq,所以不用二级指针
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


//队尾入
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


//队头出
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);


	//1,只剩一个节点就直接free 掉就不会出现野指针tail 的情况
	//2,多个节点的时候，就进行一般操作else
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


QDataType QueueFront(Queue* pq)//取队头数据
{
	assert(pq);
	assert(pq->head);

	return pq->head->data;
}


QDataType QueueBack(Queue* pq)//取队尾数据
{
	assert(pq);
	assert(pq->head);

	return pq->tail->data;
}

int QueuSize(Queue* pq)//取数据的个数
{
	assert(pq);
	int size = 0;
	QNode* cur = pq->head;
	while (cur)//意思是不等于空
	{
		++size;
		cur = cur->next;
	}

	return size;
}
bool QueuEmpty(Queue* pq)//对数据判断是否为空
{
	assert(pq);
	return pq->head == NULL;
}