#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
////������A�е����ݺ�����B�е����ݽ��н�����������һ����
//int main()
//{
//	int arr1[3] = { 1, 2, 3 };
//	int arr2[3] = { 4, 5, 6 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for(i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}
//һά�����ӡ
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//}
//int main()
//{
//	int arr[3] = { 1, 2, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//һά�����ʼ��0
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[3] = { 1, 2, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, sz);
//	return 0;
//}
//ʵ��reverse()  �����������Ԫ�ص�����
//void reverse(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1 ; i++)
//	{
//		for (j = 0; j < sz-1 - i; j++)
//		{
//			int tmp = arr[j];
//			arr[j] = arr[j+1];
//			arr[j+1] = tmp;
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1, 2, 3, 4, 5, 9, 4, 5, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//    reverse( arr,sz);
//	print_arr(arr, sz);
//	return 0;
//}
////ʵ�ֺ���init() ��ʼ������Ϊȫ0
////void init(int arr[2][3], int row, int col)
////{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			arr[i][j] = 0;
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[2][3] = { 1, 2, 3, 3, 4, 5 };
//	init(arr, 2, 3);
//	return 0;

//}//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//void print(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()//
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5 ,2,3,4,5,6,3,4,5,6,7,};
//	print(arr, 3, 5);
//	return 0;
//}

//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//ð����������
//	{
//		int j = 0;
//	int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//	
//}
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
 // int main()
//{	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//  bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}