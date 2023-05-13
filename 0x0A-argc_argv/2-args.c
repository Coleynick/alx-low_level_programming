#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it
 * @argv: Array of arguments
 * @argc: number of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int arg;
for (arg = 0; arg < argc; arg++)
printf("%s\n", argv[arg]);
return (0);
}
