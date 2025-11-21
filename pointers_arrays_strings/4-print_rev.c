#include "main.h"

/**
 *  * print_rev - prints a string in reverse, followed by a new line
 *   * @s: pointer to the string
 *    *
 *     * Return: void
 *      */
void print_rev(char *s)
{
		int length = 0;
			int i;

				/* 1. Calculate the length of the string */
				while (s[length] != '\0')
						{
									length++;
										}

					/* 2. Loop backward from the last character (length - 1) down to 0 */
					for (i = length - 1; i >= 0; i--)
							{
										_putchar(s[i]);
											}

						/* 3. Print the required newline */
						_putchar('\n');
}
