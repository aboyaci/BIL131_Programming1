/*
	Arrays
*/
#include <stdio.h>

/* define constant */
#define SIZE 10

int main()
{
	int i = 0;
	int sum = 0;

	/* initialize */
	int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for(i=0; i<SIZE; i++)
	{
		sum = sum + a[i];
	}

	printf("There are %d item in the array\n", SIZE);
	printf("Sum of the elements is %d\n", sum);
	printf("Average is = %.2f\n", (float)sum/SIZE);
}