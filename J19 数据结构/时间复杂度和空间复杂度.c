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
////��0-n���ҳ�ȱʧ���Ǹ�������ʱ�临�Ӷ�ΪO(N)
//
//int missingNumber(int* nums, int numsSize)
//{
//	int x = 0;
//	//�ȸ�������ֵ���
//	for (int i = 0; i < numsSize; i++)
//	{
//		x ^= nums[i];
//	}
//
//	//�ٸ�[0,n]֮�������
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
////����һ�����飬�������е�Ԫ�������ƶ�K��λ�ã�����K�ǷǸ���
//// ʹ�ÿռ���Ӷ�Ϊ0��1����ԭ���㷨
//
//
////˼·һ ��תK��
////ʱ�临�Ӷ�Ϊ0��N*K)
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
////˼·�� �ÿռ任ʱ��
//
////˼·�� 
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