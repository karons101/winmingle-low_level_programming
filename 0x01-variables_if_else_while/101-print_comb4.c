/**
 * Author: OGHENEKARO CLETUS ANAKPOHA
 * Program: WinMingle Community C Training
 * Description: Prints all different combinations of three digits.
 */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1; /* First digit (0-7) */
	int d2; /* Second digit (d1+1 to 8) */
	int d3; /* Third digit (d2+1 to 9) */

	d1 = 0;
	while (d1 <= 7)
	{
		d2 = d1 + 1;
		while (d2 <= 8)
		{
			d3 = d2 + 1;
			while (d3 <= 9)
			{
				/* Print the three digits */
				putchar(d1 + '0');
				putchar(d2 + '0');
				putchar(d3 + '0');

				/* Check if it's NOT the last combination (789) */
				if (d1 != 7 || d2 != 8 || d3 != 9)
				{
					/* Print comma and space */
					putchar(',');
					putchar(' ');
				}
				d3++;
			}
			d2++;
		}
		d1++;
	}

	/* Final putchar call for the newline */
	putchar('\n');

	return (0);
}
