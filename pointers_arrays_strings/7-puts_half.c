#include "main.h"

/**
 *  * puts_half - prints the second half of a string, followed by a new line
 *   * @str: pointer to the string
 *    *
 *     * Return: void
 *      */
void puts_half(char *str)
{
		int len = 0;
			int n, i;

				/* 1. Calculate the full length of the string */
				while (str[len] != '\0')
						{
									len++;
										}

					/* 2. Calculate the starting index (n) for the second half */
					if (len % 2 == 0)
							{
										/* Even length: start index is exactly half */
										n = len / 2;
											}
						else
								{
											/* Odd length: start index is (length - 1) / 2 + 1 to include the larger half */
											n = (len + 1) / 2;
												}

							/* 3. Loop from the start index (n) to the end and print */
							for (i = n; i < len; i++)
									{
												_putchar(str[i]);
													}

								/* Print the required newline */
								_putchar('\n');
}
