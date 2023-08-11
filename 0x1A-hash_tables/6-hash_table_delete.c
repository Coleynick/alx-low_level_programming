#include "hash_tables.h"

/**
* free_list - Frees a linked list of hash nodes.
* @head: Points to the head.
*/
void free_list(hash_node_t *head)
{
	hash_node_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
}

/**
* hash_table_delete - Dletes a hash_tab.
* @ht: Points to the hash _tab.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n;

	if (ht == NULL)
		return;

	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			free_list(ht->array[n]);
		}
	}
	free(ht->array);
	free(ht);
}
