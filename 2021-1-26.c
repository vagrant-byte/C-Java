#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()//求两个数二进制中不同位的个数
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a^b;
//	int count = 0;
//	while (c)
//	{
//		count++;
//		c = c&(c - 1);
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()//统计二进制中1的个数
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = a ^ 0;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i <= 32; i++)
//	{
//		if ((b >> i) & 1 == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
int main()
{
	int i = 0;
	scanf("%d", &i);
	int j = 0;
	for (j = 31; j >= 1; j-=2)//偶数位
	{
		printf("%d",(i>>j)&1 );
	}
	printf("\n");
	for (j = 30; j >= 0; j -= 2)//奇数位
	{
		printf("%d", (i >> j) & 1);
	}
	return 0;
}
