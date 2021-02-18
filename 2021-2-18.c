#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>//ÃÜÂëÅĞ¶Î
//#include<string.h>
//int main()
//{
//	char s1[10] = { 0 };
//	char s2[10] = { 0 };
//	scanf("%s %s", s1, s2);
//	if (0==strcmp(s1,s2))
//	{
//		printf("same");
//	}
//	else
//   {
//	printf("different");
//    }
//		
//		return 0;
//}
//#include<stdio.h>//°®ĞÄ´òÓ¡
//int main(void)
//{
//	float a, x, y;
//	for (y = 1.5f; y>-1.5f; y -= 0.1f)
//	{
//		for (x = -1.5f; x<1.5f; x += 0.05f)
//		{
//			a = x*x + y*y - 1;
//			char ch = a*a*a - x*x*y*y*y <= 0.0f ? '*' : ' ';
//			putchar(ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>//¾ØÕó¼ÆËã
//int main()
//{
//	int n, m, ch[100][100], sum = 0;
//
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<m; j++)
//		{
//			scanf("%d", &ch[i][j]);
//			if (ch[i][j]>0)
//				sum = sum + ch[i][j];
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>//ÊäÈëÊä³ö
//int main()
//{
//	int a[10];
//	for (int i = 0; i<10; i++)
//	{
//		scanf("%d ", &a[i]);
//	}
//	for (int i = 0; i<10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//#include<stdio.h>//ÄæĞòÊä³ö
//int main()
//{
//	int a[10];
//	for (int i = 0; i<10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 9; i >= 0; i--)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a[10];
	int num1 = 0;
	int num2 = 0;
	for (int i = 0; i<10; i++)
	{
		scanf("%d ", &a[i]);
		if (a[i]>0)
		{
			num1++;
		}
		else if (a[i]<0)
		{
			num2++;
		}
	}
	printf("positive:%d\n", num1);
	printf("negative:%d\n", num2);
	return 0;
}