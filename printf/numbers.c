#include "main.h"

/**
 *  * get_num_len - gets the length of a number in a given base
 *   * @num: the number
 *    * @base: the base
 *     * Return: length of the number
 *      */
int get_num_len(unsigned long int num, int base)
{
		int len = 0;

			if (num == 0)
						return (1);
				while (num > 0)
						{
									num /= base;
											len++;
												}
					return (len);
}

/**
 *  * print_int - prints signed integers
 *   * @ap: argument list
 *    * @f: flags pointer
 *     * Return: count of characters printed
 *      */
int print_int(va_list ap, flags_t *f)
{
		long int n;
			unsigned long int num;
				int count = 0, len, p_len, w_len;
					unsigned long int tmp, divisor = 1;
						char pad;

							if (f->l)
										n = va_arg(ap, long int);
								else if (f->h)
											n = (short int)va_arg(ap, int);
									else
												n = va_arg(ap, int);
										if (n == 0 && f->precision == 0)
												{
															while (f->width--)
																			count += _putchar(' ');
																	return (count);
																		}
											num = (n < 0) ? -n : n;
												len = get_num_len(num, 10);
													p_len = (f->precision > len) ? f->precision : len;
														w_len = p_len + ((n < 0 || f->plus || f->space) ? 1 : 0);
															pad = (f->zero && f->precision == -1 && !f->minus) ? '0' : ' ';
																if (!f->minus && pad == ' ')
																			while (f->width-- > w_len)
																							count += _putchar(' ');
																	if (n < 0)
																				count += _putchar('-');
																		else if (f->plus)
																					count += _putchar('+');
																			else if (f->space)
																						count += _putchar(' ');
																				if (!f->minus && pad == '0')
																							while (f->width-- > w_len)
																											count += _putchar('0');
																					while (f->precision-- > len)
																								count += _putchar('0');
																						tmp = num;
																							while (tmp > 9)
																									{
																												divisor *= 10;
																														tmp /= 10;
																															}
																								while (divisor >= 1)
																										{
																													count += _putchar(((num / divisor) % 10) + '0');
																															divisor /= 10;
																																}
																									if (f->minus)
																												while (f->width-- > w_len)
																																count += _putchar(' ');
																										return (count);
}

/**
 *  * print_unsigned - prints unsigned integers
 *   * @ap: argument list
 *    * @f: flags pointer
 *     * Return: count of characters printed
 *      */
int print_unsigned(va_list ap, flags_t *f)
{
		unsigned long int n;
			unsigned long int tmp, divisor = 1;
				int count = 0, len, p_len;
					char pad;

						if (f->l)
									n = va_arg(ap, unsigned long int);
							else if (f->h)
										n = (unsigned short int)va_arg(ap, unsigned int);
								else
											n = va_arg(ap, unsigned int);
									if (n == 0 && f->precision == 0)
											{
														while (f->width-- > 0)
																		count += _putchar(' ');
																return (count);
																	}
										len = get_num_len(n, 10);
											p_len = (f->precision > len) ? f->precision : len;
												pad = (f->zero && f->precision == -1 && !f->minus) ? '0' : ' ';
													if (!f->minus)
																while (f->width-- > p_len)
																				count += _putchar(pad);
														while (f->precision-- > len)
																	count += _putchar('0');
															tmp = n;
																while (tmp > 9)
																		{
																					divisor *= 10;
																							tmp /= 10;
																								}
																	while (divisor >= 1)
																			{
																						count += _putchar(((n / divisor) % 10) + '0');
																								divisor /= 10;
																									}
																		if (f->minus)
																					while (f->width-- > p_len)
																									count += _putchar(' ');
																			return (count);
}

/**
 *  * print_octal - prints octal numbers
 *   * @ap: argument list
 *    * @f: flags pointer
 *     * Return: count of characters printed
 *      */
int print_octal(va_list ap, flags_t *f)
{
		unsigned long int n;
			int i, count = 0, len, p_len;
				int oct[22];
					char pad;

						if (f->l)
									n = va_arg(ap, unsigned long int);
							else if (f->h)
										n = (unsigned short int)va_arg(ap, unsigned int);
								else
											n = va_arg(ap, unsigned int);
									if (n == 0 && f->precision == 0)
											{
														while (f->width-- > 0)
																		count += _putchar(' ');
																return (count);
																	}
										len = get_num_len(n, 8);
											p_len = (f->precision > len) ? f->precision : len;
												if (f->hash && n != 0)
															p_len++;
													pad = (f->zero && f->precision == -1 && !f->minus) ? '0' : ' ';
														if (!f->minus && pad == '0' && f->hash && n != 0)
																	count += _putchar('0');
															if (!f->minus)
																		while (f->width-- > p_len)
																						count += _putchar(pad);
																if (!f->minus && pad == ' ' && f->hash && n != 0)
																			count += _putchar('0');
																	if (f->minus && f->hash && n != 0)
																				count += _putchar('0');
																		while (f->precision-- > len)
																					count += _putchar('0');
																			if (n == 0)
																						return (count + _putchar('0'));
																				for (i = 0; n > 0; i++)
																						{
																									oct[i] = n % 8;
																											n /= 8;
																												}
																					for (i--; i >= 0; i--)
																								count += _putchar(oct[i] + '0');
																						if (f->minus)
																									while (f->width-- > p_len)
																													count += _putchar(' ');
																							return (count);
}

/**
 *  * print_hex - prints lowercase hex
 *   * @ap: argument list
 *    * @f: flags pointer
 *     * Return: count
 *      */
int print_hex(va_list ap, flags_t *f)
{
		unsigned long int n;
			int i, count = 0, len, p_len;
				char hex[18], *alpha = "0123456789abcdef", pad;

					if (f->l)
								n = va_arg(ap, unsigned long int);
						else if (f->h)
									n = (unsigned short int)va_arg(ap, unsigned int);
							else
										n = va_arg(ap, unsigned int);
								if (n == 0 && f->precision == 0)
										{
													while (f->width-- > 0)
																	count += _putchar(' ');
															return (count);
																}
									len = get_num_len(n, 16);
										p_len = (f->precision > len) ? f->precision : len;
											if (f->hash && n != 0)
														p_len += 2;
												pad = (f->zero && f->precision == -1 && !f->minus) ? '0' : ' ';
													if (!f->minus && pad == '0' && f->hash && n != 0)
															{
																		count += _putchar('0');
																				count += _putchar('x');
																					}
														if (!f->minus)
																	while (f->width-- > p_len)
																					count += _putchar(pad);
															if (!f->minus && pad == ' ' && f->hash && n != 0)
																	{
																				count += _putchar('0');
																						count += _putchar('x');
																							}
																if (f->minus && f->hash && n != 0)
																		{
																					count += _putchar('0');
																							count += _putchar('x');
																								}
																	while (f->precision-- > len)
																				count += _putchar('0');
																		if (n == 0)
																					return (count + _putchar('0'));
																			for (i = 0; n > 0; i++)
																					{
																								hex[i] = alpha[n % 16];
																										n /= 16;
																											}
																				for (i--; i >= 0; i--)
																							count += _putchar(hex[i]);
																					if (f->minus)
																								while (f->width-- > p_len)
																												count += _putchar(' ');
																						return (count);
}

/**
 *  * print_HEX - prints uppercase hex
 *   * @ap: argument list
 *    * @f: flags pointer
 *     * Return: count
 *      */
int print_HEX(va_list ap, flags_t *f)
{
		unsigned long int n;
			int i, count = 0, len, p_len;
				char hex[18], *alpha = "0123456789ABCDEF", pad;

					if (f->l)
								n = va_arg(ap, unsigned long int);
						else if (f->h)
									n = (unsigned short int)va_arg(ap, unsigned int);
							else
										n = va_arg(ap, unsigned int);
								if (n == 0 && f->precision == 0)
										{
													while (f->width-- > 0)
																	count += _putchar(' ');
															return (count);
																}
									len = get_num_len(n, 16);
										p_len = (f->precision > len) ? f->precision : len;
											if (f->hash && n != 0)
														p_len += 2;
												pad = (f->zero && f->precision == -1 && !f->minus) ? '0' : ' ';
													if (!f->minus && pad == '0' && f->hash && n != 0)
															{
																		count += _putchar('0');
																				count += _putchar('X');
																					}
														if (!f->minus)
																	while (f->width-- > p_len)
																					count += _putchar(pad);
															if (!f->minus && pad == ' ' && f->hash && n != 0)
																	{
																				count += _putchar('0');
																						count += _putchar('X');
																							}
																if (f->minus && f->hash && n != 0)
																		{
																					count += _putchar('0');
																							count += _putchar('X');
																								}
																	while (f->precision-- > len)
																				count += _putchar('0');
																		if (n == 0)
																					return (count + _putchar('0'));
																			for (i = 0; n > 0; i++)
																					{
																								hex[i] = alpha[n % 16];
																										n /= 16;
																											}
																				for (i--; i >= 0; i--)
																							count += _putchar(hex[i]);
																					if (f->minus)
																								while (f->width-- > p_len)
																												count += _putchar(' ');
																						return (count);
}

/**
 *  * print_binary - prints binary numbers
 *   * @ap: argument list
 *    * @f: flags pointer
 *     * Return: count
 *      */
int print_binary(va_list ap, flags_t *f)
{
		unsigned int n = va_arg(ap, unsigned int);
			int count = 0, i;
				char res[33];

					(void)f;
						if (n == 0)
									return (_putchar('0'));
							for (i = 0; n > 0; i++)
									{
												res[i] = (n % 2) + '0';
														n /= 2;
															}
								for (i--; i >= 0; i--)
											count += _putchar(res[i]);
									return (count);
}

/**
 *  * print_pointer - prints pointer addresses
 *   * @ap: argument list
 *    * @f: flags pointer
 *     * Return: count
 *      */
int print_pointer(va_list ap, flags_t *f)
{
		void *addr = va_arg(ap, void *);
			unsigned long int p;
				char *hex = "0123456789abcdef", buffer[20];
					int i = 0, count = 0;

						(void)f;
							if (!addr)
									{
												char *nil = "(nil)";

														while (nil[count])
																	{
																					count += _putchar(nil[count]);
																							}
																return (count);
																	}
								p = (unsigned long int)addr;
									count += _putchar('0');
										count += _putchar('x');
											if (p == 0)
														return (count += _putchar('0'));
												while (p > 0)
														{
																	buffer[i++] = hex[p % 16];
																			p /= 16;
																				}
													for (i--; i >= 0; i--)
																count += _putchar(buffer[i]);
														return (count);
}
