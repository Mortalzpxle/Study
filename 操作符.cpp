#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<math.h>






//��������
int main()
{
	char a = 3;
	//00000000000000000000000000011
	//00000011 -  = a  charֻ�ܴ洢8������λ�����Իᱻ�ض�
	char b = 127;
	//00000000000000000000001111111
	//01111111 -  = b
	char c = a + b;
	//00000000000000000000000000011
	//00000000000000000000001111111
	//00000000000000000000010000010
	//10000010 - c
	//11111111111111111111110000010 -����
    //11111111111111111111110000001 -����
	//10000000000000000000001111110 -ԭ��
	//-126
	printf("%d\n", c);
	return 0;
}


//ѧ��
//����һ���ṹ������
struct stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	int a = 10;
	//ʹ��struct stu������ʹ�����һ��ѧ������s1������ʼ��
	struct stu s1 = { "����",20,"2056651" };
	struct stu* ps=&s1;

	printf("%s\n", ps->name);//�ṹ��ָ��->��Ա��
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
	printf("%d\n", ++a);//ǰ��++,��++��ʹ��
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
	//// ~ ����2���ƣ�λȡ��
	////00000000000
	////11111111111 --����
	////11111111110 --����
	////10000000001 --ԭ��
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

	////ͳ��num�Ĳ������м���1
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



//��������ʱ�������ı�a b ��ֵ
int main()
{
	int a = 4;
	int b = 5;
	printf("before: a=%d b=%d\n", a, b);
	////�Ӽ���- ���ܻ����������©��
	//a = a + b;
	//b = a - b;
	//a = a - b;

	//ʹ���ֻ� - �������
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after: a=%d b=%d\n", a, b);
	return 0;
}




int main()
{
	////& - ��2����λ��
	//int a = 3;
	//int b = 5;
	//int c = a & b;
	////000000011   ��һ��0����0������1����1
	////000000101
	////000000001
	//printf("%d\n", c);

	
	//int a = 3;
	//int b = 5;
	//int c = a | b;
 //   //000000011   ��һ��1����1������0����0
 //   //000000101
 //   //000000111
	//printf("%d\n", c);

	int a = 3;
	int b = 5;
	int c = a ^ b;
	//000000011   ��ͬλ0������Ϊ1,��
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
	//�����Ķ����Ʊ�ʾ�У�ԭ�룬���룬����
	//�洢���ڴ���ǲ���
	//100000000000000000000000000000001 - ԭ��
	//111111111111111111111111111111110 - ����
	//111111111111111111111111111111111 - ���룺�����1
	int b = a >> 1;
	printf("%d\n", b);
	return 0;
}


int main()
{
	int a = 16;
	//  >> - ���Ʋ�����
	//�ƶ����Ƕ�����λ
	//0000000000000000010000
	int b = a >> 1;      
	return 0;
}


int main()
{
	double a = 5 / 2.0;//������
	printf(" a = %lf\n", a);
	return 0;
}


int main()
{
	int a = 5 / 2;//��2��1  a=2
	printf("a = %d\n", a);
	return 0;
}