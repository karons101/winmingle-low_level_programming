#include "main.h"

/**
 *  * _printf - custom printf function
 *   * @format: format string
 *    * Return: number of characters printed
 *     */
int _printf(const char *format, ...)
{
		va_list ap;
			int i = 0, j, count = 0;
				flags_t flags;
					fmt_t ops[] = {
								{'c', print_char}, {'s', print_string}, {'%', print_percent},
										{'d', print_int}, {'i', print_int}, {'b', print_binary},
												{'u', print_unsigned}, {'o', print_octal}, {'x', print_hex},
														{'X', print_HEX}, {'S', print_S}, {'p', print_pointer},
																{'r', print_rev}, {'R', print_rot13}, {0, NULL}
									};

						if (!format || (format[0] == '%' && !format[1]))
									return (-1);
							va_start(ap, format);
								while (format && format[i])
										{
													if (format[i] == '%')
																{
																				i++;
																							flags.plus = 0; flags.space = 0; flags.hash = 0;
																										flags.l = 0; flags.h = 0; flags.width = 0;
																													flags.precision = -1; flags.zero = 0; flags.minus = 0;
																																get_flag(format, &i, &flags);
																																			j = 0;
																																						while (ops[j].type)
																																										{
																																															if (ops[j].type == format[i])
																																																				{
																																																										count += ops[j].f(ap, &flags);
																																																															break;
																																																																			}
																																																			j++;
																																																						}
																																									if (!ops[j].type)
																																													{
																																																		count += _putchar('%');
																																																						count += _putchar(format[i]);
																																																									}
																																											}
															else
																			count += _putchar(format[i]);
																	i++;
																		}
									_putchar(-1);
										va_end(ap);
											return (count);
}
