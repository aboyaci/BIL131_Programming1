/*
 *  Logical operators
 */

#include <stdio.h>

int main()
{
	if (3 > 5 && 1 < 3) /* and */
	{
		printf("3 is greater than 1 AND less than 5\n");
	}

	if (3 > 5 || 10 < 3) /* or */
	{
		printf("3 is greater than 1 OR less than 10\n");
	}

	if (!(5 > 10)) /* not (logical complement) */
	{
		printf("5 is NOT greater than 10\n");
	}
}
