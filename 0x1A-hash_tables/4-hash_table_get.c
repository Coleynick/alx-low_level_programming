#include "hash_tables.h"

/**
* hash_table_get - Gets a val associated with a key.
* @ht: D hash_tab.
* @key: D key to look search.
*
* Return: D val associated with d key or NULL (!found).
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *prs;

	if (!ht || !key || *key == '\0')
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	prs = ht->array[indx];
	while (prs)
	{
		if (strcmp(prs->key, key) == 0)
			return (prs->value);
		prs = prs->next;
	}
	return (NULL);
}
