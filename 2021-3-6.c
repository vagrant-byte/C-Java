#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()//���Լ��
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a >= b)
//	{
//		for (int i = b; i >= 1; i--)
//		{
//			if (a%i == 0 && b%i == 0)
//			{
//				printf("%d", i);
//				break;
//			}
//		}
//	}
//	else
//	{
//		for(int i = a; i >= 1; i--)
//		{
//			if (a%i == 0 && b%i == 0)
//			{
//				printf("%d", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//int main()//���Լ��  ��С������
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = a*b;
//	int c = 0;
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("���Լ��=%d\n", b);
//	printf("��С������=%d\n", sum / b);
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (i / 10 == 9)
//			count++;
//		if (i % 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()//��������1�ĸ���
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
int main()//��������ʱ���� ����������
{
	int a, b = 0;
	scanf("%d %d", &a, &b);
	printf("a=%d  b=%d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d  b=%d\n", a, b);
}