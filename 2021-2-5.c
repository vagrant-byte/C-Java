#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#include<assert.h>
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
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
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);
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