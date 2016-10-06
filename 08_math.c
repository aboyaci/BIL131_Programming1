#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()
{

	/* sin works on radian, we need to convert to degree */
	printf("sin(30) = %f\n", sin(30*(PI/180)));
	printf("cos(55) = %f\n", cos(55*(PI/180)));
	printf("tan(45) = %f\n", tan(45*(PI/180)));

	/* e to the power of 2 */
	printf("e^2 = %f\n", exp(2));

	/* logarithm on base 10 */
	printf("log10(100) = %f\n", log10(100));

	/* 3 power to the power 5 */
	printf("pow(3, 5) = %f\n", pow(3, 5));

	/* square root */
	printf("sqrt(100) = %f\n", sqrt(100));

	/* smallest integer bigger than PI */
	printf("ceil(PI) = %f\n", ceil(PI));

	/* largest integer less than PI */
	printf("floor(PI) = %f\n", floor(PI));

	/* absoluto value */
	printf("abs(-3) = %f\n", abs(-3));
}