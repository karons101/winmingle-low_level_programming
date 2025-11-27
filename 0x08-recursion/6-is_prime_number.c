#include "main.h"

/**
 *  * _check_prime - Helper function to recursively check for prime divisibility.
 *   * @n: The number to check.
 *    * @i: The current divisor (starts at 2).
 *     *
 *      * Return: 1 if prime, 0 if not.
 *       */
static int _check_prime(int n, int i)
{
		if (n % i == 0) /* Base case 1: Divisible by i (not prime) */
				{
							return (0);
								}

			/* Base case 2: Divisor has reached n (number is prime) */
			if (i * i > n)
					{
								return (1);
									}

				/* Recursive step: Check the next divisor */
				return (_check_prime(n, i + 1));
}

/**
 *  * is_prime_number - Returns 1 if the input integer is a prime number, otherwise 0.
 *   * @n: The number to check.
 *    *
 *     * Return: 1 if prime, 0 if not.
 *      */
int is_prime_number(int n)
{
		if (n <= 1) /* Special cases: 1 and negative numbers are not prime */
				{
							return (0);
								}
			if (n == 2 || n == 3) /* 2 and 3 are prime */
					{
								return (1);
									}

				return (_check_prime(n, 2));
}
