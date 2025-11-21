#include "main.h"

/**
 *  * _puts - prints a string, followed by a new line, to stdout
 *   * @str: pointer to the string to print
 *    *
 *     * Return: void
 *      */
void _puts(char *str)
{
		/* Loop through the string until the null terminator is reached */
		while (*str != '\0')
				{
							_putchar(*str);
									str++; /* Move to the next character */
										}

			/* Print the newline character */
			_putchar('\n');
}
