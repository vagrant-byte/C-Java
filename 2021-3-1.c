#define _CRT_SECURE_NO_WARNINGS 1 
//������a�е�k����С������
//#define row 10
//#include<stdio.h>
//int main()
//{
//	int a[row] = { 0 };
//	for (int i = 0; i < row; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int k = 0;
//	scanf("%d", &k);
//	int min = 0;
//	for (int j = 0; j < row; j++)//ð������ ��С������������
//	{
//		for (int i = row - 1; i>=j+1; i--)
//		{
//			if (a[i - 1]>a[i])
//			{
//				min = a[i];
//				a[i] = a[i - 1];
//				a[i - 1] = min;
//			}
//		}
//	}
//	int count = 0;
//	while (count != k)
//	{
//		count++;
//	}
//	printf("%d", a[k - 1]);
//	return 0;
//}
//��°ͺղ��� ÿ����С��6��ż����������������֮��
int isprime(int x)
{
	for (int i = 2; i <= x - 1; i++)
	{
		if (x%i == 0)
			return 0;
		return 1;
	}
}
void even(int n)
{
	for (int i = 2; i < n - 1; i++)
	{
		if (isprime(i) && isprime(n - i))
		{
			printf("%d=%d+%d\n", n, i, n -i);
		}
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n % 2 == 0)
		even(n);
	return 0;
}