#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
size_t length_s1 = strlen(s1);
size_t length_s2 = strlen(s2);
char *concatenated;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
concatenated = malloc((length_s1 + length_s2 + 1) * sizeof(char));
if (concatenated == NULL)
{
return (NULL);
}
strcpy(concatenated, s1);
strcat(concatenated, s2);
return (concatenated);
}
