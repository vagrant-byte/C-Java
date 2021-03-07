#define _CRT_SECURE_NO_WARNINGS 1 
#define MAX_SIZE 5
#include<stdlib.h>
#include<stdio.h>
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//int main()
//{
//	struct _Record_Struct *pointer = (struct _Record_Struct*)malloc
//		(sizeof(struct _Record_Struct) * MAX_SIZE);
//	return 0;
//}

//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s, a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//int check_sys()//联合体大小端判断
//{
//	union U
//	{
//		char c;
//		int i;
//	}u1;
//	u1.i = 1;
//	return u1.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//struct stu//声明结构体类型
//{
//	char nam[20];//姓名
//	int age;//年龄
//	char sex[5];//性别
//};
//int main()
//{
//	struct stu s1= { "zhangsan", 20, "nan" };//结构体初始化
//	printf("%s %d %s", s1.nam, s1.age, s1.sex);//访问结构体变量元素
//	return 0;
//}
//struct s1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s1));
//	return 0;
//}
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//}
//union Un
//{
//	int i;
//	char c;
//}un;
//int main()
//{
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//}
union Un1
{
	char c[5];
	int i;
};
union Un2
{
	short c[7];
	int i;
};
int main()
{
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
	return 0;
}