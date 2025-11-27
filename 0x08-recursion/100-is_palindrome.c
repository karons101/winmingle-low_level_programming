#include "main.h"

/**
 *  * _strlen_recursion - Returns the length of a string (recursive helper).
 *   * @s: The string.
 *    * Return: The length of the string.
 *     */
static int _strlen_recursion(char *s)
{
		if (*s == '\0')
				{
							return (0);
								}
			return (1 + _strlen_recursion(s + 1));
}

/**
 *  * _check_palindrome - Helper function to check for palindrome recursively.
 *   * @s: The string.
 *    * @start: The starting index.
 *     * @end: The ending index.
 *      *
 *       * Return: 1 if palindrome, 0 if not.
 *        */
static int _check_palindrome(char *s, int start, int end)
{
		/* Base case 1: Indices have crossed or met (string is palindrome) */
		if (start >= end)
				{
							return (1);
								}

			/* Base case 2: Characters don't match (not palindrome) */
			if (s[start] != s[end])
					{
								return (0);
									}

				/* Recursive step: Check the inner characters */
				return (_check_palindrome(s, start + 1, end - 1));
}

/**
 *  * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 *   * @s: The string to check.
 *    *
 *     * Return: 1 if palindrome, 0 otherwise.
 *      */
int is_palindrome(char *s)
{
		int len = _strlen_recursion(s);

			/* Empty string case */
			if (len == 0)
					{
								return (1);
									}

				return (_check_palindrome(s, 0, len - 1));
}
