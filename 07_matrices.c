/*
	Matrices
*/
#include <stdio.h>

/* define constant */
#define SIZE 3

int main()
{
	int i = 0;
	int j = 0;

	/* initialize */
	int m[SIZE][SIZE] = {
							{1, 2, 3},
							{4, 5, 6},
							{7, 8, 9}
						};

	/* print matrix */
	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}