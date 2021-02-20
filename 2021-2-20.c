#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>//序列中删除指定数字
//int main()
//{
//	int n = 0;
//	int a[50];
//	int x = 0;
//	int i, j = 0;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &x);
//	for (i = 0; i<n; i++)
//	{
//		if (a[i] != x)
//		{
//			a[j++] = a[i];
//		}
//	}
//	for (i = 0; i<j; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
#include<stdio.h>//序列中整数去重
int main()
{
	int n = 0;
	int a[1000];
	int flag = 1;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
		for (int j = 0; j<i; j++)
		{
			if (a[i] == a[j])
			{
				flag = 0;
			}
		}
		if (flag)
			printf("%d ", a[i]);
		flag = 1;
	}
	
	return 0;
}
#include<stdio.h>
int main()
{
	int n, m = 0;
	int a[100];
	int b[100];
	scanf("%d %d", &n, &m);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i<m; i++)
	{
		scanf("%d", &b[i]);
	}
	int num = n + m;
	int c[205];
	int t = 0;
	for (int i = 0; i<num; i++)
	{
		if (a[i]<b[i])
		{
			c[t++] = a[i++];
		}
		else
			c[t++] = b[i++];
	}
	for (int i = 0; i<t; i++)
	{
		printf("%d ", c[i]);
	}
	return 0;
}
#include <stdio.h>//有序序列合并
int main()
{
	int m, n, a[105], b[105], c[205], i, j, k, t;
	scanf("%d%d", &n, &m);
	for (i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for (i = 0; i<m; i++){
		scanf("%d", &b[i]);
	}
	i = 0, j = 0, t = 0;
	while (i<n&&j<m){
		if (a[i]<b[j]) c[t++] = a[i++];
		else c[t++] = b[j++];
	}
	while (i<n){
		c[t++] = a[i++];
	}
	while (j<m){
		c[t++] = b[j++];
	}
	for (i = 0; i<t; i++){
		if (i == t - 1) printf("%d\n", c[i]);
		else printf("%d ", c[i]);
	}
}