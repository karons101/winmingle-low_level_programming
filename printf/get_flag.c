#include "main.h"

/**
 *  * get_flag - checks for flags, length, width, and precision
 *   * @s: string
 *    * @i: current index
 *     * @f: flags struct
 *      * Return: 1 if flag found
 *       */
int get_flag(const char *s, int *i, flags_t *f)
{
		int found = 0;

			while (s[*i])
					{
								if (s[*i] == '+') f->plus = 1;
										else if (s[*i] == ' ') f->space = 1;
												else if (s[*i] == '#') f->hash = 1;
														else if (s[*i] == '0') f->zero = 1;
																else if (s[*i] == '-') f->minus = 1;
																		else if (s[*i] == 'l') f->l = 1;
																				else if (s[*i] == 'h') f->h = 1;
																						else if (s[*i] >= '1' && s[*i] <= '9')
																									{
																													f->width = 0;
																																while (s[*i] >= '0' && s[*i] <= '9')
																																				{
																																									f->width = f->width * 10 + (s[*i] - '0');
																																													(*i)++;
																																																}
																																			(*i)--;
																																					}
																								else if (s[*i] == '.')
																											{
																															f->precision = 0;
																																		(*i)++;
																																					while (s[*i] >= '0' && s[*i] <= '9')
																																									{
																																														f->precision = f->precision * 10 + (s[*i] - '0');
																																																		(*i)++;
																																																					}
																																								(*i)--;
																																										}
																										else break;
																												(*i)++;
																														found = 1;
																															}
				return (found);
}
