#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hello bit\n");
	}
	return 0;
}
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//#include <stdio.h>
//#include <stdlib.h>
//void swap(int* left ,int len)
//{
//	int* right = left + len - 1;
//	while (left<right)
//	{
//		if (((*left) & 1) == 1)
//		{
//			left++;
//		}
//		else if (((*right) & 1) == 0)
//		{
//			right--;
//		}
//		else
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6 };
//	int len = sizeof(a) / sizeof(a[0]);
//	swap(a, len);
//	for (int  i = 0; i < 6; i++){
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//
//��C��������Ļ���������ͼ����
//
//void printliu(int black, int start)
//{
//	int i = 0;
//	for (i = 0; i < black; i++)
//		printf(" ");
//	for (i = 0; i < start; i++)
//		printf("*");
//	printf("\n");
//}
//void print(int n)
//{
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		printliu(n - i, 2 * i - 1);
//	}
//	printliu(0, i * 2 - 1);
//	for (i = n - 1; i >0; i--)
//	{
//		printliu(n - i, 2 * i - 1);
//	}
//}
//int main()
//{
//	print(7);
//	return 0;
//}