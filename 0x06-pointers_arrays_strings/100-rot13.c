#include "main.h"

/**
 *  * rot13 - Encodes a string using the rot13 cipher.
 *   * @s: The string to be encoded/decoded.
 *    *
 *     * Return: A pointer to the modified string s.
 *      */
char *rot13(char *s)
{
		int i, j;
			char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
				char *rot13_map = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

					for (i = 0; s[i] != '\0'; i++)
							{
										for (j = 0; alphabet[j] != '\0'; j++)
													{
																	if (s[i] == alphabet[j])
																					{
																										s[i] = rot13_map[j];
																														/* Break inner loop once a match is found */
																														break;
																																	}
																			}
											}
						return (s);
}
