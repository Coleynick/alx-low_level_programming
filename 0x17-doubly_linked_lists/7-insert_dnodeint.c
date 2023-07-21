#include "lists.h"
#include <stdlib.h>
/**
* insert_dnodeint_at_index - Inserts new node.
* @h: Points to head.
* @idx: Index where the new node should be added.
* @n: Data to be stored (in the new node).
*
* Return: New node address or NULL (failed).
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newNode, *currentNode = *h;
unsigned int countNode = 0;

newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = NULL;
newNode->prev = NULL;

if (idx == 0)
{
if (*h)
{
newNode->next = *h;
(*h)->prev = newNode;
}
*h = newNode;
return (newNode);
}
while (currentNode != NULL && countNode < idx - 1)
{
currentNode = currentNode->next;
countNode++;
}
if (currentNode == NULL)
{
free(newNode);
return (NULL);
}
newNode->next = currentNode->next;
newNode->prev = currentNode;
if (currentNode->next)
currentNode->next->prev = newNode;
currentNode->next = newNode;
return (newNode);
}
