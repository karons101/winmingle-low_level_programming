/**
 * Author: OGHENEKARO CLETUS ANAKPOHA
 * Program: WinMingle Community C Training
 * Description: Prints the lowercase alphabet in reverse order.
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

	/* Start at 'z' and loop backwards to 'a' */
	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);
}
