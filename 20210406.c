#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素 最多出现两次 ，返回删除后数组的新长度。
int main()
{
	int *arr[5] = { 1, 2, 3, 2, 4 };
	int str = 0;
	int ect = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[str] != 2)
		{
			arr[ect] = arr[str];
			ect++;
		}
		str++;
	}
	printf("%d\n", ect);
	return 0;
}
//int removeDuplicates(int* nums, int numsSize){
//	if (numsSize <= 2)
//		return numsSize;
//	else
//	{
//		int str = 2;
//		int ect = 2;
//		while (str<numsSize)
//		{
//			if (nums[ect - 2] != nums[str])
//			{
//				nums[ect] = nums[str];
//				ect++;
//			}
//			str++;
//		}
//		return ect;
//	}
//}