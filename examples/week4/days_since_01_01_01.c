/*
   Calculate days since 01.01.01

   Assume 
	- every month has 30 days
	- every year has 365 days
	- no leap year
*/

#include <stdio.h>

int days_since_01_01_01(int y, int m, int d)
{
	return 365*y + 30*m + d;
}

int main()
{
	int d = 31;
	int m = 10;
	int y = 2016;

	printf("today is %d/%d/%d and %d days has been passed since 01.01.01\n", d, m, y, days_since_01_01_01(y, m, d));
}