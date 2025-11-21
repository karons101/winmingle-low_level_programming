#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 * This handles very large numbers by splitting them into two parts.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int count;
	/* Define the splitting point for the low part (9999999999) */
	unsigned long int limit = 10000000000;
	/* Initial terms (F1, F2) */
	unsigned long int f1 = 1, f2 = 2;
	/* High and Low parts for F1 */
	unsigned long int h1 = 0, l1 = 1;
	/* High and Low parts for F2 */
	unsigned long int h2 = 0, l2 = 2;
	/* Temporary sum variables */
	unsigned long int next_h, next_l;

	/* Print the first 92 numbers using standard unsigned long */
	printf("%lu, %lu", f1, f2);

	for (count = 3; count <= 92; count++)
	{
		unsigned long int temp;

		next_l = f1 + f2;
		printf(", %lu", next_l);

		f1 = f2;
		f2 = next_l;
	}

	/* Initialize split numbers using the 92nd and 93rd Fibonacci numbers */
	h1 = f1 / limit;
	l1 = f1 % limit;
	h2 = f2 / limit;
	l2 = f2 % limit;

	/* Print the remaining numbers (93 through 98) using split logic */
	for (count = 93; count <= 98; count++)
	{
		/* Add the low parts */
		next_l = l1 + l2;
		/* Add the high parts */
		next_h = h1 + h2;

		/* Check for carry-over from low part */
		if (next_l >= limit)
		{
			next_h += 1; /* Carry over 1 to the high part */
			next_l %= limit; /* Keep only the remainder in the low part */
		}

		/* Print the result */
		/* The high part is printed first. Print leading zeros for low part. */
		if (next_h > 0)
			printf(", %lu%010lu", next_h, next_l);
		else
			printf(", %lu", next_l);

		/* Update F1 and F2 for the next iteration (F3=F2, F2=Next) */
		h1 = h2;
		l1 = l2;
		h2 = next_h;
		l2 = next_l;
	}

	printf("\n");

	return (0);
}
