#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 * Format: Single digits are preceded by a space for alignment (e.g., 1x3= 3).
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;

			if (col == 0)
			{
				/* The first number in a row (0*0, 1*0, etc.) */
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (product <= 9)
				{
					/* Single digit: add extra space for alignment */
					_putchar(' ');
					_putchar(product + '0');
				}
				else
				{
					/* Double digit: print tens and units */
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
