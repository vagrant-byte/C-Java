#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//int StrToInt(char *str)
//{
//	long number = 0;
//	int flag = 1;  
//	if (NULL == str)
//	{
//		printf("str is NULL");
//		return 0;
//	}
//	while (*str == ' ')  
//	{
//		str++;
//	}
//	if (*str == '-')      
//	{
//		flag = -1;
//		str++;      
//	}
//	while ((*str >= '0') && (*str <= '9'))//转化  
//	{
//		number = number * 10 + *str - '0';
//		str++;
//	}
//	return flag*number;
//}
//
//int main()
//{
//	char* str = "-123456";
//	int tmp = StrToInt(str);
//	printf("%d",tmp);
//	return 0;
//}
//#include<stdio.h>
//void find_two_diff_num(int arr[], int sz, int *p1, int *p2)
//{
//	int i = 0;//循环变量
//	int ret = 0;
//	int pos = 0;
//	*p1 = 0;//数字1的地址
//	*p2 = 0;//数字2 的地址
//	//1.把所有数字异或 
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];//循环到最后一次的结果是5^6,即就是101^110=011
//	}
//	//2.找ret二进制中为1的一位
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)//上一步两个数异或的后两位为1
//		{
//			pos = i;
//			break;
//		}
//	}
//	//分组
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			(*p1) ^= arr[i];
//		}
//	}
//	(*p2) = (*p1) ^ ret;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 1, 2, 3, 4, 5, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组大小
//	int num1 = 0;//数字1
//	int num2 = 0;//数字2
//	find_two_diff_num(arr, sz, &num1, &num2);
//	printf("num1=%d,num2=%d\n", num1, num2);
//	return 0;
//}
//#include<stdio.h>
//void Find(int arr[], int len)
//{
//	int num1 = 0;
//	int num2 = 0;
//	int ret = 0;
//	int n = 0;
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	for (n = 0; n < 32; n++)
//	{
//		if ((ret >> n) & 1 == 1)
//			break;
//	}
//	for (i = 0; i < len; i++)
//	{
//		if ((arr[i] >> n) & 1 == 1)
//			num1 = num1 ^ arr[i];
//		else
//			num2 = num2 ^ arr[i];
//	}
//	printf(" num1=%d\n num2=%d\n", num1, num2);
//}
//void main()
//{
//	int a[] = { 1, 2, 3, 3, 2, 1, 4, 5 };
//	int len = sizeof(a) / sizeof(a[0]);
//	Find(a, len);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pFilc;
//	pFilc = fopen("myfile.txt", "w");
//	if (pFilc != NULL)
//	{
//		fputs("fopen example", pFilc);
//		fclose(pFilc);
//	}
//	return 0;
//}
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("example.txt", "wb");
//	fputs("this is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	return 0;
//}
//int main()//fseek根据文件指针位置和偏移量来定位文件指针
//{
//	FILE* pFile;
//	long size;
//	pFile = fopen("myfile.txt", "rb");
//	if (pFile == NULL)
//		perror("Error opening file");
//	else
//	{
//		fseek(pFile, 0, SEEK_END);
//		size = ftell(pFile);
//		fclose(pFile);
//		printf("size of myfile.txt:%ld bytes.\n", size);
//	}
//	return 0;
//}
int main()
{
	int n = 0;
	FILE* pFile;
	char buffer[27];
	pFile = fopen("myfile.txt", "w+");
	for (n = 'A'; n <= 'Z'; n++)
	{
		fputc(n, pFile);
	}
	fread(buffer, 1, 26, pFile);
	fclose(pFile);
	buffer[26] = '\0';
	puts(buffer);
	return 0;
}