#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number to add
 * @n2: Second number to add
 * @r: Buffer where the result is stored
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, len_sum = 0, carry = 0, sum = 0;
char *p1 = n1, *p2 = n2, *psum = r;

    /* Find the lengths of the numbers */
while (*p1++)
len1++;
while (*p2++)
len2++;

    /* Check if the result can be stored in r */
if (len1 + len2 >= size_r)
return (0);

    /* Add the numbers digit by digit */
p1 = n1 + len1 - 1;
p2 = n2 + len2 - 1;
psum = r + len1 + len2;
*psum-- = '\0';

while (len1 > 0 || len2 > 0)
{
sum = carry;
if (len1 > 0)
sum += (*p1-- - '0');
if (len2 > 0)
sum += (*p2-- - '0');
carry = sum / 10;
*psum-- = (sum % 10) + '0';
len1--;
len2--;
len_sum++;
}

if (carry != 0)
*psum-- = carry + '0';

if (len_sum > size_r - 1)
return (0);

return (psum + 1);
}
