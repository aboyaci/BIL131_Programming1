/*
   fahrenheit to celcius table
*/

#include <stdio.h>

int main()
{
	int i;
	float fahrenheit = 0;

	for(i=0;i<100;i++)
	{
		fahrenheit = 1.8 * i + 32;

		printf("%d(c) = %.2f(f)\n", i, fahrenheit);
	}

	return 0;
}