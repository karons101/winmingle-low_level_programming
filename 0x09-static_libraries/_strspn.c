#include "main.h"

/**
 *  * _strspn - Gets the length of a prefix substring.
 *   * @s: The string to be scanned.
 *    * @accept: The string containing the characters to match.
 *     *
 *      * Return: The number of bytes in the initial segment of s which consist
 *       * only of bytes from accept.
 *        */
unsigned int _strspn(char *s, char *accept)
{
		unsigned int count = 0;
			char *a;

				while (*s)
						{
									a = accept;
											/* Inner loop: check if *s is in accept */
											while (*a)
														{
																		if (*s == *a)
																						{
																											count++;
																															break;
																																		}
																					a++;
																							}
													/* If inner loop finished without a match, break outer loop */
													if (*a == '\0')
																{
																				return (count);
																						}
															s++;
																}
					return (count);
}
