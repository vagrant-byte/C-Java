#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>//竟选社长
//int main()
//{
//	char ch = 0;
//	int a_count = 0;
//	int b_count = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (ch == '0')
//			break;
//		if (ch == 'A')
//			a_count++;
//		if (ch == 'B')
//			b_count++;
//	}
//	if (a_count == b_count)
//		printf("E\n");
//	else if (a_count>b_count)
//		printf("A\n");
//	else
//		printf("B\n");
//	return 0;
//}
//#include<stdio.h>//你是天才吗
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a >= 140)
//			printf("Genius");
//	}
//	return 0;
//}
//#include<stdio.h>//完美成绩
//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num) != EOF){
//		if (num >= 90 && num <= 100)
//			printf("Perfect");
//	}
//	return 0;
//}
//#include<stdio.h>//及格成绩
//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num) != EOF)
//	{
//		if (num >= 60)
//			printf("Pass\n");
//		else
//			printf("Fail\n");
//	}
//	return 0;
//}
//#include<stdio.h>//判断奇偶性
//int main()
//{
//	int a = 0;
//	while (scanf("%d\n", &a) != EOF)
//	{
//		if (a % 2 == 0)
//			printf("Even\n");
//		else
//			printf("Odd\n");
//	}
//	return 0;
//}
//#include<stdio.h>//最高分数
//int main()
//{
//	int a, b, c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if (a >= b&&a >= c)
//			printf("%d\n", a);
//		else if (b >= a&&b >= c)
//			printf("%d\n", b);
//		else
//			printf("%d\n", c);
//	}
//
//	return 0;
//}
#include<stdio.h>//判断元辅音
int main()
{
	char ch = 0;
	while (scanf("%c\n", &ch) != EOF)
	{
		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			printf("Vowel\n");
		else
			printf("Consonant\n");
	}
	return 0;
}
int main() {
	char ch = 0;
	//循环读入字符
	while (scanf("%c", &ch) != EOF) {
		//忽略换行符
		if (ch == '\n')
			continue;
		//统一将字符转换成大写，方便后续判断
		if (ch >= 'a' && ch <= 'z')
			ch -= 32;
		//判断是否为元音字母
		if (ch == 'A' || ch == 'E' || ch == 'I'
			|| ch == 'O' || ch == 'U')
		{
			printf("Vowel\n");
		}
		else
		{
			printf("Consonant\n");
		}
	}
	return 0;
}
#include<stdio.h>//判断是不是字母
int main()
{
	char ch = 0;
	while (scanf("%c", &ch) != EOF)
	{
		getchar();
		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z'))
			printf("%c is an alphabet.\n", ch);
		else
			printf("%c is not an alphabet.\n", ch);
	}
	return 0;
}
#include<stdio.h>//字母大小写转换
int main()
{
	char ch = 0;
	while (scanf("%c", &ch) != EOF)
	{
		getchar();
		if (ch >= 'a'&&ch <= 'z')
			printf("%c\n", ch - 32);
		else
			printf("%c\n", ch + 32);
	}
	return 0;
}
#include<stdio.h>//判断大小
int main()
{
	int a = 0;
	int b = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		if (a == b)
			printf("%d=%d\n", a, b);
		else if (a>b)
			printf("%d>%d\n", a, b);
		else
			printf("%d<%d\n", a, b);
	}
	return 0;
}
#include<stdio.h>//计算单位阶跃函数
int main()
{
	int t = 0;
	while (scanf("%d", &t) != EOF)
	{
		if (t>0)
			printf("1\n");
		else if (t == 0)
			printf("0.5\n");
		else
			printf("0\n");
	}
	return 0;
}