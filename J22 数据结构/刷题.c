#define _CRT_SECURE_NO_WARNINGS 1



//给出一个数组num  和一个值 val=2,你需要原地移除所有数值等于val的元素，并返回移除后数组的新长度
//不要使用额外的数组空间，你必须仅仅使用O（1）额外空间并原地修改输入数组

//双指针法

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