#include "main.h"

/**
 *  * _strstr - Locates a substring.
 *   * @haystack: The main string to be scanned.
 *    * @needle: The small string to be searched within haystack.
 *     *
 *      * Return: A pointer to the beginning of the located substring,
 *       * or NULL if the substring is not found.
 *        */
char *_strstr(char *haystack, char *needle)
{
		int i, j;

			/* If needle is empty, return haystack (per C standard) */
			if (*needle == '\0')
						return (haystack);

				for (i = 0; haystack[i] != '\0'; i++)
						{
									/* Check for the start of the match */
									if (haystack[i] == needle[0])
												{
																/* Potential match found, check the rest of the needle */
																for (j = 0; needle[j] != '\0'; j++)
																				{
																									/* Check for end of haystack or mismatch */
																									if (haystack[i + j] == '\0' || haystack[i + j] != needle[j])
																															break;
																												}

																			/* If the inner loop finished, we found a full match (needle[j] is '\0') */
																			if (needle[j] == '\0')
																								return (haystack + i);
																					}
										}

					return (0); /* Returns 0/NULL if not found */
}
