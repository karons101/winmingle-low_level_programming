#include "main.h"

/**
 *  * _strchr - Locates the first occurrence of the character c in the string s.
 *   * @s: The string to be searched.
 *    * @c: The character to find.
 *     *
 *      * Return: A pointer to the first occurrence of c in s, or NULL if not found.
 *       */
char *_strchr(char *s, char c)
{
		while (*s >= '\0')
				{
							if (*s == c)
										{
														return (s);
																}
									s++;
										}

			return (0); /* Returns 0/NULL if not found */
}
