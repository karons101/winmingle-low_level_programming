#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer.
 *
 * Return: The value of the last digit (always positive).
 */
int print_last_digit(int n)
{
	int last_digit;

	/* Calculate the last digit */
	last_digit = n % 10;

	/* If the result is negative (from negative n), make it positive */
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
