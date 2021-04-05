#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#define N 6
int main()
{
	int arr[N] = { 0 };
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	int ret = 0;
	for (int i = 0; i < N; i++)
	{
		ret ^= arr[i];
	}
	int j = 0;
	for (j = 0; j < 32; j++)//找第J位为1
	{
		if (ret>>j & 1)
			break;
	}
	int a, b = 0;
	for (int i = 0; i < N; i++)//将原数组分为两组
	{
		if (arr[i]>>j & 1)
		{
			a ^= arr[i];
		}
		else
		{
			b ^= arr[i];
		}
	}
	printf("%d\n",a);
	printf("%d\n", b);
	return 0;
}