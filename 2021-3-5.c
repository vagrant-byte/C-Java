#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()//最小公因数
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a > b ? a : b;
//	while (min%a != 0|| min%b!=0)
//	{
//		min++;
//	}
//	printf("%d", min);
//	return 0;
//}
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a*i%b!=0)
//	{
//		i++;
//	}
//	printf("%d", a*i);
//	return 0;
//}
void reverse(char*left,char*reight)//字母逆序
{
	while (left < reight)
	{
		char temp = *reight;
		*reight = *left;
		*left = temp;
		left++;
		reight--;
	}
}
int main()//逆序打印字符串
{
	char arr[100] = { 0 };
	gets(arr);
	int sz = strlen(arr);
	reverse(arr, arr + sz - 1);
	char*start = arr;
	char* end = arr;
	while (*start)
	{
		end = start;
		while (*end != ' '&&*end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
		{
			start = end + 1;
		}
		else
			start = end;
	}
	printf("%s\n", arr);
}