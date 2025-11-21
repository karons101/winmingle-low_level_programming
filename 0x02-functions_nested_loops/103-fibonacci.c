#include <stdio.h>

/**
 * main - Computes and prints the sum of the even-valued terms in the
 * Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long f1 = 1;
	unsigned long f2 = 2;
	unsigned long next;
	unsigned long sum_even = 2; /* Start with 2, the first even term */

	/* Loop until the next term exceeds the limit */
	while (f2 <= 4000000)
	{
		next = f1 + f2;
		f1 = f2;
		f2 = next;

		/* Check if the new term is even */
		if (f2 % 2 == 0)
		{
			sum_even += f2;
		}
	}

	printf("%lu\n", sum_even);

	return (0);
}
