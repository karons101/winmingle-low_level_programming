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
		char *a;

			while (*s != '\0')
					{
								a = accept;
										while (*a != '\0')
													{
																	if (*s == *a)
																					{
																										return (s);
																													}
																				a++;
																						}
												s++;
													}

				return (0); /* Returns 0/NULL if no match is found */
}
