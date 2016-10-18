/*
 *  Strings
 */

#include <stdio.h>
#include <string.h> /* string functions are defined here */

int main()
{
	/* strings are arrays of chars */
	char s[20] = "Hello world"; /* "hello world" has 11 characters, what about rest? */
	char name[30];

	printf("What is your name?\n");
	scanf("%s", name); /* no & before s! */
	
	printf("%s\n", s);
	printf("your name is %s\n", name);
}
