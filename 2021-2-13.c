#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	if (a = 0)
//	{
//		printf("%d", a - 10);
//	}
//		
//	else
//	{
//		printf("%d", a++);
//	}
//		
//	return 0;
//}
//#include<stdio.h>//衡量人体胖瘦程度
//int main()
//{
//	int weight = 0;
//	int height = 0;
//	float BMI = 0.f;
//	while (scanf("%d %d", &weight, &height) != EOF)
//	{
//		BMI = weight / (height / 100.f*height / 100.f);
//		if (BMI<18.5)
//			printf("Underweight\n");
//		else if (BMI <= 23.9)
//			printf("Normal\n");
//		else if (BMI <= 27.9)
//			printf("Overweight\n");
//		else
//			printf("Obese\n");
//	}
//	return 0;
//}
//#include<stdio.h>//一元二次方程计算
//int main()
//{
//	float a, b, c = 0;
//	while (scanf("%f %f %f", &a, &b, &c) != EOF)
//	{
//		float dot = b*b - 4 * a*c;
//		if (a == 0)
//		{
//			printf("Not quadratic equation\n");
//			continue;
//		}
//		if (dot == 0.0)
//		{
//			float x1 = -b / (2.0*a);
//			printf("x1=x2=%.2f\n", x1, x1);
//		}
//
//		else if (dot<0.0)
//		{
//			float x1 = -b / (2. * a);
//			float x2 = sqrt(-dot) / (2. * a);
//			printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", x1, x2, x1, x2);
//		}
//		else
//		{
//			float x1 = (-b - sqrt(dot)) / (2. * a);
//			float x2 = (-b + sqrt(dot)) / (2. * a);
//			printf("x1=%.2f;x2=%.2f\n", x1, x2);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>//获得月份天数
//int main()
//{
//	int year = 0;
//	int month = 0;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		int normal[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//平年
//		int gap[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//闰年
//		if ((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0))
//		{
//			printf("%d\n", gap[month - 1]);
//		}
//		else
//			printf("%d\n", normal[month - 1]);
//	}
//	return 0;
//}
//#include<stdio.h>//简单计算器
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	char op = 0;
//	while (scanf("%lf %c %lf", &a, &op, &b) != EOF)
//	{
//		if (op != '+'&&op != '-'&&op != '*'&&op != '/')
//		{
//			printf("Invalid operation!\n");
//			continue;
//		}
//		if (op == '+')
//			printf("%.4lf+%.4lf=%.4lf\n", a, b, a + b);
//		else if (op == '-')
//			printf("%.4lf-%.4lf=%.4lf\n", a, b, a - b);
//		else if (op == '*')
//			printf("%.4lf*%.4lf=%.4lf\n", a, b, a*b);
//		else
//		{
//			if (b == 0.0)
//				printf("Wrong!Division by zero!\n");
//			else
//				printf("%.4lf/%.4lf=%.4lf\n", a, b, a / b);
//		}
//	}
//#include<stdio.h>//线段图案
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 0; i<a; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include<stdio.h>//正方行图案
int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i<a; i++)
		{
			for (j = 0; j<a; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}
#include<stdio.h>//直角三角形打印
int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{
		int i = 0;
		int j = 0;
		for (i = 1; i <= a; ++i)
		{
			for (j = 0; j<i; ++j)
			{
				if (j == i - 1)
					printf("*\n");
				else
					printf("* ");
			}
		}
	}
	return 0;
}