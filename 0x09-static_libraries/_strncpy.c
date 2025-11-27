#include "main.h"

/**
 *  * _strncpy - Copies at most n bytes from src to dest.
 *   * @dest: The destination buffer.
 *    * @src: The source string.
 *     * @n: The maximum number of bytes to copy.
 *      *
 *       * Return: The pointer to dest.
 *        */
char *_strncpy(char *dest, char *src, int n)
{
		int i;

			for (i = 0; i < n && src[i] != '\0'; i++)
					{
								dest[i] = src[i];
									}

				/* Pad the rest of the buffer with null bytes if n > length of src */
				for (; i < n; i++)
						{
									dest[i] = '\0';
										}

					return (dest);
}
