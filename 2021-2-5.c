#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#include<assert.h>
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//int is_left_move(char* arr1, char*arr2)
//{
//	int len2 = strlen(arr2);
//	int len1 = strlen(arr1);
//	if (len1 != len2)
//		return 0;
//	strncat(arr2, arr2, len2);
//	if (strstr(arr2, arr1))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr1[20] = "ABCDEF";
//	char arr2[] = "CDEFAB";
//	if (is_left_move(arr2, arr1))
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//char* left_move(char* str, int k)
//{
//	int len = strlen(str);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//	return str;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 3;
//	printf("%s\n",left_move(arr, k));
//	return 0;
//}
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);
int find(int arr[3][3], int k, int r, int c)
{
	int x = 0;
	int y = c - 1;
	while (x < r&&y >= 0)
	{
		if (arr[x][y] < k)
			x++;
		else if (arr[x][y]>k)
			y--;
		else
			return 1;
	}
	return 0;
}
int main()
{
	int arr[3][3] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
	int k = 3;
	int ret = find(arr, k, 3, 3);
	if (ret == 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}