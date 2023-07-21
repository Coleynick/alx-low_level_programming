#include "lists.h"
#include <stdlib.h>
/**
* add_dnodeint - Adds new node at the start of a dlistint_t list.
* @head: Points head.
* @n: Store the new node.
* Return: New L-ment address or NULL(failed).
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;
	return (newNode);
}
