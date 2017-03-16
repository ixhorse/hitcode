/*日期转换*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int DayofYear(int year, int month, int day);
int MonthDay(int year, int yearDay, int *pMonth, int *pDay);

int dayTab[2][13] = { {0,31,28,31,30,31,30,31,31,30,31,30,31},
					 {0,31,29,31,30,31,30,31,31,30,31,30,31 } };

int main()
{
	int year, month, day, yearDay;
	int c;
	scanf("%d", &c);
	switch(c) {
		case 1:
			printf("Enter year, month, day:");
			scanf("%d,%d,%d", &year, &month, &day);
			yearDay = DayofYear(year, month, day);
			printf("yearDay = %d\n", yearDay);
			break;
		case 2:
			printf("Enter year, yearDay:");
			scanf("%d,%d", &year, &yearDay);
			MonthDay(year, yearDay, &month, &day);
			printf("month = %d, day=%d\n", month, day);
			break;
		case 3:
			exit(0);
		default:
			printf("input error.\n");
			break;
	}
	return 0;
}

int DayofYear(int year, int month, int day)
{
	int i, leap;
	leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	for (i = 0; i < month; i++) {
		day = day + dayTab[leap][i];
	}
	return day;
}

int MonthDay(int year, int yearDay, int *pMonth, int *pDay)
{
	int i, leap;
	leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	for (i = 1; i < 13; i++)
	{
		if (yearDay - dayTab[leap][i] > 0)
			yearDay -= dayTab[leap][i];
		else {
			*pMonth = i;
			*pDay = yearDay;
			break;
		}
	}
}