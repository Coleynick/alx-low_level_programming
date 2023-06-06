#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
* print_listint - Prints all listint_t list elements
* @h: Pointer to the head of the list
*
* Return: The nodes counted
*/
size_t print_listint(const listint_t *h)
{
size_t nc_count = 0;
if (h == NULL)
return (0);
else
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
nc_count++;
}
return (nc_count);
}
