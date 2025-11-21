#include "main.h"

/**
 *  * leet - Encodes a string into 1337 (leet speak).
 *   * The letters a and A are replaced by 4
 *    * The letters e and E are replaced by 3
 *     * The letters o and O are replaced by 0
 *      * The letters t and T are replaced by 7
 *       * The letters l and L are replaced by 1
 *        * @s: The string to be encoded.
 *         *
 *          * Return: A pointer to the encoded string s.
 *           */
char *leet(char *s)
{
		int i, j;
			char leet_chars[] = "aAeEoOtTlL";
				char leet_codes[] = "4433007711";

					for (i = 0; s[i] != '\0'; i++)
							{
										for (j = 0; leet_chars[j] != '\0'; j++)
													{
																	if (s[i] == leet_chars[j])
																					{
																										s[i] = leet_codes[j];
																														/* Break inner loop once a match is found */
																														break;
																																	}
																			}
											}
						return (s);
}
