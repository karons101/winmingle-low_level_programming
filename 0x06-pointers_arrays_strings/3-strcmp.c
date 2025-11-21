#include "main.h"

/**
 *  * _strcmp - Compares two strings character by character.
 *   * @s1: The first string.
 *    * @s2: The second string.
 *     *
 *      * Return: An integer less than, equal to, or greater than zero if s1 is
 *       * found, respectively, to be less than, to match, or be greater
 *        * than s2.
 *         */
int _strcmp(char *s1, char *s2)
{
		int i = 0;

			while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
					{
								i++;
									}

				/* The difference will be 0 if strings are identical up to the null byte */
				return (s1[i] - s2[i]);
}
