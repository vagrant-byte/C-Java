#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()//�������ɴ�С���
//{
//	int a, b, c, z;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		z = a;
//		a = b;
//		b = z;
//	}
//	if (a < c)
//	{
//		z = c;
//		c = a;
//		a = c;
//	}
//	if (b < c)
//	{
//		z = c;
//		c = b;
//		b = z;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()//���1-100����3�ı���
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()//�������������Լ��
//{
//	int a = 0;
//	int b = 0;
//	printf("����������������");
//	scanf("%d %d", &a, &b);
//	if (a >= b)
//	{
//		int i = 0;
//		for (i = b; i >= 1; i--){
//			if (a%i == 0 && b%i == 0)
//			{
//				printf("���Լ����%d ", i);
//				break;
//			}
//		}	
//	}
//	else
//	{
//		int j = 0;
//		for (j = a; j >= 1; j--){
//			if (b%j == 0 && a%j == 0)
//			{
//				printf("���Լ����%d", j);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//int main()//������ ���Ա�4�������ܱ�100����   ��������Ա�400������������
//{
//	int year = 0;
//	for (year = 1000; year <= 2000;year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//			printf("%d ", year);
//		if (year % 400 == 0)
//			printf("%d ", year);
//	}
//	return 0;
//}
//int main()//������
//{
//	int i = 0;
//	for (i = 100; i <=200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (i==j)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()//��1-100�к���9�ĸ���
//{
//	int i = 0;
//	int num = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			num++;
//		}
//	}
//	printf("%d ", num);
//	return 0;
//}
//int main()//�������
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum = sum + 1 /(double) i;
//		if (i % 2 == 1)
//			sum = sum - 1 / (double)i;
//	}
//	printf("%f", sum);
//	return 0;
//
