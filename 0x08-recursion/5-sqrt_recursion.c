#include "main.h"

/**
 *  * _find_sqrt - Helper function to recursively check for the natural square root.
 *   * @n: The number to find the square root of.
 *    * @i: The current guess (starts at 1).
 *     *
 *      * Return: The natural square root, or -1 if none is found.
 *       */
static int _find_sqrt(int n, int i)
{
		if (i * i == n) /* Base case 1: Found the square root */
				{
							return (i);
								}

			/* Base case 2: Guess exceeds the square root */
			if (i * i > n)
					{
								return (-1);
									}

				/* Recursive step: Increment guess and call again */
				return (_find_sqrt(n, i + 1));
}

/**
 *  * _sqrt_recursion - Returns the natural square root of a number.
 *   * @n: The number.
 *    *
 *     * Return: The natural square root, or -1 if n is negative or has no natural sqrt.
 *      */
int _sqrt_recursion(int n)
{
		if (n < 0)
				{
							return (-1);
								}
			if (n == 0)
					{
								return (0);
									}

				return (_find_sqrt(n, 1));
}
