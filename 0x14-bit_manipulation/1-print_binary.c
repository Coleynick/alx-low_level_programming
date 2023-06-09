#include "main.h"

/**
* print_binary - Prints the binary representation of a num
* @n: Num to convert to binNum
*Return: Nothing
*/
void print_binary(unsigned long int n)
{
unsigned long int s = n;
if (s > 1)
print_binary(s >> 1);

_putchar((s & 1) + '0');
}
