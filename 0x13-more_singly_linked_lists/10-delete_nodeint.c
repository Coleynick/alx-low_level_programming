#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at a given index
* @head: Double pointer to the head of the list
* @index: The node to delete
*
* Return: 1 if successful, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *Prs, *former;
unsigned int a;

if (head == NULL || *head == NULL)
return (-1);

prs = *head;
former = NULL;

if (index == 0)
{
*head = (*head)->next;
free(prs);
return (1);
}

for (a = 0; a < index; a++)
{
if (prs == NULL)
return (-1);
former = prs;
prs = prs->next;
}

if (prs == NULL)
return (-1);

former->next = prs->next;
free(prs);

return (1);
}

