#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>//�������
//int main()
//{
//	int n = 0;
//	int arr[15][15];
//	scanf("%d", &n);
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d    ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include<stdio.h>//������
//int main()
//{
//	int arr[5][5];
//	for (int i = 0; i<3; i++)
//	{
//		for (int j = 0; j<3; j++)
//		{
//			scanf("%c ", &arr[i][j]);
//		}
//	}
//	char tag = '0';
//	for (int i = 0; i<3; i++)
//	{
//		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
//		{
//			tag = arr[i][0];
//			break;
//		}
//		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
//		{
//			tag = arr[0][i];
//			break;
//		}
//	}
//	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
//	{
//		tag = arr[0][0];
//	}
//	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
//	{
//		tag = arr[1][1];
//	}
//	if (tag == 'K')
//		printf("KiKi wins!\n");
//	else if (tag == 'B')
//		printf("BoBo wins!\n");
//	else
//		printf("No winner!\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char chess[3][3];
//	int i, j;
//	for (i = 0; i < 3; i++)
//	for (j = 0; j < 3; j++)
//	{
//		chess[i][j] = getchar();
//		getchar();
//	}
//	char tag = 'O';
//	for (i = 0; i < 3; i++)
//	{
//		if (chess[i][0] == chess[i][1] && chess[i][1] == chess[i][2])
//		{
//			tag = chess[i][0];
//			break;
//		}
//		if (chess[0][i] == chess[1][i] && chess[1][i] == chess[2][i])
//		{
//			tag = chess[0][i];
//			break;
//		}
//	}
//	if (chess[0][0] == chess[1][1] && chess[1][1] == chess[2][2])
//		tag = chess[0][0];
//	if (chess[0][2] == chess[1][1] && chess[1][1] == chess[2][0])
//		tag = chess[1][1];
//	if (tag == 'K')
//		printf("KiKi wins!\n");
//	else if (tag == 'B')
//		printf("BoBo wins!\n");
//	else
//		printf("No winner!\n");
//}
//#include<stdio.h>//������ת��
//int main()
//{
//	int n, i = 0;
//	int a[100];
//	scanf("%d", &n);
//	while (n >= 6)
//	{
//		a[i] = n % 6;
//		a[i + 1] = n / 6;
//		n = n / 6;
//		i++;
//	}
//	for (int j = i; j >= 0; j--)
//	{
//		printf("%d", a[j]);
//	}
//	return 0;
//}
//#include<stdio.h>//���
//int main()
//{
//	long int n;
//	scanf("%ld", &n);
//	printf("%ld", ((1 + n)*n) / 2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	long int i, n, sum;
//	scanf("%ld", &n);
//	sum = 0l;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%ld", sum);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int hour, min, k = 0;
	scanf("%d:%d %d", &hour, &min, &k);
	if (k >= 60)
	{
		hour = hour + (k % 60);
	}
	else if ((k + min) >= 60)
	{
		hour = hour + (k + min) % 60;
	}
	else
		min = min + k;
	printf("%d:%d", hour, min);
	return 0;
}
#include<stdio.h>//������
int main()
{
	int hour, min, k = 0;
	scanf("%d:%d %d", &hour, &min, &k);
	hour = (hour + (min + k) / 60) % 24;
	min = (min + k) % 60;
	printf("%02d:%02d", hour, min);
	return 0;
}
#include<stdio.h>//�ŵ���
int main()
{
	int n = 0;
	int sum = 0;
	scanf("%d", &n);
	sum = n / 12;
	sum *= 4;
	sum += 2;
	printf("%d\n", sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int n, m = 0;
	scanf("%d %d", &n, &m);
	int a = (n>m ? n : m);
	int b = (n>m ? n : m);
	int tmp = 0;
	while (b != 0)
	{
		a = a%b;
		tmp = a;
		a = b;
		b = tmp;
	}
	printf("%d\n", ((n*m) / a) + a);
	return 0;
}
#include <stdio.h>//ŷ�����
int main(void)
{
	long n, m;
	scanf("%ld %ld", &n, &m);

	// �ٶ�һ��ŷ������㷨���ó����Լ�������� a ��
	long a = (n > m ? n : m), b = (n > m ? m : n), temp = 0;
	while (b != 0)
	{
		a %= b;
		temp = a;
		a = b;
		b = temp;
	}

	// �������Լ�������ǿ���ͨ���ٶȴ����е���С����������֪����ʽ��
	// �����������ĳ˻������������������Լ������С�������Ļ���
	// �����Ѿ�ͨ��ŷ������㷨������Լ�� a ��
	// n * m / a ���������С��������Ȼ�� + a ���Ǵ���
	printf("%ld\n", ((n * m) / a) + a);
	return 0;
}
#include <stdio.h>
int main(void)
{
	long n, m;
	scanf("%ld %ld", &n, &m);
	long a = (n > m ? n : m), b = (n > m ? m : n), temp = 0;
	while (b != 0)
	{
		a = a%b;
		temp = a;
		a = b;
		b = temp;
	}
	printf("%ld\n", ((n * m) / a) + a);
	return 0;
}
#include<stdio.h>//������
#include<string.h>
int main(){
	char n[10];
	int f = 0;
	while (scanf("%s", &n) != EOF){
		for (int i = 0; i<strlen(n); i++){
			if (n[i] % 2 == 0 && f == 0)continue;
			else f = 1;
			printf("%d", n[i] % 2 == 0 ? 0 : 1);
		}
	}
	return 0;
}
