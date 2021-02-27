#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//#include<assert.h>
//#include<malloc.h>
//char* exchange(char*arr)
//{
//	int count = 0;
//	int len = strlen(arr);
//	for (int i = 0; i < len; i++)//计算空格数
//	{
//		if (arr[i] == ' ')
//		{
//			count++;
//		}
//	}
//	char* s = (int*)malloc(sizeof(int)*(len + 2 * count));
//	s[len + 2 * count] = 0;
//	count = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] != ' ')
//		{
//			s[i + count] = arr[i];
//		}
//		else
//		{
//			s[i + count] = '%';
//			s[i + 1 + count] = '2';
//			s[i + 2 + count] = '0';
//			count += 2;
//		}
//	}
//	return s;
//}
//int main()
//{
//	char arr[30] = "abc defgx yz";
//	exchange(arr);
//	printf("%c\n", arr);
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Replace(char*s, char*str)
{
	while (*s)
	{
		if (*s != ' ')
		{
			*str = *s;
			str++;
		}
		else
		{
			strcpy(str, "%20");
			str = str + 3;
		}
		s++;
	}
	*str = '\0';
}
int main()
{
	char s[] = "we are young";
	char str[30];
	Replace(s, str);
	printf("%s\n", str);
	return 0;
}