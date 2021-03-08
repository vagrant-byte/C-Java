#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//用数字5，5，5，1进行四则运算，每个数字当且仅用一次，要求运算结果值为24
//int main()
//{
//	int a = 5;
//	int b = 5;
//	int c = 5;
//	int d = 1;
//	int x = a << 1;//左移操作数左移几位就是乘以2的几次方    右移操作数右移几位就是除以2的几次方
//	int y = x^b;
//	int z = d << 2;
//	printf("%d", y + c + z);
//	return 0;
//}
//int fun(int a, int b)
//{
//	if (a > b)
//		return a + b;
//	else
//		return a - b;
//}
//int main()
//{
//	int x = 3, y = 8, z = 6, r;
//	r = fun(fun(x, y), 2 * z);
//	printf("%d\n", r);
//	return 0;
//}
int f(int a)
{
	int b = 0;
	static int c = 3;
	a = c++, b++;
	return (a);
}
int main()
{
	int a = 2, i, k;
	for (i = 0; i < 2; i++)
	{
		k = f(a++);
	}
	printf("%d\n", k);
	return 0;
}