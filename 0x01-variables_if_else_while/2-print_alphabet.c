/**
 * Author: OGHENEKARO CLETUS ANAKPOHA
 * Program: WinMingle Community C Training
 * Description: Prints the lowercase alphabet using only putchar twice.
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
		putchar(c); /* FIRST putchar call */
		c++;
	}

	putchar('\n'); /* SECOND and FINAL putchar call */

	return (0);
}
