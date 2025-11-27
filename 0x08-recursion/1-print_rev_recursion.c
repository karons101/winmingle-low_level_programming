#include "main.h"

/**
 *  * _print_rev_recursion - Prints a string in reverse using recursion.
 *   * @s: The string to be printed in reverse.
 *    */
void _print_rev_recursion(char *s)
{
		if (*s == '\0') /* Base case: end of string */
				{
							return;
								}

			/*
			 * 	 * Recursive step: call the function for the rest of the string first,
			 * 	 	 * then print the current character on the way back up the call stack.
			 * 	 	 	 */
			_print_rev_recursion(s + 1);
				_putchar(*s);
}
