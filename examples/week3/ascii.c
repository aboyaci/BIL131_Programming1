/*
   ASCII table
*/

#include <stdio.h>

int main()
{
	int i;

	for (i=1; i<128; i++)
	{
		printf("%d = %c\n", i, i);
	}

	return 0;
}