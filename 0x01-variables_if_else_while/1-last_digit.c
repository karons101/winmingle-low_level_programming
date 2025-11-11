/**
 * Author: OGHENEKARO CLETUS ANAKPOHA
 * Program: WinMingle Community C Training
 * Description: Prints the last digit of a random number and classifies it.
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	/* THIS SECTION WILL NOT BE MODIFIED */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* END OF RANDOM NUMBER GENERATION */

	/* Calculate the last digit using the modulo operator */
	last_digit = n % 10;

	printf("Last digit of %d is %d", n, last_digit);

	if (last_digit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}
