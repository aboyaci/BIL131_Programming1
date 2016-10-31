/*
   Fibonacci series
*/

#include <stdio.h>

int main()
{
	int i;
	int fib[40];

	fib[0] = 1;
	fib[1] = 1;

	for(i=2;i<=40;i++)
	{
		fib[i] = fib[i-1] + fib[i-2];

		printf("fib(%d) = %d\n", i, fib[i]);
	}

	return 0;
}