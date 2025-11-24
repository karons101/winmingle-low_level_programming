#include "main.h"

/**
 *  * _print_integer - Helper function to print an integer using only _putchar.
 *   * @n: The integer to print.
 *    */
static void _print_integer(long n)
{
		long num = n;

			if (num < 0)
					{
								_putchar('-');
										num = -num;
											}

				if (num / 10)
							_print_integer(num / 10);

					_putchar((num % 10) + '0');
}

/**
 *  * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 *   * @a: Pointer to the start of the square matrix (treated as a 1D array).
 *    * @size: The size of the square matrix (e.g., 3 for a 3x3 matrix).
 *     *
 *      * Note: Since the matrix is passed as a flat array, we use pointer arithmetic
 *       * and the size to calculate the diagonal indices.
 *        */
void print_diagsums(int *a, int size)
{
		int i;
			long sum1 = 0; /* Primary diagonal (top-left to bottom-right) */
				long sum2 = 0; /* Secondary diagonal (top-right to bottom-left) */

					for (i = 0; i < size; i++)
							{
										/*
										 * 		 * Primary diagonal: element at (i, i).
										 * 		 		 * In 1D array, index is i * size + i = i * (size + 1)
										 * 		 		 		 */
										sum1 += a[i * (size + 1)];

												/*
												 * 		 * Secondary diagonal: element at (i, size - 1 - i).
												 * 		 		 * In 1D array, index is i * size + (size - 1 - i)
												 * 		 		 		 */
												sum2 += a[i * size + (size - 1 - i)];
													}

						_print_integer(sum1);
							_putchar(',');
								_putchar(' ');
									_print_integer(sum2);
										_putchar('\n');
}
