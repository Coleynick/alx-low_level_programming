#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert.
 *
 * Return: the integer value of the converted string.
 */
int _atoi(char *s)
{
int sign = 1;
int num = 0;
int i = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;

if (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');

if (s[i + 1] < '0' || s[i + 1] > '9')
break;
}

i++;
}

return (num *sign);
}
