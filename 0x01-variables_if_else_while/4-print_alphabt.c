/**
 * Author: OGHENEKARO CLETUS ANAKPOHA
 * Program: WinMingle Community C Training
 * Description: Prints the lowercase alphabet except q and e.
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

	c = 'a';
	while (c <= 'z')
	{
		/* Check if c is NOT 'q' AND NOT 'e' */
		if (c != 'q' && c != 'e')
		{
			putchar(c); /* FIRST putchar call */
		}
		c++;
	}

	putchar('\n'); /* SECOND and FINAL putchar call */

	return (0);
}
