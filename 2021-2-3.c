#define _CRT_SECURE_NO_WARNINGS 1 
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
#include<stdio.h>
int comp(char* arr1, char*arr2)
{
	char temp[256] = { 0 };
	strcpy(temp, arr1);
	strcat(temp, arr2);
	return strstr(temp, arr2) != NULL;
}
int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "BCDAA";
	printf("%d\n", comp(arr1, arr2));
	char arr3[] = "abcd";
	printf("%d\n", comp(arr1, arr3));
	return 0;
}