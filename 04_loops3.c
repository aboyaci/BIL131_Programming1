/*
 *  Loops
 */

#include <stdio.h>

int main()
{
	int i = 1; /* always initialize the variables! */

	do
	{
		printf("This is line #%d and i will always run at least once!\n", i);
		i++;
	}
	while(i<10);
}
