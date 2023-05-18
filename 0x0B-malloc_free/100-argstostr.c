#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 * Return: Pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, len = 0, total_len = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
total_len++;
}
total_len++;
}
str = malloc((total_len + 1) * sizeof(char));
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[len++] = av[i][j];
}
str[len++] = '\n';
}
str[len] = '\0';
return (str);
}
