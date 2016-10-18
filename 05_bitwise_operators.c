/*
 *  Logic operators
 */

#include <stdio.h>

int main()
{
	/* 
	    attention: all opeartions are made in base two
	    3 = 00000011 in base two
	    5 = 00000101 in base two

		00000011 or 00000101 = 00000111 = 7

	 */
	printf("3 or 5 = %d\n", 3 | 5);
	printf("7 and 5 = %d\n", 7 & 5);
	printf("2 xor 6 = %d\n", 2 ^ 6);
	printf("not 2 = %d\n", ~2); /* why is the result negative? */
	printf("3 left shift 1 = %d\n", 3<<1 );
	printf("3 right shift 1 = %d\n", 3>>1);
}
