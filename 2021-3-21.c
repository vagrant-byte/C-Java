#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int F1 = 0;
//	int F2 = 1;
//	int F3 = 0;
//	int n = 0;
//	scanf("%d", &n);
//	while (1)
//	{
//		if (n == F2)
//		{
//			printf("%d", 0);
//			break;
//		}
//		else if (n < F2)
//		{
//			if (abs(F1 - n) < abs(F2 - n))
//				printf("%d", abs(F1 - n));
//			else
//				printf("%d", abs(F2 - n));
//			break;
//		}
//		F3 = F1 + F2;
//		F1 = F2;
//		F2 = F3;
//	}
//	return 0;
//}
char* exchange(char* str, int len)
{
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			count++;
	}
	int newlen = len + 2 * count;
	int pos = newlen - 1;
	for (int i = len-1; i>=0; i--)
	{
		if (str[i] == ' ')
		{
			str[pos--] = '0';
			str[pos--] = '2';
			str[pos--] = "%";
		}
		else
			str[pos--] = str[i];
	}
	return str;
}
int main()
{
	char str[30] = "we are happy.";
	int len = strlen(str);
	exchange(str, len);
	printf("%c",str);
	return 0;
}