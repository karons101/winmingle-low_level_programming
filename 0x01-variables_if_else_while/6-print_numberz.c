/**
 * Author: OGHENEKARO CLETUS ANAKPOHA
 * Program: WinMingle Community C Training
 * Description: Prints single-digit numbers using only int variables and putchar twice.
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
		/* Converts integer i (e.g., 5) to its character equivalent ('5') */
		putchar(i + '0'); /* FIRST putchar call */
		i++;
	}

	putchar('\n'); /* SECOND and FINAL putchar call */

	return (0);
}
