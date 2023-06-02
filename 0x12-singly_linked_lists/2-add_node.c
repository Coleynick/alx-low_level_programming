#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node - Joins a new node at the start of the list_t list.
* @head: Double pointer to the head of the list_t list.
* @str: The string to be duplicated and added to the list.
*
* Return: Address of added element, or NULL if it fails.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
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
if (newNode->str == NULL)
{
free(newNode);
free(newDup);
return (NULL);
}
newNode->str = newDup;
newNode->len = str_count;
newNode->next = *head;
*head = newNode;
return (newNode);
}
