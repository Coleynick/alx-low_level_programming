#include "lists.h"
#include <stddef.h>

/**
* list_len - Counts & returns the nodes in a list_len list.
* @h: Points to the head of the list.
*
* Return: The nodes number(nodesNum).
*/
size_t list_len(const list_t *h)
{
size_t nodesNum;

for (nodesNum = 0; h != NULL; nodesNum++, h = h->next)
;

return (nodesNum);
}
