#include "main.h"

/**
 *  * print_number - Helper function to print an integer using _putchar
 *   * @n: The integer to print
 *    *
 *     * This function uses recursion to print digits in the correct order.
 *      * Note: This helper is defined here because standard library functions are forbidden.
 *       */
void print_number(int n)
{
		if (n < 0)
				{
							_putchar('-');
									/* Use a long int to safely handle the INT_MIN edge case before negating */
									n = -n;
										}

			if (n / 10)
						print_number(n / 10);

				_putchar((n % 10) + '0');
}

/**
 *  * print_array - prints n elements of an array of integers,
 *   * followed by a new line.
 *    * @a: pointer to the array
 *     * @n: number of elements to print
 *      *
 *       * Numbers must be separated by comma and space.
 *        * Return: void
 *         */
void print_array(int *a, int n)
{
		int i;

			if (n <= 0)
					{
								_putchar('\n');
										return;
											}

				for (i = 0; i < n; i++)
						{
									print_number(a[i]);

											if (i < n - 1) /* Check if it's not the last element */
														{
																		_putchar(',');
																					_putchar(' ');
																							}
												}
					_putchar('\n');
}
