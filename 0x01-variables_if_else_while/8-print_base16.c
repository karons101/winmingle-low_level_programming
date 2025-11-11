/**
 * Author: OGHENEKARO CLETUS ANAKPOHA
 * Program: WinMingle Community C Training
 * Description: Prints all the numbers of base 16 in lowercase.
 */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	/* Loop 1: Print digits 0 through 9 */
	num = 0;
	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	/* Loop 2: Print letters a through f */
	letter = 'a';
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
