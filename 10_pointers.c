/*
	Pointers
*/
#include <stdio.h>

#define SIZE 10

int main()
{
	int i = 0;
	/* define a pointer and initialize with address of i */
	int *p = &i;

	int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int *p2 = a;

	/* print pointer to i */
	printf("i is located at %p\n", &i);
	printf("p is pointing to %p\n", p);

	/* print pointer to a */
	printf("first element of a is at %p\n", a);
	printf("p2 is pointing to %p\n", p2);

	/* access a with pointer */
	for (i=0; i<SIZE; i++)
	{
		printf("data at (p2 + %d)[%p] is %d\n", i, (p2+i), *(p2+i));	
	}
}