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
//int main()//ת��8���ƺ�16����
//{
//	int a = 0;
//	scanf("%d", &a);
//	a = 1234;
//	printf("0%o 0X%X", a, a);
//	return 0;
//}
//#include<stdio.h>//16����ת��10����
//int main()
//{
//	int a = 0XABCDEF;//��16���Ƹ�ֵ
//	printf("%15d", a);//printf����ʹ��ʹ�ø�ʽ���ƴ���%md��������Ϊm��ʮ��������
//	return 0;
//}
//��һ��Ϊ��Hello world!��
//�ڶ���Ϊprintf(��Hello world!��)���ú�ķ���ֵ
#include<stdio.h>
int main()
{
	int a = printf("Hello world!");
	printf("\n");
	printf("%d", a);
	return 0;
}