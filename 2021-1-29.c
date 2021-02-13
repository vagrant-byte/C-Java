#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//求出0～100000之间的所有“水仙花数”并输出。
//
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
int my_strlen(int n)
{
	int count = 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return count;
}
int fun(int m, int n)
{
	if (n != 0)
		return m*fun(m, n - 1);
	else
		return 1;
}
int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 0; i < 100000; i++)
	{
		int len = my_strlen(i);//计算有几个数
		int m = i % 10;
		int res = fun(m, len);//计算每个数的次方
		m = m / 10;
		sum += res;
	}
	if (sum = i);
	printf("%d\n", i);
	return 0;
}
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total =0;
//	int emply = 0;
//	total += money;
//	emply = money;
//	while (emply >= 2)
//	{
//		total += emply / 2;
//		emply = emply / 2 + emply % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}