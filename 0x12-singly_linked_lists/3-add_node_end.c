#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - Adds a new node at the end of a list_t list.
* @head: Double pointer to the head of the list_t list.
* @str: The string to be duplicated and added to the list.
*
* Return: Address of the new element, or NULL if it fails.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode, *temp;
char *newDup = strdup(str);
size_t str_count = 0;

if (str == NULL || newDup == NULL)
{
return (NULL);
}
else
{
while (str[str_count])
str_count++;
}
newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
free(newDup);
return (NULL);
}
newNode->str = newDup;
newNode->len = str_count;
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = newNode;
}
return (newNode);
}
