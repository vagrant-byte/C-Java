#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int max(int x, int y)
{
	int z = x > y ? x : y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = max(a, b);
	printf("max=%d\n", c);
	return 0;
}