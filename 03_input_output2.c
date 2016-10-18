/*
 *  Input/Outpu
 */

#include <stdio.h>

int main()
{

	int int_var = 0;
	char char_var = 0;
	float float_var = 0.0;

	printf("Scanf function reads user input to a variable\n");
	
	printf("Please input a number: ");
	scanf("%d", &int_var);

	printf("Please input a character: ");
	scanf(" %c", &char_var); /* dont forget the space here, otherwise it will not work properly, more on this later! */

	printf("Please input a floating point number: ");
	scanf("%f", &float_var);

	printf("your input is:\n");
	printf("integer = %d:\n", int_var);
	printf("character = %c\n", char_var);
	printf("floating point = %f\n", float_var);
}
