#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
* @head: Points to the head of the linked list.
* @index: Index of the node to be retrieved
*
* Return: Nth node or NULL if it does not exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int nc_count = 0;
listint_t *prs = head;

while (prs != NULL)
{
if (nc_count == index)
return (prs);

prs = prs->next;
nc_count++;
}

return (NULL);
}
