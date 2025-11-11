/**
 * Author: OGHENEKARO CLETUS ANAKPOHA
 * Program: WinMingle Community C Training
 * Description: Prints the lowercase and uppercase alphabet using putchar three times.
 */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	/* Loop 1: Print lowercase a-z (First putchar call) */
	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	/* Loop 2: Print uppercase A-Z (Second putchar call) */
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	/* Print newline (Third and final putchar call) */
	putchar('\n');

	return (0);
}
