#define _CRT_SECURE_NO_WARNINGS 1 
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
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