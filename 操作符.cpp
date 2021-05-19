#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<math.h>






//整型提升
int main()
{
	char a = 3;
	//00000000000000000000000000011
	//00000011 -  = a  char只能存储8个比特位，所以会被截断
	char b = 127;
	//00000000000000000000001111111
	//01111111 -  = b
	char c = a + b;
	//00000000000000000000000000011
	//00000000000000000000001111111
	//00000000000000000000010000010
	//10000010 - c
	//11111111111111111111110000010 -补码
    //11111111111111111111110000001 -反码
	//10000000000000000000001111110 -原码
	//-126
	printf("%d\n", c);
	return 0;
}


//学生
//创建一个结构体类型
struct stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	int a = 10;
	//使用struct stu这个类型创建了一个学生对象s1，并初始化
	struct stu s1 = { "张三",20,"2056651" };
	struct stu* ps=&s1;

	printf("%s\n", ps->name);//结构体指针->成员名
	//printf("%s\n", (*ps).name);

	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);

	return 0;
}



int main()
{
	int a = 0;
	int b = 0;
	if (a > 5)
		b = 3;
	else
		b = -3;

	b = (a > 5 ? 3 : -3);
	return 0;
}



int main()
{
	int a = 10;
	printf("%d\n", ++a);//前置++,先++后使用
	return 0;
}




int main()
{
	int a = 11;
	a = a | (1 << 2);
	printf("%d\n", a);//15
	a = a & (~(1 << 2));
	printf("%d\n", a);//11

	  
	//int a = 0;
	//// ~ 按（2进制）位取反
	////00000000000
	////11111111111 --补码
	////11111111110 --反码
	////10000000001 --原码
	//printf("%d\n", ~a);

	return 0;
}



int main()
{

	short s = 0;
	int a = 10;
	printf("%d\n", sizeof(s = a + 5));//2
	printf("%d\n", s);//15

	/*int a = 0;
	char b = 'w';  
	int arr[10] = { 0 };

	printf("%d\n", sizeof a);
	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof (b));
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int[10]));*/

	return 0;
}



int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);

	////统计num的补码中有几个1
	//while (num)
	//{
	//	if (num % 2 == 1)
	//		count++;
	//	num = num / 2;
	//}

	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	printf("%d\n", count);
	return 0;
}



//不创建临时变量，改变a b 的值
int main()
{
	int a = 4;
	int b = 5;
	printf("before: a=%d b=%d\n", a, b);
	////加减法- 可能会溢出，存在漏洞
	//a = a + b;
	//b = a - b;
	//a = a - b;

	//使用抑或法 - 不会溢出
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after: a=%d b=%d\n", a, b);
	return 0;
}




int main()
{
	////& - 按2进制位与
	//int a = 3;
	//int b = 5;
	//int c = a & b;
	////000000011   有一个0就是0，两个1就是1
	////000000101
	////000000001
	//printf("%d\n", c);

	
	//int a = 3;
	//int b = 5;
	//int c = a | b;
 //   //000000011   有一个1就是1，两个0就是0
 //   //000000101
 //   //000000111
	//printf("%d\n", c);

	int a = 3;
	int b = 5;
	int c = a ^ b;
	//000000011   相同位0，相异为1,。
	//000000101
	//000000110
	printf("%d\n", c);
	return 0;
}



int main()
{
	int a = 5;
	int b = a << 1;
	printf("%d\n", b);
	return 0;
}



int main()
{
	int a = -1;
	//整数的二进制表示有：原码，反码，补码
	//存储到内存的是补码
	//100000000000000000000000000000001 - 原码
	//111111111111111111111111111111110 - 反码
	//111111111111111111111111111111111 - 补码：反码加1
	int b = a >> 1;
	printf("%d\n", b);
	return 0;
}


int main()
{
	int a = 16;
	//  >> - 右移操作符
	//移动的是二进制位
	//0000000000000000010000
	int b = a >> 1;      
	return 0;
}


int main()
{
	double a = 5 / 2.0;//浮点数
	printf(" a = %lf\n", a);
	return 0;
}


int main()
{
	int a = 5 / 2;//商2余1  a=2
	printf("a = %d\n", a);
	return 0;
}