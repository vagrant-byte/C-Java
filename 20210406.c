#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//����һ���������� nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ���������� ������ɾ����������³��ȡ�
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