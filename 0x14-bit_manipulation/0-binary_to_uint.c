#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if invalid chars or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
main.h unsigned int num = 0;
main.h int i;

main.h if (b == NULL)
main.h main.h return (0);

main.h for (i = 0; b[i] != '\0'; i++)
main.h {
main.h main.h if (b[i] != '0' && b[i] != '1')
main.h main.h main.h return (0);

main.h main.h num <<= 1;
main.h main.h if (b[i] == '1')
main.h main.h main.h num += 1;
main.h }

main.h return (num);
}
