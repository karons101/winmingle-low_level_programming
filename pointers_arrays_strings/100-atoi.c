#include "main.h"

/**
 *  * _atoi - converts a string to an integer
 *   * @s: pointer to the string to convert
 *    *
 *     * Return: The converted integer value.
 *      */
int _atoi(char *s)
{
		int i = 0;
			int sign = 1; /* Default sign is positive (1) */
				int started = 0; /* Flag to track if number digits have started */
					unsigned int result = 0;

						/* 1. Iterate through the string */
						while (s[i] != '\0')
								{
											/* 2. Handle sign characters before the number starts */
											if (s[i] == '-')
														{
																		if (started == 0)
																							sign *= -1; /* Flip the sign */
																				}
													else if (s[i] == '+')
																{
																				/* Plus signs don't change the sign, but mark that the number hasn't started yet */
																				if (started == 0)
																								{
																													/* Do nothing (The compiler required explicit braces here) */
																												}
																						}

															/* 3. Check for digits (ASCII 48 to 57) */
															else if (s[i] >= '0' && s[i] <= '9')
																		{
																						started = 1; /* Number conversion has started */
																									/* Build the number: multiply current result by 10 and add the new digit */
																									result = (result * 10) + (s[i] - '0');
																											}

																	/* 4. If a non-sign, non-digit character is found *after* digits started, stop */
																	else if (started == 1)
																				{
																								break;
																										}
																			
																			i++;
																				}

							/* 5. Apply the final calculated sign and return the integer */
							return (result * sign);
}
