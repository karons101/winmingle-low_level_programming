#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
		/* Destination buffer must be large enough to hold the source string */
		char s1[98];
			char *s2 = "First, solve the problem. Then, write the code.";
				char *ptr;

					/* 1. Print original source string (s2) */
					printf("Source: %s\n", s2);
						/* 2. Print destination before copy (s1) - might show garbage or nothing */
						printf("Destination before copy: %s\n", s1);

							/* Copy the string, ptr gets the same address as s1 */
							ptr = _strcpy(s1, s2);

								/* 3. Print destination after copy (s1) */
								printf("Destination after copy: %s\n", s1);
									/* 4. Print the return value (ptr), which should be identical to s1 */
									printf("Return value (ptr): %s\n", ptr);
										return (0);
}
