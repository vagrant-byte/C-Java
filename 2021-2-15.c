#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>//����ͼ��
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 0; i<a; i++)//��ӡ�ϰ�����
//		{
//			for (int j = 0; j<a-i ; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i<a + 1; i++)//��ӡ�м�һ��
//		{
//			printf("* ");
//		}
//		printf("\n");
//		for (int i = 0; i < a; i++)//��ӡ�°���
//		{
//			for (int j = 0; j<=i; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j<a-i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>//K��ӡ
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 0; i < a; i++)//�ϰ���
//		{
//			for (int j = 0; j<a - i + 1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i<=a; i++)
//		{
//			for (int j = 0; j<i+1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>//����ͼ��
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 0; i <= a; i++)
//		{
//			for (int j = 0; j<2 * (a - i); j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i<a; i++)
//		{
//			for (int j = 0; j< 2+2*i; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j <a - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>//��б��
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 0; i<a; i++)
//		{
//			for (int j = 0; j < i; j++){
//				printf(" ");
//			}
//			printf("*\n");
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{
		for (int i = 0; i<a; i++)
		{
			for (int j = 0; j<a - i - 1; j++)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
	return 0;
}
#include<stdio.h>//��б��
int main() {
	int n = 0;
	while (scanf("%d", &n) != EOF) {
		int space = n - 1;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < space; ++j)
				printf(" ");
			printf("*");
			for (int k = 0; k < i; ++k)
				printf(" ");
			printf("\n");
			space--;
		}
	}
	return 0;
}
int main()//X��ӡ
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{
		for (int i = 0; i<a; i++)
		{
			for (int j = 0; j<a; j++)
			{
				if (i == j)
					printf("*");
				else if (j == a - i - 1)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
#include<stdio.h>//����������
int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{
		for (int i = 0; i<a; i++)
		{
			if (i == 0 || i == a - 1)
			{
				for (int j = 0; j<a; j++)
				{
					printf("* ");
				}
			}
			else
			{
				printf("*");
				for (int j = 0; j<2 * a - 3; j++)
				{
					printf(" ");
				}
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}
#include<stdio.h>//����������
int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{
		for (int i = 0; i<a; i++)
		{
			for (int j = 0; j<a; j++)
			{
				if (i == a - 1 || j == 0 || i == j)
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}

	}
	return 0;
}