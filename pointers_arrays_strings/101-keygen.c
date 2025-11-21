#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Generates a random valid password for a crackme program.
 *   *
 *    * The password must have an ASCII sum of 2772 to be considered valid.
 *     *
 *      * Return: Always 0.
 *       */
int main(void)
{
		char password[84];
			int i = 0, sum = 0, target_sum = 2772;
				int diff1, diff2;

					/* Initialize the random number generator using the current time */
					srand(time(0));

						/* 1. Generate random characters until the sum is close to the target */
						/* We stop when the remaining difference can be covered by 1 or 2 printable characters (max ASCII 126) */
						while (sum < target_sum - 126)
								{
											/* Generate printable characters between ASCII 33 ('!') and 126 ('~') */
											password[i] = (rand() % 94) + 33;
													sum += password[i];
															i++;
																}

							/* 2. Calculate the ASCII value for the final character(s) */
							diff1 = target_sum - sum;

								/* If diff1 is > 126, we need two final characters. Set the first to the required remainder. */
								if (diff1 > 126)
										{
													diff2 = (diff1 - 126); /* The value for the second-to-last character */
															password[i] = diff2;
																	sum += diff2;
																			i++;
																					diff1 = target_sum - sum; /* diff1 is now 126 (the remainder) */
																						}

									/* 3. Add the final character and the null terminator */
									password[i] = diff1;
										i++;
											password[i] = '\0';

												printf("%s\n", password);

													return (0);
}
