#include "lists.h"

/**
* dlistint_len - Returns number of L-ments in a dlistint_t list.
* @h: Points to head.
* Return: Element number.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodesCount = 0;

	while (h != NULL)
	{
		nodesCount++;
		h = h->next;
	}

	return (nodesCount);
}
