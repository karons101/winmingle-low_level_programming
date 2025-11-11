/**
 * Author: OGHENEKARO CLETUS ANAKPOHA
 * Program: WinMingle Community C Training
 * Description: Prints all different combinations of two digits.
 */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;
	int digit2;

	digit1 = 0;
	while (digit1 <= 8) /* Stop at 8 because 9 has no second digit after it */
	{
		digit2 = digit1 + 1;
		while (digit2 <= 9)
		{
			/* Print the first digit (max 5 putchar calls total) */
			putchar(digit1 + '0'); 
			
			/* Print the second digit */
			putchar(digit2 + '0'); 

			/* Check if it's NOT the last combination (89) */
			if (digit1 != 8 || digit2 != 9) 
			{
				/* Print comma and space */
				putchar(','); 
				putchar(' '); 
			}
			digit2++;
		}
		digit1++;
	}

	/* Final putchar call for the newline */
	putchar('\n'); 

	return (0);
}
