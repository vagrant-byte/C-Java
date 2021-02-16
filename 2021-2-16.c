#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>//数字三角形
int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("%d ", j);
			}
			printf("\n");
		}
	}
	return 0;
}
#include <stdio.h>//去掉最高分和最低分计算平均成绩
int main()
{
	int arr[7], sum = 0, max = 0, min = 100;
	scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
		sum += arr[i];
	}
	printf("%.2f", (sum - max - min) / 5.0);
	return 0;
}
#include<stdio.h>//有序序列插入一个数
int main()
{
	int n = 0;
	int a[51];
	int c = 0;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &c);
	for (int i = n - 1; i >= 0; i--)
	{
		if (c >= a[i])
		{
			a[i + 1] = c;
			break;
		}
		else
		{
			a[i + 1] = a[i];
			a[i] = c;
		}
	}
	for (int i = 0; i<n + 1; i++)
		printf("%d ", a[i]);
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 0;
	while (~scanf("%d", &a))
	{
		for (int i = 2; i <= a; i++)
		{
			int n = 2;
			if (i%n != 0)
			{
				printf("%d ", i);
			}
			n++

		}
	}
	return 0;
}
