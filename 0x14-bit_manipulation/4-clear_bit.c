/**
* clear_bit - Sets the bit val to 0 at a given index
* @n: Points to the num
* @index: Index of the bit to set to 0
* Return: 1(success) or -1 (error)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int k = 1UL;
unsigned long int r = k << index;
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n &= ~r;
return (1);
}
