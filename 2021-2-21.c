#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>//班级成绩输入输出
//int main()
//{
//	double a[6];
//	double sum = 0;
//	for (int i = 0; i<5; i++)
//	{
//		for (int j = 0; j<5; j++)
//		{
//			scanf("%lf ", &a[j]);
//			sum = sum + a[j];
//		}
//		for (int j = 0; j<5; j++)
//		{
//			printf("%.1lf ", a[j]);
//		}
//		printf("%.1lf\n", sum);
//		sum = 0;
//	}
//	return 0;
//}
//#include<stdio.h>//矩阵元素定位
//int main()
//{
//	int n, m = 0;
//	int x, y = 0;
//	int a[15][15];
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<m; j++)
//		{
//			scanf("%d ", &a[i][j]);
//		}
//	}
//	scanf("%d %d", &x, &y);
//	printf("%d\n", a[x - 1][y - 1]);
//	return 0;
//}
//#include<stdio.h>//序列重组矩阵
//int main()
//{
//	int n, m = 0;
//	int a[15][15];
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<m; j++)
//		{
//			scanf("%d ", &a[i][j]);
//		}
//	}
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<m; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>//最高身高
//int main()
//{
//	int n, m = 0;
//	int tem1, tem2;
//	int a[15][15];
//	int max = 0;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<m; j++)
//		{
//			scanf("%d ", &a[i][j]);
//		}
//	}
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<m; j++)
//		{
//			if (a[i][j]>max)
//			{
//				max = a[i][j];
//				tem1 = i + 1, tem2 = j + 1;
//			}
//		}
//	}
//	printf("%d %d", tem1, tem2);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n, m = 0;
	int a[15][15];
	int b[15][15];
	scanf("%d %d", &n, &m);
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			scanf("%d ", a[i][j]);
		}
	}
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			scanf("%d ", b[i][j]);
		}
	}
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			if (a[i][j] == b[i][j])
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	return 0;
}
int main()//矩阵相等判断
{
	int n, m = 0;
	int flag = 1;
	int a[15][15];
	int b[15][15];
	scanf("%d %d", &n, &m);
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			scanf("%d ", &a[i][j]);
		}
	}
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			scanf("%d ", &b[i][j]);
			if (a[i][j] != b[i][j])
				flag = 0;
		}
	}
	if (flag)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
#include<stdio.h>//上三角矩阵判断
int main()
{
	int n = 0;
	int a[15][15];
	int flag = 1;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			scanf("%d ", &a[i][j]);
			if (i>j&&a[i][j])
			{
				flag = 0;
			}
		}
	}
	if (flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
#include<stdio.h>//矩阵转置
int main()
{
	int n, m = 0;
	int a[15][15];
	scanf("%d %d", &n, &m);
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			scanf("%d ", &a[i][j]);
		}
	}
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
		{
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int n, m, k, t, a, b = 0;
	int arr[15][15];
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			scanf("%d ", &arr[i][j]);
		}
	}
	scanf("%d", &k);
	scanf("&d %d %d", &t, &a, &b);
	for (int i = 0; i<k; i++)
	{
		a--;
		b--;
		if (t == 'r')
		{
			for (int j = 0; j<m; j++)
			{
				int tmp = arr[a][j];
				arr[i][j] = arr[b][j];
				arr[b][j] = tmp;
			}
		}
		else if (t == 'c')
		{
			for (i = 0; i<n; i++)
			{
				int tmp = arr[i][a];
				arr[i][a] = arr[i][b];
				arr[i][b] = t;
			}
		}
	}
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
#include <stdio.h>//矩阵交换
int main()
{
	int a[15][15], b[15][15];
	int i, j, n, m, flag = 1, k;
	scanf("%d%d", &n, &m);
	for (i = 0; i<n; i++){
		for (j = 0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d", &k);
	while (k--){
		char ch;
		getchar();
		ch = getchar();
		int x, y;
		scanf("%d%d", &x, &y);
		x--;
		y--;
		if (ch == 'r'){
			for (j = 0; j<m; j++){
				int t = a[x][j];
				a[x][j] = a[y][j];
				a[y][j] = t;
			}
		}
		else if (ch == 'c'){
			for (i = 0; i<n; i++){
				int t = a[i][x];
				a[i][x] = a[i][y];
				a[i][y] = t;
			}
		}
	}
	for (i = 0; i<n; i++){
		for (j = 0; j<m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}