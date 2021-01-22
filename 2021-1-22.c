#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()//输出一年中某月有多少天
{
	int year = 0, month = 0;
	while (scanf("%d %d", &year, &month) != EOF){
		int february = 0;
		if ((year % 100 != 0 && year % 4 == 0) || (year % 100 == 0 && year % 400 == 0)){//闰月
			february = 29;
		}
		else{//平年
			february = 28;
		}
		switch (month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31\n");
			break;
		case 2:
			printf("%d\n", february);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30\n");
			break;
		}
	}
	return 0;
}