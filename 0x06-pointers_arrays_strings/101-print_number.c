#include "main.h"

/**
 *  * print_number - Prints an integer using only the _putchar function.
 *   * @n: The integer to be printed.
 *    */
void print_number(int n)
{
		unsigned int num;

			if (n < 0)
					{
								_putchar('-');
										/* Use two steps to handle INT_MIN: first make it positive (unsigned) */
										num = -n;
											}
				else
						{
									num = n;
										}

					/* Recursively call the function to print digits from most significant to least */
					if (num / 10)
							{
										print_number(num / 10);
											}

						/* Print the last digit */
						_putchar((num % 10) + '0');
}
