#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>


////#define M 10//行数
//int main()//杨辉三角
//{
//	int arr[M][M];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (i == j || j == 0)//最左边和最右边打印1
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < M; i++)//打印
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<assert.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n ; i++)//打印上半行行数
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i +1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n - 1; i++)//打印下半行
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (n - 1-i); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int temp = i;
//		int count = 1;
//		while (temp / 10)//判断这个数有几位
//		{
//			count++;
//			temp /= 10;
//		}
//		temp = i;
//		int sum = 0;
//		while (temp)
//		{
//			int ret = pow(temp % 10, count);//计算一个数的n次方
//			sum += ret;
//			temp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int my_strlen(const char* ch)
//{
//	assert(ch != NULL);//断言字符串地址非0
//	int count = 0;
//	while (*ch++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[] ="bite" ;
//	int len = my_strlen(ch);
//	printf("%d", len);
//	return 0;
//}
//int my_strlen(char* ch)
//{
//	if (*ch != '\0')
//		return 1 + my_strlen(ch + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char ch[] = "bite";
//	int len = my_strlen(ch);
//	printf("%d", len);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char ch[] = "Hello World!";
//	printf("%d",strlen(ch));
//	return 0;
//}