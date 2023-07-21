#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node list.
* @head: Points to head.
* @index: Index of node.
*
* Return: Pointer of nth node or NULL (non-exist node).
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodesCount = 0;
	dlistint_t *currentNode = head;

	while (currentNode != NULL)
	{
		if (nodesCount == index)
			return (currentNode);
		currentNode = currentNode->next;
		nodesCount++;
	}
	return (NULL);
}
