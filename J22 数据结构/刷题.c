#define _CRT_SECURE_NO_WARNINGS 1



//����һ������num  ��һ��ֵ val=2,����Ҫԭ���Ƴ�������ֵ����val��Ԫ�أ��������Ƴ���������³���
//��Ҫʹ�ö��������ռ䣬��������ʹ��O��1������ռ䲢ԭ���޸���������

//˫ָ�뷨

int removeElement(int* nums, int numsSize, int val)
{
	int src = 0;
	int dst = 0;
	while (src < numsSize)
	{
		if (nums[src] != val);
		{
			nums[dst] = nums[src];
			src++;
			dst++;
		}
		else
		{
			++src;
		}
	}
	return dst;
}




//