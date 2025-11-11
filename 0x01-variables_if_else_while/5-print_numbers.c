/**
 * Author: OGHENEKARO CLETUS ANAKPOHA
 * Program: WinMingle Community C Training
 * Description: Prints all single-digit numbers of base 10 starting from 0.
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
		putchar(i + '0');
		i++;
	}

	putchar('\n');

	return (0);
}
