#include "lists.h"

/**
* find_listint_loop - Finds the loop in a linked list.
* @head: Pointer to the head of the list.
*
* Return: The node address where the loop starts,
*         or NULL if no loop.
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *nextNode, *nextTwoNode;

if (head == NULL || head->next == NULL)
return (NULL);

nextNode = head->next;
nextTwoNode = head->next->next;

while (nextTwoNode && nextTwoNode->next)
{
if (nextNode == nextTwoNode)
{
nextNode = head;
while (nextNode != nextTwoNode)
{
nextNode = nextNode->next;
nextTwoNode = nextTwoNode->next;
}
return (nextNode);
}
nextNode = nextNode->next;
nextTwoNode = nextTwoNode->next->next;
}

return (NULL);
}

