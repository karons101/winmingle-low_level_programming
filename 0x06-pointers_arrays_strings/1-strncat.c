#include "main.h"

/**
 *  * _strncat - Concatenates two strings, using at most n bytes from src.
 *   * @dest: The string to be appended to.
 *    * @src: The string to append.
 *     * @n: The maximum number of bytes to use from src.
 *      *
 *       * Return: A pointer to the resulting string dest.
 *        */
char *_strncat(char *dest, char *src, int n)
{
		int dest_len = 0;
			int i;

				/* Find the end of dest string */
				while (dest[dest_len] != '\0')
						{
									dest_len++;
										}

					/* Append at most n bytes of src to dest */
					for (i = 0; i < n && src[i] != '\0'; i++)
							{
										dest[dest_len + i] = src[i];
											}

						/* Add the terminating null byte (important!) */
						dest[dest_len + i] = '\0';

							return (dest);
}
