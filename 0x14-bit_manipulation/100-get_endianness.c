/**
* get_endianness - Checks the syst endianness
* Return: 0 (if big) | 1 (if little)
*/
int get_endianness(void)
{
unsigned int bitNum = 1;
char *end_ian = (char *)&bitNum;

return ((int)*end_ian);
}
