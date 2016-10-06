/*
	Structures
*/
#include <stdio.h>

/* struct definition */
struct person
{
	char name[10];
	int age;
};

int main()
{
	/* create and initialize structs */
	struct person p = {"ali", 30};

	/* we can access the variables with "." */
	p.age = 25;
	strcpy(p.name, "Ali");

	printf("%s is %d years old\n", p.name, p.age);
}