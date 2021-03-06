#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()//最大公约数
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a >= b)
//	{
//		for (int i = b; i >= 1; i--)
//		{
//			if (a%i == 0 && b%i == 0)
//			{
//				printf("%d", i);
//				break;
//			}
//		}
//	}
//	else
//	{
//		for(int i = a; i >= 1; i--)
//		{
//			if (a%i == 0 && b%i == 0)
//			{
//				printf("%d", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//int main()//最大公约数  最小公倍数
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = a*b;
//	int c = 0;
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("最大公约数=%d\n", b);
//	printf("最小公倍数=%d\n", sum / b);
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (i / 10 == 9)
//			count++;
//		if (i % 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()//二进制中1的个数
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
int main()//不创建临时变量 交换两个数
{
	int a, b = 0;
	scanf("%d %d", &a, &b);
	printf("a=%d  b=%d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d  b=%d\n", a, b);
}