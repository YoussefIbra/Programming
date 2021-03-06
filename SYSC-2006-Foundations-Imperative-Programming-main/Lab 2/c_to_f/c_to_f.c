/* SYSC 2006 Fall 2019, Lab 2 */
/* Converting from Celcius to Fahrenheit*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int lower, upper, step;
	float fahr, celsius;

	/* Set lower and upper limits of the
	   table, and step size. 
	 */

	lower = -40;
	upper = 40;
	step = 10;
	celsius = lower;

	while (fahr <= upper) {
		fahr = (celsius*1.8)+32;

		printf("%4.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return EXIT_SUCCESS;
}
