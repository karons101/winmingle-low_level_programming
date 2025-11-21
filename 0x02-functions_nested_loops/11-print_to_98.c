#include "main.h"

/**
 * print_number - Prints an integer using _putchar. Handles negative numbers.
 * @n: The integer to print.
 */
void print_number(int n)
{
	/* Use long to safely handle the potential absolute value of INT_MIN */
	long num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10 != 0)
	{
		/* Recursively print the rest of the digits */
		print_number(num / 10);
	}
	/* Print the last digit */
	_putchar((num % 10) + '0');
}

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * separated by comma and space, followed by a new line.
 * @n: The starting number.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_number(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			print_number(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
