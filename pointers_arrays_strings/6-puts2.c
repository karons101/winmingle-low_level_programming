#include "main.h"

/**
 *  * puts2 - prints every other character of a string,
 *   * starting with the first character, followed by a new line.
 *    * @str: pointer to the string
 *     *
 *      * Return: void
 *       */
void puts2(char *str)
{
		int i = 0;

			/* Loop until the null terminator is reached */
			while (str[i] != '\0')
					{
								_putchar(str[i]);
										i += 2; /* Move 2 positions to skip the next character */
											}

				/* Print the required newline */
				_putchar('\n');
}
