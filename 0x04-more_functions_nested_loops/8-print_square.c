#include "main.h"

/**
* print_square - Prints a square of a given size.
*
* @size: Size of the square.
*
* Return: void.
*/

void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
