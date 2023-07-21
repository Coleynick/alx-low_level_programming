#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - Deletes new node.
* @head: Points to head.
* @index: Index of the node.
* Return: 1 (success) or -1 (failed).
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currentNode = *head;
	unsigned int countNodes = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(currentNode);
		return (1);
	}
	while (currentNode != NULL && countNodes < index)
	{
		currentNode = currentNode->next;
		countNodes++;
	}
	if (currentNode == NULL)
		return (-1);
	if (currentNode->next != NULL)
		currentNode->next->prev = currentNode->prev;
	if (currentNode->prev != NULL)
		currentNode->prev->next = currentNode->next;
	free(currentNode);
	return (1);
}
