#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"





void StackInit(ST* ps)
{
	assert(ps);//断言，但在OJ题中就不要断言了

	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);//结束程序
	}

	ps->capacity = 4;
	ps->top = 0;//初始top 给0，意味着，top指向的是栈顶元素的下一个。如果是-1，则是指向栈顶元素。

}

void StackDestory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}


//栈顶插入删除数据
void StackPush(ST* ps, STDataType x)//入栈
{
	assert(ps);

	//满了就增容
	if (ps->top == ps->capacity)
	{
		//在原来数据的基础上扩容2倍
		STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);//结束程序
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


void StackPop(ST* ps)//出栈
{
	assert(ps);
	assert(ps->top > 0);// 栈空了，调用Pop,直接终止程序报错

	ps->top--;
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);// 栈空了，调用Top,直接终止程序报错

	return ps->a[ps->top - 1];
}


int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;


}


bool StackEmpty(ST* ps)//bool 就是真假
{
	assert(ps);

	return ps->top == 0;
}