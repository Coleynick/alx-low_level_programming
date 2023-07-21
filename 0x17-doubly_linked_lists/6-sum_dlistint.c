#include "lists.h"

/**
* sum_dlistint - Returns the sum of the list.
* @head: Points to head.
*
* Return: Sum or 0(empty).
*/
int sum_dlistint(dlistint_t *head)
{
	int a = 0;
	dlistint_t *currentNode = head;

	while (currentNode != NULL)
	{
		a += currentNode->n;
		currentNode = currentNode->next;
	}
	return (a);
}
