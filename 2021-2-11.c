#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>//变种水仙花
//int main()
//{
//	int i ;
//	for (i = 10000; i<100000; i++)
//	{
//		if (i == ((i / 10000)*(i % 10000)) + ((i / 1000)*(i % 1000)) + ((i / 100)*(i % 100)) + ((i / 10)*(i % 10)))
//			printf("%d ", i);
//	}
//}
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d\n", &n);
	int a[40] = { 0 };
	for (int i = 1; i <= n; i++)
	{
		scanf("%d ", &a[n]);
	}
	int m = 0, index = 0;
	for (int i = 1; i<=5; i++)
	{
		for (int j = 0; j<n; j++)
		{
			if (a[j]>m)
			{
				m = a[j];

			}
		}
		printf("%d ", m);
		m = 0;
	}
	return 0;
}