#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if ((a + b) >= 100)
//		printf("%d", (a + b) % 100);
//	else
//		printf("%d", a + b);
//		return 0;
//}
//#include<stdio.h>//浮点数的个位数
//int main()
//{
//	float a = 0.f;
//	scanf("%f", &a);
//	printf("%d", (int)a % 10);
//	return 0;
//}
//#include<stdio.h>//你能活多少秒
//#include<math.h>
//int main()
//{
//	long int age = 0;
//	scanf("%ld", &age);
//	long int m = 3.156*pow(10, 7);
//	printf("%ld", age*m);
//	return 0;
//}
//#include<stdio.h>//时间转化
//int main()
//{
//	int seconds = 0;
//	scanf("%d", &seconds);
//	int h = seconds / 3600;
//	int m = (seconds % 3600) / 60;
//	int s = (seconds % 3660) % 60;
//	printf("%d %d %d", h, m, s);
//	return 0;
//}
//#include<stdio.h>//总成绩平均分计算
//int main()
//{
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	scanf("%f %f %f", &a, &b, &c);
//	printf("%.2f %.2f", a + b + c, (a + b + c) / 3);
//	return 0;
//}
//#include<stdio.h>//计算体重指数
//int main()
//{
//	int weight = 0;
//	int height = 0;
//	scanf("%d %d", &weight, &height);
//	printf("%.2f", weight / (height / 100.f * height / 100.f));
//	return 0;
//}
//#include<stdio.h>//计算三角形周长和面积
//#include<math.h>
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	float cir = a + b + c;
//	float p = cir / 2;
//	float area = sqrt(p*(p - a)*(p - b)*(p - c));
//	printf("circumference=%.2f area=%.2f", cir, area);
//	return 0;
//}
//#include<stdio.h>//计算球的体积
//int main()
//{
//	float r = 0;
//	scanf("%f", &r);
//	float x = 3.1415926;
//	float v = 4.f * x*r*r*r/3.f;
//	printf("%.3f", v);
//	return 0;
//}
//#include<stdio.h>//多组输入 大小写转换
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		getchar();
//		printf("%c\n", ch + 32);
//	}
//	return 0;
//}
#include<stdio.h>//移位操作符实现2的N次方
int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{
		printf("%d\n", 1 << a);
	}
	return 0;
}