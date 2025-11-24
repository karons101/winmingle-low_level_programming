#include "main.h"

/**
 *  * _strstr - Locates a substring (needle) in a string (haystack).
 *   * @haystack: The string to be scanned.
 *    * @needle: The small string to be searched within haystack.
 *     *
 *      * Return: A pointer to the beginning of the located substring, or
 *       * NULL if the substring is not found.
 *        */
char *_strstr(char *haystack, char *needle)
{
		int i, j;

			/* If needle is empty, return haystack (per C standard) */
			if (*needle == '\0')
						return (haystack);

				for (i = 0; haystack[i] != '\0'; i++)
						{
									/* Check if the current char in haystack matches the first char in needle */
									if (haystack[i] == needle[0])
												{
																j = 0;
																			/* Start checking subsequent characters */
																			while (needle[j] != '\0' && haystack[i + j] != '\0' &&
																									   haystack[i + j] == needle[j])
																							{
																												j++;
																															}

																						/* If we reached the end of needle, we found the substring */
																						if (needle[j] == '\0')
																										{
																															return (haystack + i);
																																		}
																								}
										}

					return (0); /* NULL if not found */
}
