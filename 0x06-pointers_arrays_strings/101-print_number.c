#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: the integer to print
 */
void print_number(int n)
{
int divisor = 1;
int i, digit, negative = 0;

if (n < 0)
{
_putchar('-');
n = -n;
negative = 1;
}

    /* Find the largest power of 10 that divides n */
while (n / divisor > 9)
{
divisor *= 10;
}

    /* Print each digit in n, from left to right */
for (i = divisor; i > 0; i /= 10)
{
digit = n / i;
n %= i;
_putchar(digit + '0');
}

    /* If n was negative, we already printed the '-' sign */
if (negative == 0 && n == 0)
{
_putchar('0');
}
}
