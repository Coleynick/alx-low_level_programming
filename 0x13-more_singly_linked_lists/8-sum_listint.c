#include "lists.h"
#include <stdlib.h>
/**
* sum_listint - Returns the sum of all the data (n) of a listint_t linked list
* @head: Points to the head of the linked list.
*
* Return: Sum
*/
int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
