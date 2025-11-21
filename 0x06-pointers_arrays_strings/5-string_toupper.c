#include "main.h"

/**
 *  * string_toupper - Changes all lowercase letters of a string to uppercase.
 *   * @s: The string to be modified.
 *    *
 *     * Return: A pointer to the modified string s.
 *      */
char *string_toupper(char *s)
{
		int i = 0;

			while (s[i] != '\0')
					{
								/* Check if the character is a lowercase letter */
								if (s[i] >= 'a' && s[i] <= 'z')
											{
															/* ASCII difference between 'a' and 'A' is 32. */
															s[i] = s[i] - ('a' - 'A');
																		/* OR s[i] = s[i] - 32; */
																	}
										i++;
											}
				return (s);
}
