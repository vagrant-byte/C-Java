#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>//��תֱ��������
//int main()
//{
//	int a = 0;
//	int i, j, k;
//	while (scanf("%d", &a) != EOF)
//	{
//		k = a;
//		for (i = 0; i<a; i++)
//		{
//			for (j = 0; j<k; j++)
//			{
//				printf("* ");
//			}
//			k--;
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>//���ո�ֱ�������δ�ӡ
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		int k = a;
//		for (int i = 0; i<a; i++)//��ӡ����
//		{
//			for (int j = 0; j<a - i - 1; j++)
//			{
//				printf("  ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>//������ͼ��
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 0; i<a; i++)
//		{
//			for (int j = 0; j<a - i - 1; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
#include<stdio.h>//��ת������
int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{
		for (int i = 0; i<a; i++)
		{
			for (int j = 0; j<i; j++)
			{
				printf(" ");
			}
			for (int j = 0; j<a - i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}