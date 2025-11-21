#include "main.h"

/**
 *  * is_separator - Checks if a character is a word separator.
 *   * @c: The character to check.
 *    *
 *     * Return: 1 if separator, 0 otherwise.
 *      */
int is_separator(char c)
{
		int i;
			char separators[] = " \t\n,;.!?\"(){}";

				for (i = 0; separators[i] != '\0'; i++)
						{
									if (c == separators[i])
													return (1);
										}
					return (0);
}

/**
 *  * cap_string - Capitalizes all words of a string.
 *   * @s: The string to be modified.
 *    *
 *     * Return: A pointer to the modified string s.
 *      */
char *cap_string(char *s)
{
		int i = 0;
			int capitalize_next = 1; /* Start by capitalizing the first character */

				while (s[i] != '\0')
						{
									if (is_separator(s[i]))
												{
																capitalize_next = 1;
																		}
											else if (capitalize_next && (s[i] >= 'a' && s[i] <= 'z'))
														{
																		/* Change to uppercase */
																		s[i] = s[i] - ('a' - 'A');
																					capitalize_next = 0;
																							}
													else
																{
																				capitalize_next = 0;
																						}
															i++;
																}

					return (s);
}
