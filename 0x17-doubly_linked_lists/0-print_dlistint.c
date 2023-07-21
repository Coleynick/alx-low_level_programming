#include "lists.h"

/**
 * print_dlistint - Prints every elment of a dlistint_t list.
 * @h: Points to head.
 * Return: From the list, the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t nodeCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}
