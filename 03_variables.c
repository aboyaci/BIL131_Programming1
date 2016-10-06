/*
 *  Variables
 */

#include <stdio.h>

int main()
{
	/* define variables */
	int int_variable = 3;
	char char_variable = 'C';
	float float_variable = 3.5;

	printf("int_variable = %d\n", int_variable);
	printf("char_variable = %c\n", char_variable);
	printf("float_variable = %f\n", float_variable);

	/* update variables */
	int_variable = 5;
	char_variable = 'D';
	float_variable = 5.3;

	printf("new value of int_variable = %d\n", int_variable);
	printf("new value of char_variable = %c\n", char_variable);
	printf("new value of float_variable = %f\n", float_variable);
}
