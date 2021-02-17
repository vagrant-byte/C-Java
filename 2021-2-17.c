#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>//筛选法求素数
//#define N 100
//int main()
//{
//	int a = 0;
//	int arr[N];
//	int count = 0;
//	while (~scanf("%d", &a))
//	{
//		for (int i = 2; i <= a; i++)
//		{
//			arr[i] = i;
//		}
//		for (int i = 2; i <= a; i++)
//		{
//			for (int j = i + 1; j <= a; j++)
//			{
//				if (j%i == 0)
//				{
//					arr[j] = 0;
//				}
//			}
//		}
//		for (int i = 2; i <= a; i++)
//		{
//			if (arr[i] != 0)
//			{
//				printf("%d ", arr[i]);
//			}
//			else
//				count++;
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}
//#include<stdio.h>//图形相似度
//int main()
//{
//	int m, n = 0;
//	double some = 0;
//	scanf("%d %d", &m, &n);
//	int a[m][n], b[m][n];
//	int i, j;
//	for (i = 0; i<m; i++)
//	{
//		for (j = 0; j<n; j++)
//	{
//			scanf("%d ", a[i][j]);
//		}
//	}
//	for (i = 0; i<m; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			scanf("%d ", b[i][j]);
//		}
//	}
//	for (i = 0; i<m; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (a[i][j] == b[i][j])
//				some++;
//		}
//	}
//	float d = some / (m*n) * 100;
//	printf("%.2f", d);
//	return 0;
//}
//#include<stdio.h>//登陆验证
//#include<string.h>
//int main()
//{
//	char usr[] = "admin", pwd[] = "admin";
//	char usrin[10], pwdin[10];
//	while (~scanf("%s %s", &usrin, &pwdin))
//	{
//		if (!(strcmp(usrin, usr) || strcmp(pwdin, pwd)))
//			printf("Login Success!\n");
//		else
//			printf("Login Fail!\n");
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int result = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		int t = i;
//		while (t>0)
//		{
//			if (t % 10 == 9)
//			{
//				result++;
//				break;
//			}
//			t = t / 10;
//			printf("%d", result);
//		}
//
//	}
//	return 0;
//}
//#include<stdio.h>//包含数字9的数
//int main()
//{
//	int i = 0;
//	int result = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		int t = i;
//		while (t > 0)
//		{
//			if (t % 10 == 9)
//			{
//				result++;
//				break;
//			}
//			t = t / 10;
//		}
//	}
//	printf("%d", result);
//	return 0;
//}
//#include<stdio.h>//奇偶统计
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int s1 = 0;
//	int s2 = 0;
//	for (int i = 0; i<N; i++)
//	{
//		if (i % 2 == 0)
//			s1++;
//		else
//			s2++;
//	}
//	printf("%d %d", s1, s2);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n = 0;
	float max = 0;
	float min = 100;
	float sum = 0;
	scanf("%d", &n);
	float a[101];
	for (int i = 0; i<n; i++)
	{
		scanf("%f", a[i]);
		sum = sum + a[i];
		if (max<a[i])
		{
			max = a[i];
		}
		else if (min>a[i])
		{
			min = a[i];
		}
	}
	printf("%.2f %.2f %.2f", max, sum / n, min);
	return 0;
}
#include<stdio.h>//统计成绩
int main()
{
	int n = 0;
	float max = 0;
	float min = 100;
	float sum = 0;
	float i = 0;
	scanf("%d", &n);
	int m = n;
	while (n--)
	{
		scanf("%f", &i);
		sum = sum + i;
		if (max<i)
		{
			max = i;
		}
		if (min>i)
		{
			min = i;
		}
	}
	float avg = sum / m;
	printf("%.2f %.2f %.2f", max, min, avg);
	return 0;
}