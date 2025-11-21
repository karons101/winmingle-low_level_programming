/**
 *  * _strlen - returns the length of a string
 *   * @s: pointer to the string (the first character)
 *    *
 *     * Return: The length of the string, excluding the null terminator.
 *      */
int _strlen(char *s)
{
		int count = 0;

			/* Loop continues as long as the value at the current address is NOT '\0' */
			while (*s != '\0')
					{
								count++;
										s++; /* Move the pointer to the next character in memory */
											}

				return (count);
}
