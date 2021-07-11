#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"





void StackInit(ST* ps)
{
	assert(ps);//���ԣ�����OJ���оͲ�Ҫ������

	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);//��������
	}

	ps->capacity = 4;
	ps->top = 0;//��ʼtop ��0����ζ�ţ�topָ�����ջ��Ԫ�ص���һ���������-1������ָ��ջ��Ԫ�ء�

}

void StackDestory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}


//ջ������ɾ������
void StackPush(ST* ps, STDataType x)//��ջ
{
	assert(ps);

	//���˾�����
	if (ps->top == ps->capacity)
	{
		//��ԭ�����ݵĻ���������2��
		STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);//��������
		}
		else
		{
			ps->a = tmp;
			ps->capacity *= 2;
		}
	}
	ps->a[ps->top] = x;
	ps->top++;

}


void StackPop(ST* ps)//��ջ
{
	assert(ps);
	assert(ps->top > 0);// ջ���ˣ�����Pop,ֱ����ֹ���򱨴�

	ps->top--;
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);// ջ���ˣ�����Top,ֱ����ֹ���򱨴�

	return ps->a[ps->top - 1];
}


int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;


}


bool StackEmpty(ST* ps)//bool �������
{
	assert(ps);

	return ps->top == 0;
}