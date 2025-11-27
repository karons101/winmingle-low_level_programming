#include "main.h"

/**
 *  * factorial - Returns the factorial of a given number n.
 *   * @n: The number.
 *    *
 *     * Return: The factorial of n. Returns -1 if n < 0 (error), or 1 if n = 0.
 *      *
 *       * Formula: $n! = n \times (n-1)!$
 *        */
int factorial(int n)
{
		if (n < 0) /* Error case */
				{
							return (-1);
								}
			if (n == 0) /* Base case: 0! = 1 */
					{
								return (1);
									}

				/* Recursive step: n * factorial(n - 1) */
				return (n * factorial(n - 1));
}
