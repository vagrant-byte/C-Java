#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int p = 1;
//	int q = 1;
//	int i = 0;
//	while (i<n - 1)
//	{
//		p = p + q;
//		q = p - q;
//		i++;
//	}
//	printf("%d", p);
//	return 0;
//}
//#include <stdio.h>//走楼梯
//int main(void){
//	int n;
//	scanf("%d", &n);
//	int a[35];
//	a[0] = 0;
//	a[1] = 1;
//	a[2] = 2;
//	for (int i = 3; i <= n ; i++){
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	printf("%d", a[n]);
//	return 0;
//}
////注意：这是一个经典的 斐波那契数列 问题！不建议用排列组合的方法处理
////因为走到第三个楼梯的时候可以从第一阶和第二阶直接走上来；
////同理，第四个楼梯的时候可以从第二阶和第三阶直接走上来；
////第五个楼梯的时候可以从第三阶和第四阶直接走上来；
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a[100];
//	int temp = 0;
//	scanf("%d", &n);
//	for (int i = 0; i<n; i++)
//	{
//		scanf("%d", &a[i]);
//		getchar();
//	}
//	for (int i = 0; i<n - 1; i++)
//	{
//		for (int j = 1; j<n - i; j++)
//		{
//			if (a[j]<a[j - 1])
//			{
//				temp = a[j];
//				a[j] = a[j - 1];
//				a[j - 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i<n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//#include <stdio.h>//序列
//int main(){
//	int n, i, input, max = 0;
//	int a[100001] = { 0 };
//	scanf("%d", &n);
//
//	for (int i = 0; i< n; i++){
//		scanf("%d", &input);
//		a[input] = input;      // 把相同的数存进相同的数组元素中， 
//		if (input >= max){            // 这样该数组元素只会保留一个相同的数
//			max = input;
//		}
//	}
//
//	for (i = 1; i <= max; i++){
//		if (a[i]){             //按序输出非零元素
//			printf("%d ", a[i]);
//		}
//	}
//	return 0;
//}
#include<stdio.h>//字符串
int main()
{
	long long c = 0, ch = 0, chn = 0;
	char s = 0;
	while ((s=getchar(s)) != '\n')
	{
		if (s == 'C')
		{
			c++;
		}
		else if (s == 'H')
		{
			ch += c;
		}
		else if (s == 'N')
		{
			chn += ch;
		}
	}
	printf("%d", chn);
	return 0;
}
#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
int main()
{
	int a, b, c, d;
	int max = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d\n", max(max(a, b), max(c, d)));
	return 0;
}
#include <stdio.h>//四个数中最大数
int main(void)
{
	int a, b, c, d;
	int max = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	max = a>b ? a : b;
	max = max>c ? max : c;
	max = max>d ? max : d;
	printf("%d", max);

	return 0;
}