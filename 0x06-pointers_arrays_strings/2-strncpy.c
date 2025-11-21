#include "main.h"

/**
 *  * _strncpy - Copies up to n characters from the string pointed to by src
 *   * to the buffer pointed to by dest.
 *    * @dest: The destination buffer.
 *     * @src: The source string.
 *      * @n: The maximum number of bytes to copy.
 *       *
 *        * Return: A pointer to the destination string dest.
 *         */
char *_strncpy(char *dest, char *src, int n)
{
		int i;

			/* Copy characters up to n */
			for (i = 0; i < n && src[i] != '\0'; i++)
					{
								dest[i] = src[i];
									}

				/* Pad the rest of the n bytes with null bytes if src is shorter than n */
				for (; i < n; i++)
						{
									dest[i] = '\0';
										}

					return (dest);
}
