#include "main.h"
#include <string.h>
/**
 * _strcpy - copies the string pointed to by src
 * @dest: buffer
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

dest[i] = '\0';

return (dest);
}

