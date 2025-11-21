#include "main.h"

/**
 *  * _strcpy - copies the string pointed to by src, including the
 *   * terminating null byte (\0), to the buffer pointed to by dest.
 *    * @dest: pointer to the destination buffer
 *     * @src: pointer to the source string
 *      *
 *       * Return: A pointer to the destination string 'dest'.
 *        */
char *_strcpy(char *dest, char *src)
{
		int i = 0;

			/* Loop until the null terminator is encountered and copied */
			while (src[i] != '\0')
					{
								dest[i] = src[i];
										i++;
											}

				/* Copy the null terminator itself to ensure dest is a valid string */
				dest[i] = '\0';

					return (dest);
}
