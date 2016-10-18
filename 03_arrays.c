/*
 *  Arrays
 */

#include <stdio.h>

int main()
{
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	array[0] = 15; /* in c array index starts from 0! */
	array[2] = 30;

	printf("%d\n", array[0]);
	printf("%d\n", array[1]);
	printf("%d\n", array[2]);
	printf("%d\n", array[3]);
	printf("%d\n", array[4]);
	printf("%d\n", array[5]);
	printf("%d\n", array[6]);
	printf("%d\n", array[7]);
	printf("%d\n", array[8]);
	printf("%d\n", array[9]);
}
