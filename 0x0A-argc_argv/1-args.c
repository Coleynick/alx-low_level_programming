#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it
 * @argv: Array of arguments
 * @argc: number of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
if (*argv[0] >= '0')
printf("%d\n", argc);
return (0);
}
