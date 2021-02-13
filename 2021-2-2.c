#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
//void qsort(void *base, size_t num, size_t width, int(__cdecl *compare)(const void *elem1, const void *elem2));
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void _swap(char*buf1,char*buf2,int width)
{
	int i = 0;
	for (i = 0; i <= width; i++)
	{
		int temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}

}
void bubble_sort(void * base, size_t num, size_t width, int(*cmp)(const void * e1, const void * e2))//冒泡排序实现qsort
{
	size_t i = 0;
	for (i = 0; i < num - 1; i++)//趟数
	{
		size_t j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				_swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
			}
		}
	}

}
void cmp_int(const void *e1, const void * e2)
{
	return (*(int*)e1 - *(int*)e2);
}
void test1()
{
	int arr[] = { 2, 3, 5, 4, 6, 7, 9, 8, 0, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);

}
int main()
{
	test1();
	return 0;
}
//int cmp_int(const void*e1, const void*e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//void com_int_by_nam(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//void test2()
//{
//	struct stu arr[] = { { "zhangsan,20" }, { "lisi,30" }, { "wangwu,15" } };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), com_int_by_nam);
//	print(arr, sz);
//}
//int main()
//{
//	test2();
//	/*int arr[] = { 1, 3, 5, 6, 7, 8, 9, 0, 2, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);*/
//	/*return 0;
//}*/
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	/*int len = my_strlen(ch);
//	printf("%d\n", len);*/
//	int(*p)(const char*) = my_strlen;
//	int len = (*p)("biet");
//	printf("%d\n", len);
//	return 0;
//}
//void mune()
//{
//	printf("*********************************\n");
//	printf("********1.add         2.sub *****\n");
//	printf("********3.mul         4.div *****\n");
//	printf("********     0.exit          ****\n");
//	printf("*********************************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x ,int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x*y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int imput = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int(*pfarr[])(int, int) = { 0, add, sub, mul, div };//函数指针数组—转移表
//	do
//	{
//		mune();
//		printf("请选择：");
//		scanf("%d", &imput);
//		if (0 == imput)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else if (1<=imput<=4)
//		{
//			printf("请输入两个参数：");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[imput](x, y);
//		    printf("ret=%d\n", ret);
//		}
//		else
//		{
//			printf("请重新选择");
//		}
//	} while (imput);
//	return 0;
//}
//void cale(int(*p)(int, int))//函数传参 函数指针 回调函数
//{
//	int ret = 0;
//	int x = 0;
//	int y = 0;
//	printf("请输入两个参数：\n");
//	scanf("%d %d", &x, &y
//	printf("ret=%d\n", ret);
//});
//	ret = p(x, y);
//int main()
//{
//	int imput = 0;
//	do
//	{
//		mune();
//		printf("请选择：");
//		scanf("%d", &imput);
//		switch (imput)
//		{
//		case 1:
//			cale(add);
//			break;
//		case 2:
//			cale(sub);
//			break;
//		case 3:
//			cale(mul);
//			break;
//		case 4:
//			cale(div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//
//	} while (imput);
//	 return 0;
//}
//int main()
//{
//	int imput = 0;
//	int ret = 0;
//	int x = 0;
//	int y = 0;
//	do 
//	{
//		mune();
//		printf("请选择：");	
//		scanf("%d", &imput);
//		switch (imput)
//		{
//		case 1:
//			printf("请输入两个参数：\n");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret=%d \n", ret);
//			break;
//		case 2:
//			printf("请输入两个参数：\n");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret=%d \n", ret);
//			break;
//		case 3:
//			printf("请输入两个参数：\n");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret=%d \n", ret);
//			break;
//		case 4:
//			printf("请输入两个参数：\n");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret=%d \n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (imput);
//	return 0;
//}