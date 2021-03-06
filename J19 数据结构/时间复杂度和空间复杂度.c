#define _CRT_SECURE_NO_WARNINGS 1





////O(N~2)
//void Func1(int N)
//{
//	int count = 0;
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			++count;
//		}
//	}
//	for (int k = 0; k < 2 * N; ++k) 
//	{
//		++count;
//	}
//	int M = 10;
//	while (M--) 
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}
//
//
//
////O(N)
//void Func2(int N) 
//{
//	int count = 0;
//	for (int k = 0; k < 2 * N; ++k) 
//	{
//		++count;
//	}
//	int M = 10;
//	while (M--) 
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}
//
//
//
////0(N+N)
//void Func3(int N, int M) {
//	int count = 0;
//	for (int k = 0; k < M; ++k) 
//	{
//		++count;
//	}
//	for (int k = 0; k < N; ++k) 
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}
//
//
//
////0(1)
//void Func4(int N) 
//{
//	int count = 0;
//	for (int k = 0; k < 100; ++k) 
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}
//
//
//
////从0-n中找出缺失的那个数，但时间复杂度为O(N)
//
//int missingNumber(int* nums, int numsSize)
//{
//	int x = 0;
//	//先跟数组中值异或
//	for (int i = 0; i < numsSize; i++)
//	{
//		x ^= nums[i];
//	}
//
//	//再跟[0,n]之间数异或
//	for (int j = 0; j < numsSize + 1; j++)
//	{
//		x ^= j;
//	}
//
//	return x;
//}
//
//
//
////给定一个数组，将数组中的元素向右移动K个位置，其中K是非负数
//// 使用空间度杂度为0（1）的原地算法
//
//
////思路一 旋转K次
////时间复杂度为0（N*K)
//
//void rotate(int* nums, int numsSize, int k)
//{
//	//while (k--)
//		for(int i =0;i<k;++i)
//	{
//		int tmp = nums[numsSize - 1];
//		for (int end = numsSize - 2; end >= 0; end--)
//		{
//			nums[end + 1] = nums[end];
//		}
//		nums[0] = tmp;
//	}
//} 
//
//
//
////思路二 用空间换时间
//
////思路三 
//void Reverse(int* nums, int left, int right)
//{
//	while (left < right)
//	{
//		int tmp = nums[left];
//		nums[left] = nums[right];
//		nums[right] = tmp; 
//		++left;
//		--right;
//
//	}
//}
//
//void rotate(int* nums, int numsSize, int k)
//{
//	if (k >= numsSize)
//	{
//		k %= numsSize;
//	}
//	Reverse(nums, numsSize - k, numsSize - 1);
//	Reverse(nums, 0, numsSize - k - 1);
//	Reverse(nums, 0, numsSize - 1);
//}