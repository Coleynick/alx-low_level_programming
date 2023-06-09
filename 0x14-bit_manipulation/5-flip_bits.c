/**
* flip_bits - Returns d butNum needed to flip to get from 1 num to another
* @n: First num
* @m: Second(2nd) num
* Return: bitNum to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int k = n ^ m;
unsigned int bitNum = 0;
unsigned int r = 0;

while (k > r)
{
bitNum += k & 1;
k >>= 1;
}

return (bitNum);
}
