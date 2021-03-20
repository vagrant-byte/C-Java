#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	union U
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	if (u.c == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//int check_sys()
//{
//	int i = 1;
//	return (*(char*)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d b=%d c=%d", a, b, c);
//}
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//}
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 + i;
//	}
//	printf("%d", strlen(a));
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//}
//int main()
//{
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hellow ward\n");
//	}
//	return 0;
//}
#include<string.h>
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	puts(str);
//	return 0;
//}
//int main()
//{
//	char str[] = "-This,a sample string";
//	char* pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, ",-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, ",-");
//	}
//	return 0;
//}
//字符串旋转
//int foundround(const char* str,char* find)
//{
//	char tmp[255] = { 0 };
//	strcpy(tmp, str);
//	strcat(tmp, str);
//	return strstr(tmp, find) != NULL;
//}
//int main()
//{
//	char arr1[20] = "ABCDE";
//	char arr2[] = "CDABE";
//	foundround(arr1, arr2);
//	return 0;
//}
////左旋字符串K个字符
//void leftRound(char * src, int time)
//{
//	int len = strlen(src);
//	int pos = time % len; //断开位置的下标
//	char tmp[256] = { 0 }; //更准确的话可以选择malloc len + 1个字节的空间来做这个tmp
//
//	strcpy(tmp, src + pos); //先将后面的全部拷过来
//	strncat(tmp, src, pos); //然后将前面几个接上
//	strcpy(src, tmp); //最后拷回去
//}
#include<assert.h>
//int my_strlen(char* str)
//{
//	assert(str);
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcde";
//	printf("%d\n",my_strlen(arr));
//	return 0;
//}
//char* my_strcpy(char* str, char* rig)
//{
//	assert(str&&rig);
//	char* ret = str;
//	while (*str++ = *rig++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "***************";
//	char arr2[] = "abcde";
//	printf("%s",my_strcpy(arr1,arr2));
//	return 0;
//}
//char* my_strcat(char* arr1, char* arr2)
//{
//	assert(arr1&&arr2);
//	char* ret = arr1;
//	while (*arr1)
//	{
//		arr1++;
//	}
//	while (*arr2)
//	{
//		*arr1++ = *arr2++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "def";
//	printf("%s\n", my_strcat(arr1,arr2));
//	return 0;
//}
//int my_strcmp(const char* arr1,const char* arr2)
//{
//	assert(arr1&&arr2);
//	while (*arr1 == *arr2)
//	{
//		if (*arr2 == '\0')
//			return 0;
//		arr1++;
//		arr2++;
//	}
//	return *arr1 - *arr2;
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "fgh";
//	printf("%d\n", my_strcmp(arr1, arr2));
//	return 0;
//}
