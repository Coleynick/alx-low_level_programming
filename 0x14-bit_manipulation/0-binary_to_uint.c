#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - Converts a binary num to an unsigned integer
* @b: 0 & 1 chars string pointer
* Return: The bitNum or 0.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int bitNum = 0;

if (b == NULL)
return (0);

for (; *b != '\0'; b++)
{
if (*b == '0')
bitNum = (bitNum << 1);
else if (*b == '1')
bitNum = (bitNum << 1) | 1;
else
return (0);
}

return (bitNum);
}
