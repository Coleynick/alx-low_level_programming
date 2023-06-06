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
int loopDetected = 0;

nextNode = nextTwoNode = head;
while (nextNode && nextTwoNode && nextTwoNode->next)
{
nextNode = nextNode->next;
nextTwoNode = nextTwoNode->next->next;
if (nextNode == nextTwoNode)
{
loopDetected = 1;
break;
}
}
if (loopDetected)
{
nextNode = head;
while (nextNode != nextTwoNode)
{
printf("[%p] %d\n", (void *)nextNode, nextNode->n);
nc_count++;
nextNode = nextNode->next;
nextTwoNode = nextTwoNode->next;
}
printf("[%p] %d\n", (void *)nextNode, nextNode->n);
nc_count++;
printf("-> [%p] %d\n", (void *)nextTwoNode, nextTwoNode->n);
nc_count++;
}
else
{
while (head != NULL)
{
nc_count += printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
return (nc_count);
}
