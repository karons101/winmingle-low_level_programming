#include "main.h"

/**
 *  * _strpbrk - Searches a string for any of a set of bytes.
 *   * @s: The string to be searched.
 *    * @accept: The string containing the bytes to look for.
 *     *
 *      * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *       * or NULL if no such byte is found.
 *        */
char *_strpbrk(char *s, char *accept)
{
		int i, j;

			/* Outer loop iterates through s */
			for (i = 0; s[i] != '\0'; i++)
					{
								/* Inner loop checks if the current character of s is in accept */
								for (j = 0; accept[j] != '\0'; j++)
											{
															if (s[i] == accept[j])
																			{
																								return (s + i); /* Match found, return the address in s */
																											}
																	}
									}

				return (0); /* NULL (0) if no match is found */
}
