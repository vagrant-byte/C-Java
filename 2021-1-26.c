#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()//���������������в�ͬλ�ĸ���
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
//int main()//ͳ�ƶ�������1�ĸ���
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
	for (j = 31; j >= 1; j-=2)//ż��λ
	{
		printf("%d",(i>>j)&1 );
	}
	printf("\n");
	for (j = 30; j >= 0; j -= 2)//����λ
	{
		printf("%d", (i >> j) & 1);
	}
	return 0;
}
