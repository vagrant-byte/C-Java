#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//#define OFFSETOF(struct_name,number_name) (int)&(((struct_name*)0)->number_name)
//struct s
//{
//	char c1;
//	int a;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", OFFSETOF(struct s, c1));
//	printf("%d\n", OFFSETOF(struct s, a));
//	printf("%d\n", OFFSETOF(struct s, c2));
//	return 0;
//}
//#include <stdio.h>
//#define FSWAP(N) (((N&0X55555555)<<1)|((N&0xaaaaaaaa)>>1))
//
//int main()
//{
//	int n = 0;
//	printf("������һ������\n");
//	scanf("%d", &n);
//	printf("%d", FSWAP(n));
//	return 0;
//}
#include<stdio.h>
#include<stdio.h>
#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
int main()
{
	//int* p = (int*)malloc(10 * sizeof(int));
	int* p = MALLOC(10, int);
	if (p == NULL)
	{
		return 1;
	}
	free(p);
	p = NULL;
	return 0;
}
//int main()
//{
//#if 1
//	printf("hehe\n");
//#endif
//	return 0;
//}
//#define SQUARE(x) ((x)*(x))
//int main()
//{
//	printf("%d", SQUARE(3));
//	return 0;
//}
//�Ѳ�����Ϊ�ַ���
//#define PRINT(FORMAT,VALUE)  printf("the value of"#VALUE"is"FORMAT"\n", VALUE)
//int main()
//{
//	int i = 10;
//	PRINT("%d",i+10);
//	return 0;
//}
//##�������ַ��ϳ�һ���ַ�
//#define ADD_TO_SUM(num,value) printf("%d",num##value)
//int main()
//{
//	ADD_TO_SUM(5, 10);
//	return 0;
//}
//int main()
//{
//#ifdef ADD
//	printf("hehe\n");
//#endif
//	return 0;
//}
//int main()
//{
//#if defined ADD
//	printf("hehe\n");
//#endif
//	return 0;
//}
//int main()
//{
//#ifndef
//	printf("hehe\n");
//#endif
//	return 0;
//}
//��ֹͷ�ļ��ظ�����
//#ifndef __TEST___
//#define __TEST__
//    int ADD.h
//#endif
//
//#pragma once