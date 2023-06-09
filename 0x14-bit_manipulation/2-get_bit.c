#include "main.h"
/**
* get_bit - Gets bit value at a given index
* @n: Num the bit is retrieved from
* @index: The index of the bit to retrieve
* Return: Bit val @ the specified index or -1 (error)
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int R = 1UL << index;

if (index >= (sizeof(unsigned long int) * 8))
return (-1);

if ((n & R) == 0)
return (0);
else
return (1);
}
