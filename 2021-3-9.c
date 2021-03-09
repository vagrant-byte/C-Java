#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<assert.h>
//char * my_strncat(char *dest, const char *src, size_t n)
//{
//	assert(dest&&src);
//	char *p = dest;
//	char *q = (char *)src;
//	while (*p)
//	{
//		p++;
//	}
//	while (n--)
//	{
//		*p++ = *q++;
//	}
//	*p = '\0';
//	return dest;
//}
//int main()
//{
//	char a[30] = "abc";
//	const char b[5] = "defgh";
//	int num = 0;
//	printf("请输入要拼接字符长度->");
//	scanf("%d", &num);
//	printf("%s",my_strncat(a, b, num));
//	return 0;
//}
char *my_strncpy(char *dest, const char *src, size_t n)
{
	assert(dest&&src);
	char* ret = dest;
	while (n--)
	{
		*dest++ = *src++;
	}
	return ret;

}
int main()
{
	char str1[20] = "123456";
	char str2[20] = "abcde";
	int num = 0;
	printf("请输入要替换字符的长度->");
	scanf("%d", &num);
	printf("%s", my_strncpy(str1, str2, num));
	return 0;
}