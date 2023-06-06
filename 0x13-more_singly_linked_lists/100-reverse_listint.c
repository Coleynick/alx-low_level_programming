#include "lists.h"

/**
* reverse_listint - Reverses a linked list
* @head: Points to the head of the list
*
* Return: The first node pointer of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *prs = *head;
listint_t *next;

while (prs != NULL)
{
next = prs->next;
prs->next = prev;
prev = prs;
prs = next;
}

*head = prev;
return (*head);
}
