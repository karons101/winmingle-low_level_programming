#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
unsigned long int mask;
char flag = 0;

if (n == 0)
{
_putchar('0');
return;
}

/* Create a mask starting at the most significant bit */
/* For a 64-bit unsigned long, this is 1 << 63 */
mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

while (mask > 0)
{
if (n & mask)
{
flag = 1;
_putchar('1');
}
else if (flag)
{
_putchar('0');
}
mask >>= 1;
}
}
