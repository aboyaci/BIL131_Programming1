/*
 *  Functions
 */

#include <stdio.h>
#include <stdarg.h>

/* 
   function declerations
*/
int average(int n, ...);

int main()
{
	printf("%d", average(5, 1, 2, 3, 4, 5));	
}

/* calculate the average of "n" arguments  */
int average(int n, ...)
{
	int i = 0;
	int total = 0;
	va_list valist;
	va_start(valist, n);

	for (i=0; i<n; i++)
	{
		total += va_arg(valist, int);
	}

	va_end(valist);
	
	return total / n;
}


