/*
   Calculate days between two dates

*/

#include <stdio.h>

int days[] = {31, 28, 31, 30 ,31, 30, 31, 31, 30, 31, 30, 31};

int days_since_jan_1(int m, int d)
{
	int tmp = d-1;
	int i;

	for (i=0; i<m-1; i++)
		tmp += days[i];

	return tmp;	
}

int date_diff(int y1, int m1, int d1, int y2, int m2, int d2)
{
	int days1, days2, leap_days, total_days;

	days1 = days_since_jan_1(m1, d1);
	days2 = days_since_jan_1(m2, d2);

	/* if year is y%400=0 it is leap year, y%100=0 is not leap, y%4=0 is leap*/
	leap_days = (y1/4 - y1/100 + y1/400) - (y2/4 - y2/100 + y2/400);

	total_days = (y1 - y2)*365 + leap_days + (days1-days2);

	return total_days;
}

int main()
{
	int d1 = 31;
	int m1 = 10;
	int y1 = 2016;

	int d2 = 22;
	int m2 = 04;
	int y2 = 1985;

	printf("there are %d days between %d/%d/%d and %d/%d/%d\n", date_diff(y1, m1, d1, y2, m2, d2), y1, m1, d1, y2, m2, d2);

	return 0;
}