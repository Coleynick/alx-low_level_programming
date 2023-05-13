#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the number of arguments passed into it
 * @argv: Array of arguments
 * @argc: number of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[0]);
num2 = atoi(argv[1]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
