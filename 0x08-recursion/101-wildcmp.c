#include "main.h"

/**
 *  * wildcmp - Compares two strings recursively, handling the '*' wildcard.
 *   * @s1: The first string (regular string).
 *    * @s2: The second string (may contain '*').
 *     *
 *      * Return: 1 if the strings can be considered identical, 0 otherwise.
 *       */
int wildcmp(char *s1, char *s2)
{
		/* Base Case 1: Both strings have reached the end */
		if (*s1 == '\0' && *s2 == '\0')
				{
							return (1);
								}

			/* Base Case 2: Current characters match OR s2 has a '?' (implied wildcard behavior) */
			if (*s1 == *s2)
					{
								return (wildcmp(s1 + 1, s2 + 1));
									}

				/* Case 3: s2 is '*' */
				if (*s2 == '*')
						{
									/*
									 * 		 * Check three possibilities for the '*':
									 * 		 		 * 1. The '*' matches an empty string (s1 stays, s2 moves past '*')
									 * 		 		 		 * 2. The '*' matches the current character in s1 (s1 moves, s2 stays at '*')
									 * 		 		 		 		 * 3. s1 ends and s2 contains only '*' (handled by Base Case 1 after recursion)
									 * 		 		 		 		 		 */
									return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
										}

					/* Base Case 4: No match, no wildcard */
					return (0);
}
