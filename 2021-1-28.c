#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	for (n = 1; n<100000; n++)
//	{
//		int count = 0;
//		while (n > 0)
//		{
//			n = n / 10;
//			count++;
//		}
//		int num = 0;
//		printf("%d", count);
//		int sum = 0;
//		while (n > 0)
//		{
//			int num = n % 10;
//			n = n / 10;
//			for (int i = count; i > 0; count--)
//			{
//				num = num * 1;
//			}
//			sum = sum + num;
//		}
//		if (n = sum)
//			printf("%d\n", n);
//	}
//	return 0;
//}
int fun(int m, int n)// 计算m的n次方
{
	if (n != 0)
		return m * fun(m, n - 1);
	else
	{
		return 1;
	}
}
int main()
{
	int i = 0;
	for (i = 1; i<100000; i++)//这里也可以修改范围i<()
	{
		int tmp = i;
		int n = 0;//计算当前tmp的位数n
		while (tmp)
		{
			tmp = tmp / 10;
			n++;
		}
		int sum = 0;	//求和
		tmp = i;//重新将tmp赋值i
		while (tmp)
		{
			int m = tmp % 10;//m保存当前m的个位数
			int res = fun(m, n);//调用函数计算每个数的次方
			tmp /= 10;//tmp左移
			sum += res;//各个数的次方和
		}
		//判断
		if (sum == i)
			printf("%d\n", i);
	}
}