#include "main.h"

/**
 *  * _strspn - Gets the length of the initial segment of string s which consists
 *   * entirely of bytes in the string accept.
 *    * @s: The string to be scanned.
 *     * @accept: The string containing the characters to match.
 *      *
 *       * Return: The number of bytes in the initial segment of s consisting
 *        * only of bytes from accept.
 *         */
unsigned int _strspn(char *s, char *accept)
{
		unsigned int i, j;
			unsigned int count = 0;

				/* Outer loop iterates through s */
				for (i = 0; s[i] != '\0'; i++)
						{
									/* Inner loop iterates through accept */
									for (j = 0; accept[j] != '\0'; j++)
												{
																if (s[i] == accept[j])
																				{
																									count++;
																													break; /* Match found, move to the next char in s */
																																}
																		}

											/* If the inner loop completed without a match, break the outer loop */
											if (accept[j] == '\0')
														{
																		return (count);
																				}
												}

					return (count);
}
