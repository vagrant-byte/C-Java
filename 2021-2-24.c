#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>//最高分
//int main()
//{
//    int a,b,c=0;
//    scanf("%d %d %d",&a,&b,&c);
//    int max=0;
//    max=max>a?max:a;
//    max=max>b?max:b;
//    max=max>c?max:c;
//    printf("%d",max);
//    return 0;
//}
int main()
{
	int a, b, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	int max = a;
	if (max<b)
		max = b;
	if (max<c)
		max = c;
	printf("%d", max);
	return 0;
}
#include<stdio.h>//素数
int main()
{
	int s = 0;
	for (int i = 100; i<1000; i++)
	{
		for (int j = i - 1; j>1; j--)
		{
			if (i%j == 0)
				break;
			if (j == 2)
				s++;
		}
	}
	printf("%d", s);
	return 0;
}
#include<stdio.h>
int main(){
	int k = 0;
	int i, j;
	for (i = 100; i<1000; i++)
	{
		for (j = 2; j<i; j++)
		{
			if (i%j == 0)
				break;
		}
		if (i == j)k++;
	}
	printf("%d", k);
}
#include<stdio.h>//重整并排序
int main()
{
	int n = 0;
	int a[100];
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i<n; i++)
	{
		for (int j = 1; j<n - i; j++)
		{
			if (a[i] == a[i + j])
				a[i + j] = 0;
		}
	}
	int num = 0;
	for (int i = 0; i<n; i++)
	{
		if (a[i] != 0)
			num++;
	}
	int b[num];
	int j = 0;
	for (int i = 0; i<n; i++)
	{
		if (a[i] != 0)
		{
			b[j] = a[i];
			j++;
		}
	}
	for (int i = 0; i<num - 1; i++)
	{
		for (int j = 0; j<num - i - 1; j++)
		{
			if (b[j]>b[j + 1])
			{
				int t = b[j];
				b[j] = b[j + 1];
				b[j + 1] = t;
			}
		}

	}
	for (int i = 0; i<num; i++)
	{
		printf("%d ", b[i]);
	}

	return 0;
}
#include<stdio.h>//上三角矩阵
int main()
{
	int n = 0;
	int page = 1;
	scanf("%d", &n);
	int a[15][15];
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			scanf("%d ", &a[i][j]);
		}
	}
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			if (i <= j)
			{
				break;
			}
			if (a[i][j] == 0)
			{
				continue;
			}
			else
			{
				page = 0;
				break;
			}
		}
	}
	if (page)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
#include<stdio.h>//结构体和指针
int main()
{
	int n = 0;
	int a[105];
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d ", &a[i]);
	}
	int m = 0;
	int count = 0;
	scanf("%d", &m);
	for (int i = 0; i<n; i++)
	{
		if (a[i] == m)
		{
			a[i] = 0;
		}
		else
			count++;
	}
	printf("%d\n", count);
	for (int i = 0; i<n; i++)
	{
		if (a[i] != 0)
			printf("%d ", a[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int x, y = 0;
	scanf("%d %d", &x, &y);
	int r = 0;
	scanf("%d", &r);
	int l = 0;
	scanf("%d", &l);
	printf("%d\n", x*y);
	printf("%g\n", 3.14*r*r);
	printf("%d\n", l*l);
	return 0;
}