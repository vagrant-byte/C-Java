#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//���0��100000֮������С�ˮ�ɻ������������
//
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
int my_strlen(int n)
{
	int count = 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return count;
}
int fun(int m, int n)
{
	if (n != 0)
		return m*fun(m, n - 1);
	else
		return 1;
}
int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 0; i < 100000; i++)
	{
		int len = my_strlen(i);//�����м�����
		int m = i % 10;
		int res = fun(m, len);//����ÿ�����Ĵη�
		m = m / 10;
		sum += res;
	}
	if (sum = i);
	printf("%d\n", i);
	return 0;
}
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total =0;
//	int emply = 0;
//	total += money;
//	emply = money;
//	while (emply >= 2)
//	{
//		total += emply / 2;
//		emply = emply / 2 + emply % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}