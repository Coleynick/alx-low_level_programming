#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* add_nodeint_end - Joins a new node to the end of a listint_t list
* @head: Double pointer to the head of the list
* @n:  Rep the new node
*
* Return: New element address or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode;
listint_t *lastNode;

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
return (newNode);
}

lastNode = *head;
while (lastNode->next != NULL)
lastNode = lastNode->next;

lastNode->next = newNode;

return (newNode);
}
