#include "main.h"

/**
 *  * _strlen_recursion - Returns the length of a string using recursion.
 *   * @s: The string to calculate the length of.
 *    *
 *     * Return: The length of the string, or 0 if the string is empty.
 *      */
int _strlen_recursion(char *s)
{
		if (*s == '\0') /* Base case: end of string */
				{
							return (0);
								}

			/*
			 * 	 * Recursive step: 1 (for the current character) +
			 * 	 	 * length of the rest of the string.
			 * 	 	 	 */
			return (1 + _strlen_recursion(s + 1));
}
