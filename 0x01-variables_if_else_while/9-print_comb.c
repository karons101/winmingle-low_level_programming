/**
 * Author: OGHENEKARO CLETUS ANAKPOHA
 * Program: WinMingle Community C Training
 * Description: Prints single-digit numbers separated by commas and spaces.
 */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		/* Print the digit */
		putchar(i + '0');

		/* Print comma and space ONLY if it is not the last digit (9) */
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		
		i++;
	}

	putchar('\n');

	return (0);
}
