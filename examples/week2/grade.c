/*
   calculate grade from score
*/

#include <stdio.h>

int main()
{
	int grade = 0;

	printf("Please enter your test score: ");

	scanf("%d", &grade);

	if(grade<=100 && grade>90)
	{
		printf("Your grade is AA\n");
	}
	else if(grade<=90 && grade>80)
	{
		printf("Your grade is BA\n");
	}
	else if(grade<=80 && grade>70)
	{
		printf("Your grade is BB\n");
	}
	else if(grade<=70 && grade>60)
	{
		printf("Your grade is CB\n");
	}
	else if(grade<=60 && grade>50)
	{
		printf("Your grade is CC\n");
	}
	else if(grade<=50 && grade>40)
	{
		printf("Your grade is DC\n");
	}
	else
	{
		printf("Your grade is F, you failed!\n");
	}
	
	return 0;
}