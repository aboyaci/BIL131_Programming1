/*
	Strings
*/
#include <stdio.h>
#include <string.h>

int main()
{
	int res = 0;
	char str1[] = "string are";
	char str2[] = "not that hard";
	char string_buffer[100];

	/* initialize buffer */
	memset(string_buffer, 0, 100);

	/* string length */
	printf("Lenght of str(%s) = %d, str(%s) = %d\n", str1, strlen(str1), str2, strlen(str2));

	/* compare */
	res = strcmp(str1, str2);
	if (res > 0)
	{
		printf("'%s' comes after '%s' in alphabetical order\n", str1, str2);
	} 
	else if (res < 0)
	{
		printf("'%s' comes before '%s' in alphabetical order\n", str1, str2);
	}
	else
	{
		printf("'%s' and '%s' are equal in alphabetical order\n", str1, str2);
	}

	/* copy str1 to buffer */
	strcpy(string_buffer, str1);
	
	/* append str2 to string_buffer */
	strcat(string_buffer, str2);

	printf("str1 + str2 = %s\n", string_buffer);
}