#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: The input string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
size_t length = strlen(str);
char *duplicate;
if (str == NULL)
{
return (NULL);
}
duplicate = malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
{
return (NULL);
}
strcpy(duplicate, str);
return (duplicate);
}
