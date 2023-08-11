#include "hash_tables.h"

/**
* hash_table_set - Adds an elment to d hash_tab.
* @ht: D hash_tab.
* @key: D key 2 add or update.
* @value: D val associated wit d key.
*
* Return: 1(successful) or 0(fail).
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	hash_node_t *newNode = NULL, *prs = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	prs = ht->array[indx];
	while (prs)
	{
		if (strcmp(prs->key, key) == 0)
		{
			free(prs->value);
			prs->value = strdup(value);
			if (prs->value == NULL)
				return (0);
			return (1);
		}
		prs = prs->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}
	newNode->next = ht->array[indx];
	ht->array[indx] = newNode;
	return (1);
}
