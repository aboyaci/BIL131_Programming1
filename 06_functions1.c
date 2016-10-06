/*
 *  Functions
 */

#include <stdio.h>

/* 
   function declerations
   these are used to inform the compiler about the functions we create below
*/
void say_hi_english();
void say_hi_turkish();
void say_hi_japan();

int main()
{
	say_hi_english();
	say_hi_turkish();
	say_hi_japan();
}

void say_hi_english()
{
	printf("hello world\n");
}

void say_hi_turkish()
{
	printf("merhaba dunya\n");
}

void say_hi_japan()
{
	printf("konnichiwa sekai\n");
}
