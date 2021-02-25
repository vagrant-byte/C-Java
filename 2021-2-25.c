#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>//阶乘求和
int main()
{
	int n = 0;
	int sum = 1;
	int sums =0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum = sum*i;
		sums += sum;
	}
	printf("%d", sums);
	return 0;
}
#include<stdio.h>
float max3(int a, int b, int c)
{
	int max = a;
	if (max<b)
		max = b;
	if (max<c)
		max = c;
	return max;
}
int main()
{
	int a, b, c;
	float m = 0;
	scanf("%d %d %d", &a, &b, &c);
	m = max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c));
	printf("%.2f\n", m);
	return 0;
}
#include<stdio.h>
float max3(int a, int b, int c)
{
	int max = a>b ? a : b;
	max = max>c ? max : c;

	return max;
}
int main()
{
	int a, b, c;
	float m = 0;
	scanf("%d %d %d", &a, &b, &c);
	m = max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c));
	printf("%.2f\n", m);
	return 0;
}
#include<stdio.h>//查找数字
int main()
{
	int n = 0;
	int a[105];
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d ", &a[i]);
	}
	int x = 0;
	scanf("%d", &x);
	int count = 0;
	for (int i = 0; i<n; i++)
	{
		if (a[i] == x)
			count++;
	}
	printf("%d", count);
	return 0;
}
#include<stdio.h>//转义字符
int main()
{
	printf("printf(\"Hello world!\\n\");\n");
	printf("cout << \"Hello world!\" << endl;\n");
	return 0;
}