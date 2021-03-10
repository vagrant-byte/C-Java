#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main()
{
	int arr[10];
	int*p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));//打印错误信息
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
		//空间不够，增加空间
		int* ptr = (int*)realloc(p, 80);//调整空间大小
		if (ptr != NULL)
		{
			p = ptr;
		}
		for (int i = 0; i < 20; i++)
		{
			printf("%d ", *(p + i));
		}
		//释放
		free(p);
		p = NULL;
	}
	return 0;
}

//malloc开辟的空间不初始化   参数只有一个
//calloc开辟的空间初始化   参数有2个
//int main()
//{
//	int arr[10] = { 0 };//在栈区上申请40个字节的空间
//	//动态内存开辟在堆区
//	int * p = (int*)malloc(40);//希望把40个字节当成10个整形数组
//	if (p == NULL)
//	{
//		printf("内存开辟失败\n");
//	}
//	else
//	{
//		//开辟成功
//		for (int i = 0; i < 10; i++)
//		{
//			*(p + i) = 0;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	free(p);//释放p
//	p = NULL;//将p置为空指针
//	return 0;
//}
//1.对NULL指针解引用操作
int main()
{
	int* p = (int*)malloc(INT_MAX);
	//p有可能为NULL指针，当为NULL的时候，*p就是非法访问内存
	*p = 0;
	return 0;
}
//2.对动态开辟空间越界访问
int main()
{
	int arr[10];
	int*p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));//打印错误信息
	}
	else
	{
		for (int i = 0; i <=10; i++)
		{
			printf("%d ", *(p + i));//当I为10时就越界访问
		}
	}
	free(p);
	p = NULL;
	return 0;
}
//3.对非动态开辟内存使用free
int main()
{
	int a = 10;
	int* p = &a;
	free(p);
}
//使用free释放一块动态开辟内存的一部分
int main()
{
	int* p = (int*)malloc(100);
	p++;
	free(p);
}
//5.对同一块动态内存多次释放
int main()
{
	int* p = (int*)malloc(100);
	free(p);
	free(p);
}