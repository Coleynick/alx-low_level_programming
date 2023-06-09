/**
* set_bit - Sets the bit value to 1 at a given index
* @n: Points to the num
* @index: Index of d bit 2 set
* Return: 1(Success) or -1 (error)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int long k = 1UL;
k = k << index;
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n = *n | k;
return (1);
}
