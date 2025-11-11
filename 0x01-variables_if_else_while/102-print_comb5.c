/**
 * Author: OGHENEKARO CLETUS ANAKPOHA
 * Program: WinMingle Community C Training
 * Description: Prints all combinations of two two-digit numbers (00 01 to 98 99).
 */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i; /* First two-digit number (0 to 98) */
	int j; /* Second two-digit number (i+1 to 99) */

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			/* Print FIRST number (i) with two digits */
			putchar(i / 10 + '0'); 
			putchar(i % 10 + '0');
			
			/* Print space separator */
			putchar(' ');
			
			/* Print SECOND number (j) with two digits */
			putchar(j / 10 + '0'); 
			putchar(j % 10 + '0');

			/* Check if it's NOT the last combination (98 99) */
			if (i != 98 || j != 99)
			{
				/* Print comma and space */
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}

	/* Final putchar call for the newline */
	putchar('\n');

	return (0);
}
