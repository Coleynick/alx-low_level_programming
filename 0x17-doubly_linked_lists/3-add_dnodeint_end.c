#include "lists.h"
#include <stdlib.h>
/**
* add_dnodeint_end - Adds new node at the end of a dlistint_t list.
* @head: Points head.
* @n: Store the new node.
* Return: New L-ment address or NULL(failed).
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *currentNode = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while (currentNode->next != NULL)
		currentNode = currentNode->next;

	currentNode->next = newNode;
	newNode->prev = currentNode;

	return (newNode);
}
