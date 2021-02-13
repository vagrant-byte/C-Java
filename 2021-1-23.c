#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int Fib(int n)//递归求斐波那契数
{
	int i = 1;
	int j = 1;
	int ret = 0;
	int k = 0;
	for (k = 3; k <= n; k++)
	{
		int ret = i + j;
		i = j;
		j = ret;
	}
	return j;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", Fib(n));
	return 0;
}
//int Fib(int n)//计算斐波那契数
//{
//	if (n <= 2)
//		return 1;
//	else
//		return (Fib(n - 1) + Fib(n - 2));
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num=Fib(n);
//	printf("%d", num);
//	return 0;
//}
//int is_fact(int n, int k)//递归实现n的k次方
//{
//	if (n == 1 || k == 0)
//		return 1;
//	else
//		return n*is_fact(n, k - 1);
//
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int sum = is_fact(n, k);
//	printf("%d", sum);
//	return 0;
//}
//int DigitSum(n)//输入一个非负整数，返回组成它的数字之和
//{
//	if (n < 10)
//		return n;
//	else
//		return n % 10 + DigitSum(n / 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}
//char reverse_string(char* string,int len)//反向打印字符串
//{
//	printf("%c", string[len]);
//	if (len < 0)
//		return 0;
//	else
//		return reverse_string(string, len - 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = sizeof(arr) / sizeof(arr[0])-2;
//    reverse_string(arr,len);
//	putchar('\n');
//	return 0;
//}
//int main()//strlen实现
//{
//	int i = 0;
//	char arr[] = "abcdef";
//	int len = 0;
//	for (i = 0; arr[i] != 0; i++)
//	{
//		len++;
//	}
//	printf("%d", len);
//	return 0;
//}
//int my_strlen(char*str)//递归实现strlen
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//int is_fact(int i)//递归求n的阶乘
//{
//	if (i == 1)
//		return 1;
//	else
//		return i*is_fact(i - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = is_fact(n);
//	printf("%d", sum);
//	return 0;
//}
//int main()//n的阶乘
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <=n; i++)
//	{
//		sum*=i;
//	}
//	printf("%d", sum);
//	return 0;
//}
//void print(int n)//递归方法打印每一个数字
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}