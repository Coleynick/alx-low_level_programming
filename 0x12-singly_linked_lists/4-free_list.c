#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees  list.
 * @head: Points to the head of the list_t list.
 */

void free_list(list_t *head)
{
list_t *prs;

while (head != NULL)
{
prs = head;
head = head->next;
free(prs->str);
free(prs);
}
}
