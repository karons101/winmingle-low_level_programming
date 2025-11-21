#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
		int nb;

			/* Test 1: Simple positive */
			nb = _atoi("98");
				printf("%d\n", nb);

					/* Test 2: Simple negative */
					nb = _atoi("-402");
						printf("%d\n", nb);

							/* Test 3: Mixed characters, check sign parity */
							nb = _atoi("---++++-98hello");
								printf("%d\n", nb); /* Expected: -98 (3 minus signs total, result is negative) */

									/* Test 4: Mixed characters, zero */
									nb = _atoi("What is 0, my friend?");
										printf("%d\n", nb); /* Expected: 0 */

											/* Test 5: Mixed chars, stops reading at second dash */
											nb = _atoi("---45-45---");
												printf("%d\n", nb); /* Expected: -45 */

													/* Test 6: No number (should return 0) */
													nb = _atoi("++++---+++");
														printf("%d\n", nb); /* Expected: 0 */
															
															/* Test 7: Large positive number */
															nb = _atoi("987654321");
																printf("%d\n", nb); /* Expected: 987654321 */
																	
																	return (0);
}
