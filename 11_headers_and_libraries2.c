/*
	Headers and libraries

	Note: 
		This is an advanced expample
		You need to add "-lcurses" to compile command
		ex: gcc -lcurses 11_headers_and_libraries2.c -o a.out
*/

#include <stdio.h> 

/* ncurses is an external library and it is not included in C */
#include <ncurses.h>

int main()
{
	/* 
		ncurses functions.
		you dont need to understand but remember these 
		function are in a seperate library
	*/
	initscr();
	endwin();
	
	return 0;
}