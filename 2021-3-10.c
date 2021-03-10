#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main()
{
	int arr[10];
	int*p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));//��ӡ������Ϣ
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
		//�ռ䲻�������ӿռ�
		int* ptr = (int*)realloc(p, 80);//�����ռ��С
		if (ptr != NULL)
		{
			p = ptr;
		}
		for (int i = 0; i < 20; i++)
		{
			printf("%d ", *(p + i));
		}
		//�ͷ�
		free(p);
		p = NULL;
	}
	return 0;
}

//malloc���ٵĿռ䲻��ʼ��   ����ֻ��һ��
//calloc���ٵĿռ��ʼ��   ������2��
//int main()
//{
//	int arr[10] = { 0 };//��ջ��������40���ֽڵĿռ�
//	//��̬�ڴ濪���ڶ���
//	int * p = (int*)malloc(40);//ϣ����40���ֽڵ���10����������
//	if (p == NULL)
//	{
//		printf("�ڴ濪��ʧ��\n");
//	}
//	else
//	{
//		//���ٳɹ�
//		for (int i = 0; i < 10; i++)
//		{
//			*(p + i) = 0;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	free(p);//�ͷ�p
//	p = NULL;//��p��Ϊ��ָ��
//	return 0;
//}
//1.��NULLָ������ò���
int main()
{
	int* p = (int*)malloc(INT_MAX);
	//p�п���ΪNULLָ�룬��ΪNULL��ʱ��*p���ǷǷ������ڴ�
	*p = 0;
	return 0;
}
//2.�Զ�̬���ٿռ�Խ�����
int main()
{
	int arr[10];
	int*p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));//��ӡ������Ϣ
	}
	else
	{
		for (int i = 0; i <=10; i++)
		{
			printf("%d ", *(p + i));//��IΪ10ʱ��Խ�����
		}
	}
	free(p);
	p = NULL;
	return 0;
}
//3.�ԷǶ�̬�����ڴ�ʹ��free
int main()
{
	int a = 10;
	int* p = &a;
	free(p);
}
//ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
int main()
{
	int* p = (int*)malloc(100);
	p++;
	free(p);
}
//5.��ͬһ�鶯̬�ڴ����ͷ�
int main()
{
	int* p = (int*)malloc(100);
	free(p);
	free(p);
}