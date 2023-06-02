#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
* print_list - Prints everything in a list_t list.
* @h: Points to the head of the list_t list.
*
* Return: The nodes number(nodesNum).
*/
size_t print_list(const list_t *h)
{
size_t nodesNum = 0;
char nullChar[7] = "(nil)";
int zero = 0;

while (h != NULL)
{
if (h->str == NULL)
{
putchar('[');
putchar(zero + '0');
putchar(']');
printf(" %s\n", nullChar);
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
nodesNum++;
h = h->next;
}
return (nodesNum);
}
