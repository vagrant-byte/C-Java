#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	for (n = 1; n<100000; n++)
//	{
//		int count = 0;
//		while (n > 0)
//		{
//			n = n / 10;
//			count++;
//		}
//		int num = 0;
//		printf("%d", count);
//		int sum = 0;
//		while (n > 0)
//		{
//			int num = n % 10;
//			n = n / 10;
//			for (int i = count; i > 0; count--)
//			{
//				num = num * 1;
//			}
//			sum = sum + num;
//		}
//		if (n = sum)
//			printf("%d\n", n);
//	}
//	return 0;
//}
int fun(int m, int n)// ����m��n�η�
{
	if (n != 0)
		return m * fun(m, n - 1);
	else
	{
		return 1;
	}
}
int main()
{
	int i = 0;
	for (i = 1; i<100000; i++)//����Ҳ�����޸ķ�Χi<()
	{
		int tmp = i;
		int n = 0;//���㵱ǰtmp��λ��n
		while (tmp)
		{
			tmp = tmp / 10;
			n++;
		}
		int sum = 0;	//���
		tmp = i;//���½�tmp��ֵi
		while (tmp)
		{
			int m = tmp % 10;//m���浱ǰm�ĸ�λ��
			int res = fun(m, n);//���ú�������ÿ�����Ĵη�
			tmp /= 10;//tmp����
			sum += res;//�������Ĵη���
		}
		//�ж�
		if (sum == i)
			printf("%d\n", i);
	}
}