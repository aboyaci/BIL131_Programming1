/*
 *  Arithmetic operators
 */

#include <stdio.h>

int main()
{
	printf("3 + 5 = %d\n", 3 + 5);
	printf("7 - 5 = %d\n", 7 - 5);
	printf("2 * 6 = %d\n", 2 * 6);
	printf("9 / 2 = %d\n", 9 / 2); /* this result should be 4.5 but it prints 4. Why? */
	printf("9 mod 2 = %d\n", 9 % 2); /* % is modulo operator */
}
