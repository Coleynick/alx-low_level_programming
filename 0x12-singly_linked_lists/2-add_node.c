#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node - Joins a new node at the start of the list_t list.
* @head: Double pointer to the head of the list_t list.
* @str: The string to be duplicated and added to the list.
*
* Return: New node address or NULL if it fails.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
char *newDup = strdup(str);
size_t str_count = 0;
if (str == NULL)
return (NULL);

newDup = strdup(str);
if (newDup == NULL)
return (NULL);

newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
free(newDup);
return (NULL);
}

while (str[str_count])
str_count++;

newNode->str = newDup;
newNode->len = str_count;
newNode->next = *head;
*head = newNode;

return (newNode);
}
