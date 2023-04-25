#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int digit1 = 0;
int digit2 = 0;
while (digit1 <= 9)
{
while (digit2 <= 9)
{
if (!(digit1 > digit2) || digit1 == digit2)
{
putchar(digit1);
putchar(digit2);
if (digit1 == 8 && digit2 == 9)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
digit2++;
}
digit2 = 0;
digit1++;
}
return (0);
}
