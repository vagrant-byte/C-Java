#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int flag1, flag2 = 0;
//	int ch[100];
//	scanf("%d", &n);
//	for (int i = 0; i<n; i++)
//	{
//		scanf("%d", &ch[i]);
//		if (i>0)
//		{
//			if (ch[i]<ch[i - 1])
//			{
//				flag1 = 1;
//			}
//			else if (ch[i] > ch[i - 1])
//			{
//				flag2 = 1;
//			}
//		}
//	}
//	if (flag1&&flag2)
//		printf("unsorted\n");
//	else
//		printf("sorted\n");
//
//	return 0;
//}
#include <stdio.h>
int main()
{
	int a[55], n, flag1 = 0, flag2 = 0, i;
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
		if (i>0)
		{
			if (a[i]<a[i - 1])
			{
				flag1 = 1;
			}
			else if (a[i]>a[i - 1])
			{
				flag2 = 1;
			}
		}
	}
	if (flag1&&flag2) printf("unsorted\n");
	else printf("sorted\n");
}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int flag1,flag2 = 0;
//	int ch[100];
//	scanf("%d", &n);
//	for ( int i = 0; i<n; i++)
//	{
//		scanf("%d", &ch[i]);
//		if (ch[i]>ch[i + 1]&&ch[i]<ch[i+1])
//		{
//			flag1 = 1;
//		}
//		else if (ch[i] < ch[i + 1])
//		{
//			flag2 = 1;
//		}
//	}
//	if (flag1&&flag2)
//		printf("unsorted\n");
//	else
//		printf("sorted\n");
//	
//	return 0;
//}
////#include<stdio.h>
////int main()
////{
////	int n = 0;
////	int ch[100];
////	int flag = 0;
////	scanf("%d", &n);
////	for (int i = 0; i<n; i++)
////	{
////		scanf("%d", &ch[i]);
////		if (ch[i]>ch[i + 1] || ch[i] < ch[i + 1])
////		{
////			flag = 1;
////		}
////		else
////			flag = 2;
////	}
////	if (flag=1)
////		printf("sorted\n");
////	else if (flag=2)
////		printf("unsorted\n");
////	return 0;
////}
#include <stdio.h>
int main()
{
	int a[55], n, i, x;
	scanf("%d", &n);
	for (i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);
	for (i = n; i>0; i--)
	{
		if (a[i - 1] >= x)
		{
			a[i] = a[i - 1];
		}
		else
		{
			a[i] = x;
			break;
		}
	}
	if (i == 0) a[i] = x;
	for (i = 0; i <= n; i++){
		if (i == n) printf("%d\n", a[i]);
		else printf("%d ", a[i]);
	}
}