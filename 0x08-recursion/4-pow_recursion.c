#include "main.h"

/**
 *  * _pow_recursion - Returns the value of x raised to the power of y.
 *   * @x: The base number.
 *    * @y: The exponent.
 *     *
 *      * Return: x^y. Returns -1 if y < 0 (error). Returns 1 if y = 0.
 *       *
 *        * Formula: $x^y = x \times x^{y-1}$
 *         */
int _pow_recursion(int x, int y)
{
		if (y < 0) /* Error case: Exponent is negative */
				{
							return (-1);
								}
			if (y == 0) /* Base case: Any number to the power of 0 is 1 */
					{
								return (1);
									}

				/* Recursive step: x multiplied by the result of x^(y-1) */
				return (x * _pow_recursion(x, y - 1));
}
