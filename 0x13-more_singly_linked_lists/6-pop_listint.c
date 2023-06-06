#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - Deletes the first node of a listint_t linked list
* @head: Double pointer to the head of the list
*
* Return: The first node's data or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *tempHead;
int head_data;

if (*head == NULL)
return (0);

tempHead = *head;
head_data = tempHead->n;
*head = (*head)->next;
free(tempHead);

return (head_data);
}
