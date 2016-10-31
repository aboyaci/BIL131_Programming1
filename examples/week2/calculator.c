/*
   calculator
*/

#include <stdio.h>


int main()
{
	int a, b;
	char operator;

	printf("Please input two numbers and an operator");

	scanf("%d", &a);
	scanf("%d", &b);
	scanf(" %c", &operator); /* space is needed for this to work correctly! */

	switch(operator)
	{
		case '+':
			printf("%d+%d=%d\n", a, b, a+b);
			break;
		case '-':
			printf("%d-%d=%d\n", a, b, a-b);
			break;
		case '*':
			printf("%d*%d=%d\n", a, b, a*b);
			break;
		case '/':
			printf("%d/%d=%f\n", a, b, (float)a/b);
			break;
		case '%':
			printf("%d%%%d=%d\n", a, b, a%b);
			break;

		default:
			printf("Wrong operator!!!\n");
	
	}

	return 0;
}