#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "bit";
//	printf("%s",strcat(arr1, arr2));
//	return 0;
//}
//char* my_strcat(char*arr1, const char*arr2)
//{
//	assert(arr1&&arr2);
//	char* ret = arr1;
//	while (*arr1 )
//	{
//		arr1++;
//	}
//	while (*arr2 !='\0')
//	{
//		*arr1++ = *arr2++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}
//int main()//strcmp应用
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	int ret = strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}
//int my_strcmp(char* arr1, char* arr2)
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
//	char arr2[] = "abc";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()//strstr应用
//{
//	char arr1[] = "abcde";
//	char arr2[] = "cd";
//	char*ret = strstr(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}
char* my_strstr(const char*arr1, const char*arr2)
{
	assert(arr1&&arr2);
	const char*pc = arr1;
	while (*pc)
	{
		const char* p1 = pc;
		const char* p2 = arr2;
		while ((*p1) && (*p2) && (*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (char*)pc;
		}
		pc++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcded";
	char arr2[] = "bc";
	char* ret = my_strstr(arr1, arr2);
	printf("%s\n", ret);
	return 0;
}