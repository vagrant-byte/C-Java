#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//�ַ����������м��ƶ�
//ģ���û���¼
//void print(int num)//����һ�����Σ���˳���ӡ����ÿһλ
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//int Strlen(const char* str)//��������ʱ���������ַ�������
//{
//	if (*str != '\0')
//		return 1 + Strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char * p = "abcde";
//	int len = Strlen(p);
//	printf("%d", len);
//	return 0;
//}
//int Factorials(int n)//��N�Ľ׳�
//{
//	if (n == 1)
//		return 1;
//	else
//		return n* Factorials(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d",Factorials(n));
//	return 0;
//}
//int Factorials(int n)//1��+2��+3��+.....+10��
//{
//	if (n == 1)
//		return 1;
//	else
//	    return n* Factorials(n - 1);
//}
//int main()
//{
//	int arr[4];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int sum = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		int c=Factorials(arr[i]);
//		sum = sum + c;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int Fibonacci(int n)//���N��쳲���������
//{
//	if (n == 0)
//		return 0;
//	else if (n == 1)
//		return 1;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fibonacci(n));
//	return 0;
//}
//int main()//�۰����
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 7;
//	int left = 0;
//	int reight = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	while (left <= reight)
//	{
//		mid = (left + reight) / 2;
//		if (arr[mid]> k)
//		{
//			reight = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= reight)
//		printf("�ҵ��ˣ��±�Ϊ��%d", mid);
//	else
//		printf("�Ҳ���");
//	return 0;
//}
int main()
{
	int arr[] = { 3, 4, 5, 6.7, 1, 2, 9, 8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int max = 0;
	for (int i = 0; i < sz-1; i++)
	{
		for (int j = 0; j<sz - i - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				max = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = max;
			}
		}
		
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//int main()//��һ���������в���ĳ���������
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//			printf("�ҵ���");
//	}
//	return 0;
//
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "*****";
//	int left = 0;
//	int reight = strlen(arr1) - 1;
//	while (left <= reight)
//	{
//		arr2[left] = arr1[left];
//		arr2[reight] = arr1[reight];
//		left++;
//		reight--;
//		printf("%s\n", arr2);
//	}
//	
//	return 0;
//}