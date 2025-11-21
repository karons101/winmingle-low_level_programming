#include "main.h"

/**
 *  * rev_string - reverses a string in place
 *   * @s: pointer to the string
 *    *
 *     * Return: void
 *      */
void rev_string(char *s)
{
		int length = 0;
			int i = 0;
				char temp;

					/* 1. Calculate the length of the string */
					while (s[length] != '\0')
							{
										length++;
											}

						/* 2. Loop and swap from both ends toward the middle */
						for (i = 0; i < length / 2; i++)
								{
											/* Store the character at the start (s[i]) */
											temp = s[i];
													
													/* Replace the start character with the end character (s[length - 1 - i]) */
													s[i] = s[length - 1 - i];
															
															/* Replace the end character with the stored start character (temp) */
															s[length - 1 - i] = temp;
																}
}
