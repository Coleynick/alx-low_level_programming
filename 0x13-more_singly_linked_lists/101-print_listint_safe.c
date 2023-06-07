#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
* print_listint_safe - Prints a list
* @head: Pointer to the head of the list
*
* Return: The nodes counted
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *nextNode = head;
const listint_t *nextTwoNode = head;
size_t nc_count = 0;

while (nextNode != NULL && nextTwoNode != NULL && nextTwoNode->next != NULL)
{
printf("[%p] %d\n", (void *) nextNode, nextNode->n);
nc_count++;
nextNode = nextNode->next;
nextTwoNode = nextTwoNode->next->next;

if (nextNode == nextTwoNode)
{
printf("-> [%p] %d\n", (void *) nextNode, nextNode->n);
break;
}
}

if (nextNode != nextTwoNode)
{
printf("Loop is not closed\n");
exit(98);
}

return (nc_count);
}
