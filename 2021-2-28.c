#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
	int arr[50005];
	int a, b = 0;
	for (int i = 0; i < 50000; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i]>arr[i + 1])
			a = 1;
		if (arr[i] < arr[i + 1])
			b = 1;
	}
	if (a + b == 2)
		printf("turn\n");
	else
		printf("false\n");

	
	return 0;
}
class Solution {           //不使用加减乘除实现求和
public:
	int Add(int num1, int num2) {
		if (num1>0)
		{
			while (num1-- != 0)
				num2++;
		}
		else if (num1<0)
		{
			while (num1++ != 0)
				num2--;
		}
		return num2;
	}
};