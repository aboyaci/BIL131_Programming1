/*
   Sum numbers multiple integer of 4 between 1-100
*/

#include <stdio.h>

int main()
{
	int i;
	int sum = 0;

	for(i=0;i<100;i=i+4)
	{
		sum += i;
	}

	printf("Result = %d\n", sum);

	return 0;
}