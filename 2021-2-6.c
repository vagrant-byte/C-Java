#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<assert.h>
//void* my_memcpy(void* dest, const void* str, size_t count)
//{
//	assert(dest&&str);
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)str;
//		++(char*)dest;
//		++(char*)str;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 16);
//	return 0;
//}
void* my_memmove(void* dest, const void* str, size_t count)
{
	assert(dest&&str);
	void* ret = dest;
	if (dest < str)
	{
	   while (count--)
		{
     		*(char*)dest = *(char*)str;
			++(char*)dest;
			++(char*)str;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)str + count);
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	my_memmove(arr+2, arr, 16);
	return 0;
}