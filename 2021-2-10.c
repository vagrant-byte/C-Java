#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>//kiki和酸奶
//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	while (scanf("%d %d %d", &n, &h, &m) != EOF)
//	{
//		if (m%h == 0)
//			printf("%d", n - m / h);
//		else
//			printf("%d", n - m / h - 1);
//	}
//	return 0;
//}
//#include<stdio.h>进制A+B
//int main()
//{
//	int a, b = 0;
//	scanf("%x %o", &a, &b);//分别16进制和8进制输入
//	printf("%d", a + b);//10进制打印
//	return 0;
//}
//#include<stdio.h>//判断字母
//int main()
//{
//	char a = 0;
//	while (scanf("%c", &a) != EOF)
//	{
//		getchar();
//		if ((a >= 'A'&&a <= 'Z') || (a >= 'a'&&a <= 'z'))
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}
#include<stdio.h>//健康评估
int main()
{
	float weight = 0.0;
	float height = 0.0;
	scanf("%f %f", &weight, &height);
	float ibm = weight / (height*height);
	if (18.5 <= ibm && ibm<= 23.9)
		printf("Normal");
	else
		printf("Abnormal");
	return 0;
}
int main()//网购
{
	double n = 0.0;
	int m = 0;
	int d = 0;
	int s = 0;
	scanf("%lf %d %d %d", &n, &m, &d, &s);
	if (m == 11 && d == 11)
	{
		if (n >= 50)
		{
			if (s = 1)
				printf("%.2lf", n*0.7 - 50);
			else
				printf("%.2lf", n*0.7);
		}
	}
	else if (m == 12 && d == 12)
	{
		if (n >= 50)
		{
			if (s == 1)
				printf("%.2lf", n*0.8 - 50);
			else
				printf("%.2lf", n*0.8);
		}
	}
	else
		printf("%.2lf", n);
	return 0;
}
int main() {
	double price = 0.0;
	int month = 0, day = 0, dz = 0;
	//读入输入的数据
	scanf("%lf %d %d %d", &price, &month, &day, &dz);
	//是否有折扣
	bool discount = dz == 1 ? true : false;

	if (month == 11 && day == 11) {
		price *= 0.7;
		//判断是否可以用优惠券，双十二同理，同时要判断价格不能低于50
		if (price >= 50.)
			printf("%.2lf\n", discount ? price - 50 : price);
		else
			printf("0.00\n");
	}
	else if (month == 12 && day == 12) {
		price *= 0.8;
		if (price >= 50.)
			printf("%.2lf\n", discount ? price - 50 : price);
		else
			printf("0.00\n");
	}
	else {
		//没有折扣，正常输出
		printf("%.2lf\n", price);
	}
	return 0;
}
