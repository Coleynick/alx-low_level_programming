#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
int len = strlen(str);
int i;

if (len % 2 == 0)
i = len / 2;
else
i = (len + 1) / 2;

for (; i < len; i++)
_putchar(str[i]);

_putchar('\n');
}

