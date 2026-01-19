#include "main.h"

/**
 *  * _putchar - writes the character c to stdout using a buffer
 *   * @c: The character to print
 *    * Return: 1
 *     */
int _putchar(char c)
{
		static char buf[1024];
			static int i;

				if (c == -1 || i >= 1024)
						{
									write(1, buf, i);
											i = 0;
												}
					if (c != -1)
							{
										buf[i] = c;
												i++;
													}
						return (1);
}

/**
 *  * print_char - prints a character with width and alignment
 *   * @ap: argument list
 *    * @f: flags pointer
 *     * Return: count of characters
 *      */
int print_char(va_list ap, flags_t *f)
{
		int count = 0;
			char c = va_arg(ap, int);

				if (!f->minus)
						{
									while (f->width > 1)
												{
																count += _putchar(' ');
																			f->width--;
																					}
										}
					count += _putchar(c);
						if (f->minus)
								{
											while (f->width > 1)
														{
																		count += _putchar(' ');
																					f->width--;
																							}
												}
							return (count);
}

/**
 *  * print_string - prints a string with precision and alignment
 *   * @ap: argument list
 *    * @f: flags pointer
 *     * Return: count of characters
 *      */
int print_string(va_list ap, flags_t *f)
{
		char *s = va_arg(ap, char *);
			int i = 0, len = 0, count = 0, print_len;

				if (!s)
						{
									s = "(null)";
										}

					while (s[len])
							{
										len++;
											}

						print_len = (f->precision >= 0 && f->precision < len) ? f->precision : len;

							if (!f->minus)
									{
												while (f->width > print_len)
															{
																			count += _putchar(' ');
																						f->width--;
																								}
													}

								for (i = 0; i < print_len; i++)
										{
													count += _putchar(s[i]);
														}

									if (f->minus)
											{
														while (f->width > print_len)
																	{
																					count += _putchar(' ');
																								f->width--;
																										}
															}
										return (count);
}

/**
 *  * print_percent - prints a percent sign
 *   * @ap: argument list
 *    * @f: flags pointer
 *     * Return: 1
 *      */
int print_percent(va_list ap, flags_t *f)
{
		(void)ap;
			(void)f;
				return (_putchar('%'));
}

/**
 *  * print_S - prints string with hex for non-printables
 *   * @ap: argument list
 *    * @f: flags pointer
 *     * Return: count of characters
 *      */
int print_S(va_list ap, flags_t *f)
{
		char *s = va_arg(ap, char *);
			int i, count = 0;
				char *hex = "0123456789ABCDEF";
					(void)f;

						if (!s)
								{
											s = "(null)";
												}

							for (i = 0; s[i]; i++)
									{
												if (s[i] < 32 || s[i] >= 127)
															{
																			count += _putchar('\\');
																						count += _putchar('x');
																									count += _putchar(hex[(unsigned char)s[i] / 16]);
																												count += _putchar(hex[(unsigned char)s[i] % 16]);
																														}
														else
																	{
																					count += _putchar(s[i]);
																							}
															}
								return (count);
}
