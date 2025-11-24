#include "main.h"

/**
 *  * _strchr - Locates the first occurrence of the character c in the string s.
 *   * The null byte (\0) is considered part of the string.
 *    * @s: The string to be searched.
 *     * @c: The character to locate.
 *      *
 *       * Return: A pointer to the first occurrence of c in s, or NULL if
 *        * the character is not found.
 *         */
char *_strchr(char *s, char c)
{
		int i = 0;

			while (s[i] != '\0')
					{
								if (s[i] == c)
											{
															return (s + i); /* Return pointer to the character */
																	}
										i++;
											}

				/* Check for the null terminator itself */
				if (c == '\0')
						{
									return (s + i);
										}

					return (0); /* NULL is represented as 0 in C for pointers */
}
