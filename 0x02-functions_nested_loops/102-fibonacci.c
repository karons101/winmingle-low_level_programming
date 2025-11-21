#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int count;
	/* Use unsigned long to ensure space for large numbers (up to F92) */
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long next;

	/* Print first two numbers explicitly */
	printf("%lu, %lu", a, b);

	for (count = 3; count <= 50; count++)
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
