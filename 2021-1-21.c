#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int is_table(int x)//函数输出乘法口诀
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <=x; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			int num = j*i;
//			printf("%d*%d=", j, i);
//			printf("%2d ", num);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	is_table(i);
//	return 0;
//}
	//void swap(int * x, int * y)//函数实现两个数交换
	//{
	//	int temp = *y;
	//	*y = *x;
	//	*x = temp;
	//}
	//int main()
	//{
	//	int a = 10;
	//	int b = 20;
	//	printf("改变前：a=%d b=%d\n", a, b);
	//	swap(&a, &b);
	//	printf("改变后：a=%d b=%d\n", a, b);
	//	return 0;
	//}
	//int is_leap_year(int y)//函数打印闰年
	//{
	//	return (y % 4 == 0) && (y % 100) != 0 || (y % 400) == 0;
	//}
	//int main()
	//{
	//	int year = 0;
	//	for (year = 1000; year <= 2000; year++)
	//	{
	//		if (is_leap_year(year) == 1)
	//			printf("%d ", year);
	//	}
	//	return 0;
	//}
	//#include<math.h>
	//int is_prime(int i)//函数打印素数
	//{
	//	int j = 0;
	//	for (j = 2; j <= sqrt(i); j++)
	//	{
	//		if (i%j == 0)
	//		{
	//			return 0;
	//			break;
	//		}
	//	}
	//	return 1;
	//}
	//int main()
	//{
	//	int i = 0;
	//	for (i = 100; i <= 200; i++)
	//	{
	//		if (is_prime(i) == 1)
	//		{
	//			printf("%d ", i);
	//		}
	//	}
	//	return 0;
	//}
	//#include<string.h>
	//int binary_search(int arr[],int x, int y)//函数实现二分查找
	//{
	//	int left = 0;
	//	int reat = y - 1;
	//	int mid = left + (reat - left) / 2;
	//	while (left<=reat)
	//	{
	//		if (x < mid)
	//		{
	//			left = mid + 1;
	//		}
	//		else if (x>mid)
	//		{
	//			reat = mid - 1;
	//		}
	//		else
	//		{
	//			return mid;
	//		}
	//	}
	//	return -1;
	//}
	//int main()
	//{
	//	//有序的
	//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//	int k = 7;
	//	//二分查找的
	//	//找到了，返回下标
	//	//找不到，返回 -1
	//	int sz = sizeof(arr) / sizeof(arr[0]);
	//
	//	int ret = binary_search(arr, k,sz);
	//	if (ret == -1)
	//	{
	//		printf("找不到\n");
	//	}
	//	else
	//	{
	//		printf("找到了，下标是：%d\n", ret);
	//	}
	//
	//	return 0;
	//}
int main()
{
	int i = 0;
	int arr[7] = { 0 };
	int sum = 0;
	int max = 0;
	int min = 100;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
		sum = arr[i]++;
	}
	for (i = 0; i < 7; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min>arr[i])
		{
			min = arr[i];
		}
	}
	printf("%0.2f", (sum -max - min) / 5.0);
	return 0;
}
//}
//#include <stdio.h>
//int main()
//{
//	int arr[7], sum = 0, max = 0, min = 100;
//	scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]);
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//		sum += arr[i];
//	}
//	printf("%.2f", (sum / 1.0 - max - min) / 5.0);
//	return 0;
//}
//

