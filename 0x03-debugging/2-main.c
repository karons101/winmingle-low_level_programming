#include "main.h"
#include <stdio.h>

/**
 *  * main - prints the largest of 3 integers
 *   * Return: 0
 *    */
int main(void)
{
		int a, b, c;
			int largest;

				/* Testing the case 972 is expected to be the largest */
				a = 972;
					b = 0;
						c = -972;

							largest = largest_number(a, b, c);

								printf("%d is the largest number\n", largest);

									return (0);
}
