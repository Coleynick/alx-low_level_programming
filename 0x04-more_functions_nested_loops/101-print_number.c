#include "main.h"

/**
* print_number - prints an integer
* @n: integer to print
*
* Return: void
*/
void print_number(int n)
{
unsigned int num;
int i, j, digit_count = 0, divisor = 1;

if (n < 0) {
_putchar('-');
num = -n;
} else {
num = n;
}

while (num / divisor > 9)
{
digit_count++;
divisor *= 10;
}

for (i = digit_count; i >= 0; i--)
{
j = num / divisor;
_putchar('0' + j);
num -= j * divisor;
divisor /= 10;
}
}
