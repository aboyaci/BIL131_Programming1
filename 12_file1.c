/*
	File operations
*/

#include <stdio.h>

int main()
{
	/* open file */
	FILE *f = fopen("Makefile", "r");
	char c = 0;

	while(1)
	{
		/* read one byte */
		c = fgetc(f);

		/* if end of file is reached exit the loop */
		if(feof(f))
		{
			break;
		}

		/* print byte to screen */
		putchar(c);
	}

}
