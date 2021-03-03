#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	return 0;
//}
//int main()
//{
//	int c = 0, k;
//	for (k = 1; k < 3; k++)
//		switch (k)
//	{
//		default:c += k;
//		case 2: c++; break;
//		case 3: c += 2; break;
//	}
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', 't' };
//	char arr3[] = { 'b', 'i', 't', '\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}
//int main()//转义字符
//{
//	printf("c:\\code\\test.c\n");
//	return 0;
//}
//int main()
//{
//	printf("c:\text\328\test.c");
//	printf("%d\n", strlen("c:\text\328\test.c"));
//	return 0;
//}
//void test()static修饰局部变量
//{
//	static int i = 0;
//	i++;
//	printf("%d", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}
//void test()
//{
//    int i = 0;
//	i++;
//	printf("%d", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}
//#include "add.c"
//int main()
//{
//	printf("%d", g_val);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
////	}
//	return 0;
//}
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()//多个字符两端向中间移动
//{
//	char arr1[] = "welcome to bie";
//	char arr2[] = "**************";
//	int left = 0;
//	int reight = strlen(arr1) - 1;
//	while (left <= reight)
//	{
//		arr2[left] = arr1[left];
//		arr2[reight] = arr1[reight];
//		left++;
//		reight--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}
//int main()//折半查找
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int reight = sizeof(arr) / sizeof(arr[0]) - 1;
//	int k = 7;
//	int mid = 0;
//	while (left <= reight)
//	{
//		mid = (left + reight) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			reight = mid - 1;
//		}
//		else
//			break;
//	}
//	if (left <= reight)
//		printf("找到了，下标为%d", mid);
//	else
//		printf("找不到");
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("二进制中1的个数=%d", count);
//	return 0;
//}