#define _CRT_SECURE_NO_WARNINGS 1 
//求数组中元素出现次数超过数组长度一半的数字
#include<stdio.h>
int main()
{
	int arr[10];
	int count = 1;
	int returnvalu = arr[0];
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i <sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (returnvalu == arr[i])
		{
			count++;
		}
		else
		{
			count--;
		}
		if (count <= 0)
		{
			count = 1;
			returnvalu = arr[i];
		}
	}
	int c = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (arr[i] == returnvalu)
			c++;
	}
	if (c>strlen(arr)/2)
		printf("%d", returnvalu);
	return 0;
}