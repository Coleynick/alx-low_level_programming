#include <stdlib.h>

/**
 * create_array - Creates an array of chars&initializes it with a specific char
 * @size: The size of the array
 * @c: The char to initialize the array with
 * Return: Pointer to the allocated array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
if (size == 0)
{
return (NULL);
}
arr = malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
