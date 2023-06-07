#include "lists.h"

/**
* free_listint_safe - Frees a listint_t list.
* @h: Points to the head of the linked list.
*
* Return: List size
*/
size_t free_listint_safe(listint_t **h)
{
size_t nc_count = 0;
int size;
listint_t *prs, *next;

if (h == NULL || *h == NULL)
return (0);

prs = *h;
while (prs != NULL)
{
nc_count++;
next = prs->next;
free(prs);
if (next >= prs)
break;
prs = next;
}

*h = NULL;
size = nc_count;
return (size);
}
