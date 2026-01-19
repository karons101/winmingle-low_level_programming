#include "main.h"

/**
 *  * print_rev - prints a string in reverse
 *   * @ap: argument list
 *    * @f: flags pointer
 *     * Return: number of characters printed
 *      */
int print_rev(va_list ap, flags_t *f)
{
		char *s = va_arg(ap, char *);
			int i = 0, len = 0, count = 0;

				(void)f;
					if (!s)
								s = "(null)";

						while (s[len])
									len++;

							for (i = len - 1; i >= 0; i--)
									{
												count += _putchar(s[i]);
													}

								return (count);
}

/**
 *  * print_rot13 - encodes a string using rot13 and prints it
 *   * @ap: argument list
 *    * @f: flags pointer
 *     * Return: number of characters printed
 *      */
int print_rot13(va_list ap, flags_t *f)
{
		int i, j, count = 0;
			char *s = va_arg(ap, char *);
				char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
					char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

						(void)f;
							if (!s)
										s = "(null)";

								for (i = 0; s[i]; i++)
										{
													for (j = 0; in[j]; j++)
																{
																				if (s[i] == in[j])
																								{
																													count += _putchar(out[j]);
																																	break;
																																				}
																						}
															if (!in[j])
																		{
																						count += _putchar(s[i]);
																								}
																}
									return (count);
}
