#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("score1=%d,score2=%d,score3=%d", a, b, c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	long a = 0;
//	float b, c, d;
//	scanf("%ld;%f,%f,%f", &a, &b, &c, &d);
//	printf("The each subject score of  No. %ld is %.2f, %.2f %.2f.", a, b, c, d);
//	return 0;
//}
//#include<stdio.h>//打印金字塔
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	for (int i = 1; i <= 5; i++)
//	{
//		for (int j = 5 - i; j>0; j--)
//		{
//			printf(" ");
//		}
//		for (int k = 1; k <= i; k++)
//		{
//			printf("%d ", a);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>//ASCII码
//int main()
//{
//	char strings[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	printf("%s", strings);
//	return 0;
//}
//#include<stdio.h>//出生日期输入输出
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d %2d %2d", &year, &month, &date);
//	printf("year=%4d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}
//#include<stdio.h>//交换两个数
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int temp = a;
//	a = b;
//	b = temp;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//#include<stdio.h>//字符转ascii
//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	printf("%d", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int sum = (-8 + 22)*a - 10 + c / 2;
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a / b, a%b);
//	return 0;
//}
#include<stdio.h>//反向输出4位数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d", a += a *= a -= a / 3);
//	return 0;
//}
#include<assert.h>
//char exchange(char* arr)
//{
//	assert(arr != NULL);
//	int i = 0;
//	char ret = arr;
//	while (arr[i] != '\0')
//	{
//		if (arr[i] == " ")
//		{
//			arr[i] = "%20";
//		}
//		i++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[] = "abc defgx yz";
//	char ret = exchange(arr);
//	printf("%c\n", ret);
//	return 0;
//}
void replacespace(char* str, int len)//实现一个函数，将一个字符串中的空格替换成“ % 20”
{
	char* dest = str;
	int n = 0;
	int i = 0;
	for (i = 0; i < len; i++)//算有几个空格
	{
		if (str[i] == ' ')
			n++;
	}
	int j = len + n * 2 - 1;
	for (i = len - 1; i >= 0; i--)
	{
		if (dest[i] == ' ')
		{
			str[j--] = '0';
			str[j--] = '2';
			str[j--] = '%';
		}
		else
		{
			str[j--] = dest[i];
		}
	}
}
int main()
{
	char arr[100] = "abc defgx yz";
	replacespace(arr, strlen(arr));
	return 0;
}

