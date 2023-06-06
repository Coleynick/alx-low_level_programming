#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node in a listint_t linked list.
* @head: Points to the head of the list.
* @idx: Index of the list where the new node should be added.
* @n: New node value.
*
* Return: New node address or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newNode;
listint_t *temp = *head;
unsigned int nc_count = 0;

if (idx == 0)
return (add_nodeint(head, n));

while (temp != NULL && nc_count < idx - 1)
{
temp = temp->next;
nc_count++;
}

if (temp == NULL)
return (NULL);

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = temp->next;
temp->next = newNode;

return (newNode);
}
