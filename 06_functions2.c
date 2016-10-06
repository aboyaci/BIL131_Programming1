/*
 *  Functions
 */

#include <stdio.h>

/* 
   function declerations
   these are used to inform the compiler about the functions we create below
*/

int calculate(int a, int b, char operator);

int main()
{
	int a = 16;
	int b = 15;

	printf("%d AND %d is %d\n", a, b, calculate(a, b, '&'));
	printf("%d x %d is %d\n", a, b, calculate(a, b, '*'));
	printf("%d mod %d is %d\n", a, b, calculate(a, b, '%'));
}

int calculate(int a, int b, char operator)
{
	int result = 0;

	switch(operator)
	{
		case '+':
			result = a + b;
			break;

		case '-':
			result = a - b;
			break;

		case '*':
			result = a * b;
			break;

		case '/':
			result = a / b;
			break;

		case '%':
			result = a % b;
			break;

		case '|':
			result = a | b;
			break;

		case '&':
			result = a & b;
			break;	
		
		case '^':
			result = a ^ b;
			break;	

		case '~':
			result = ~a;
			break;

		default:
			result = 0;
	}

	return result;
}
