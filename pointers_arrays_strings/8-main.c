#include "main.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
		/* Array containing positive, zero, negative, and large numbers */
		int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, -1024, 1337};

			/* Test case n=0 (should print only a newline) */
			print_array(a, 0);

				/* Test case n=4 (should print 4 elements: 0, 1, 2, 3) */
				print_array(a, 4);

					/* Test case n=13 (should print all elements) */
					print_array(a, 13);
						return (0);
}
