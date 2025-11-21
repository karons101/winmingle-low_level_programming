#include "main.h"

/**
 *  * _strcat - Appends the src string to the dest string, overwriting
 *   * the terminating null byte (\0) at the end of dest, and
 *    * then adds a terminating null byte.
 *     * @dest: The string to be appended to.
 *      * @src: The string to append.
 *       *
 *        * Return: A pointer to the resulting string dest.
 *         */
char *_strcat(char *dest, char *src)
{
		int dest_len = 0;
			int i = 0;

				/* Find the end of dest string */
				while (dest[dest_len] != '\0')
						{
									dest_len++;
										}

					/* Append src to dest */
					while (src[i] != '\0')
							{
										dest[dest_len + i] = src[i];
												i++;
													}

						/* Add the terminating null byte */
						dest[dest_len + i] = '\0';

							return (dest);
}
