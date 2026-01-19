#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *  * struct flags - holds toggle states for all modifiers
 *   * @plus: flag for '+'
 *    * @space: flag for ' '
 *     * @hash: flag for '#'
 *      * @l: flag for 'l'
 *       * @h: flag for 'h'
 *        * @width: field width
 *         * @precision: field precision
 *          * @zero: flag for '0'
 *           * @minus: flag for '-'
 *            */
typedef struct flags
{
		int plus;
			int space;
				int hash;
					int l;
						int h;
							int width;
								int precision;
									int zero;
										int minus;
} flags_t;

/**
 *  * struct fmt - Struct op
 *   * @type: The format
 *    * @f: The function associated
 *     */
typedef struct fmt
{
		char type;
			int (*f)(va_list, flags_t *);
} fmt_t;

/* Engine */
int _printf(const char *format, ...);
int _putchar(char c);
int get_flag(const char *s, int *i, flags_t *f);

/* Printing Functions */
int print_char(va_list ap, flags_t *f);
int print_string(va_list ap, flags_t *f);
int print_percent(va_list ap, flags_t *f);
int print_int(va_list ap, flags_t *f);
int print_binary(va_list ap, flags_t *f);
int print_unsigned(va_list ap, flags_t *f);
int print_octal(va_list ap, flags_t *f);
int print_hex(va_list ap, flags_t *f);
int print_HEX(va_list ap, flags_t *f);
int print_S(va_list ap, flags_t *f);
int print_pointer(va_list ap, flags_t *f);
int print_rev(va_list ap, flags_t *f);
int print_rot13(va_list ap, flags_t *f);

#endif
