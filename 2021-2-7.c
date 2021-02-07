#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//int main()
//{
//	int a = sizeof(short);
//	int b = sizeof(int);
//	int c = sizeof(long);
//	int d = sizeof(long long);
//	printf("The size of short is %d bytes.\n", a);
//	printf("The size of int is %d bytes.\n", b);
//	printf("The size of long is %d bytes.\n", c);
//	printf("The size of long long is %d bytes.\n",d);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("     **     \n");
//	printf("     **     \n");
//	return 0;
//}
//int main()//转换8进制和16进制
//{
//	int a = 0;
//	scanf("%d", &a);
//	a = 1234;
//	printf("0%o 0X%X", a, a);
//	return 0;
//}
//#include<stdio.h>//16进制转化10进制
//int main()
//{
//	int a = 0XABCDEF;//以16进制赋值
//	printf("%15d", a);//printf可以使用使用格式控制串“%md”输出域宽为m的十进制整数
//	return 0;
//}
//第一行为“Hello world!”
//第二行为printf(“Hello world!”)调用后的返回值
#include<stdio.h>
int main()
{
	int a = printf("Hello world!");
	printf("\n");
	printf("%d", a);
	return 0;
}