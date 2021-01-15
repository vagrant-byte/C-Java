#define _CRT_SECURE_NO_WARNINGS 1 
//计算三角形面积
#include<math.h>
int main()
{
	int a, b, c;
	double s, circumference, area;
	scanf("%d%d%d", &a, &b, &c);
	if (a + b>c&&a + c>b&&b + c>a)
	{
		s = (a + b + c) / 2.0;
		circumference = a + b + c;
		area = sqrt(s*(s - a)*(s - b)*(s - c));
		printf("circumference=%0.2f area=%0.2f", circumference, area);
	}

	return 0;
}
//判断三角形类型
#include<stdio.h>
int main()
{
	int a, b, c;
	while (scanf("%d%d%d", &a, &b, &c) != EOF)
	{
		if (a + b>c&&a + c>b&b + c>a)
		{
			if (a == b == c)
				printf("Equilateral triangle!");
			else
			if (a == b&&a != c || a == c &&a != b || b == c&&b != a)
				printf("Isosceles triangle!");
			else
				printf("Ordinary triangle!");
		}
		else
			printf("Not a triangle!");
	}
	
	return 0;
}
//给定一个整数计算奇数个数和偶数个数
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d", &a);
	for (int i = 0; i < a;i++)
	{
		if (i%2 == 0)
			b++;
		else
			c++;
	}
	printf("%d %d", b, c);

	return 0;
}