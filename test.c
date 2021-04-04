#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>//消失的数字
//int main()
//{
//	int n = 0;
//	printf("请输入一个整数");
//	scanf("%d", &n);
//	int arr[5] = { 0 };
//	for (int i = 0; i < n-1; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	for (int i = 0; i <n; i++)
//	{
//		sum = sum + i;
//	}
//	for (int i = 0; i < n-1; i++)
//	{
//		sum-= arr[i];
//	}
//	printf("%d\n", sum);
//	return 0;
//}
int main()
{
	int n = 0;
	printf("请输入一个数字");
	scanf("%d", &n);
	int arr[5] = { 0 };
	for (int i = 0; i < n - 1; i++)
	{
		scanf("%d", &arr[i]);
	}
	int x = 0;
	for (int i = 0; i <n; i++)
	{
		x ^= i;
	}
	for (int i = 0; i < n - 1; i++)
	{
		x ^= arr[i];
	}
	printf("%d\n", x);
	return 0;
}