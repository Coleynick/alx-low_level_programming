#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - Frees list.
* @head: Points to head.
* Return: void.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;

	while (head != NULL)
	{
		currentNode = head;
		head = head->next;
		free(currentNode);
	}
}
