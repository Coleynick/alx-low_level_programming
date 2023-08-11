#include "hash_tables.h"

/**
* hash_djb2 - Implement d djb2 hash algorit(hm).
* @str: The input str to be hashed.
*
* Return: D hash val.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int d;

	hash = 5381;
	while ((d = *str++))
	{
		hash = ((hash << 5) + hash) + d;
	}
	return (hash);
}
