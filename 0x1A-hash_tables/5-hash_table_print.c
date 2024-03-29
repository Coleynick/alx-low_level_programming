#include "hash_tables.h"

/**
* hash_table_print - Prints d hash_tab.
* @ht: D hash_tab 2 print.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *node;
	int fi_rst = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		node = ht->array[n];
		while (node != NULL)
		{
			if (!fi_rst)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			fi_rst = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
