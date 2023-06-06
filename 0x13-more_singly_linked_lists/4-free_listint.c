#include <stdlib.h>
#include "lists.h"

/**
* free_listint - Frees a listint_t list
* @head: Points to the head of the list
* Return: Nothing
*/
void free_listint(listint_t *head)
{
listint_t *list;

while (head != NULL)
{
list = head;
head = head->next;
free(list);
}
}
