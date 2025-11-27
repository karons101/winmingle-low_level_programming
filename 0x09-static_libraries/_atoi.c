#include "main.h"

/**
 *  * _atoi - Converts a string to an integer.
 *   * @s: The string to be converted.
 *    *
 *     * Return: The integer value extracted from the string.
 *      */
int _atoi(char *s)
{
		int i = 0;
			int sign = 1;
				unsigned int result = 0;

					/* 1. Skip non-numeric characters and handle sign */
					while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
							{
										if (s[i] == '-')
													{
																	sign *= -1;
																			}
												i++;
													}

						/* 2. Convert digits to integer */
						while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
								{
											result = (result * 10) + (s[i] - '0');
													i++;
														}

							/* 3. Apply sign */
							return (result * sign);
}
