#include <stdio.h>
#include <stdlib.h>

void multiply(char *num1, char *num2);

/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: Array of command-line arguments
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
char *num1, *num2;
if (argc != 3)
{
printf("Error\n");
return (98);
}
num1 = argv[1];
num2 = argv[2];
multiply(num1, num2);
return (0);
}

/**
* multiply - Multiplies two positive numbers
* @num1: The first number to multiply
* @num2: The second number to multiply
*/
void multiply(char *num1, char *num2)
{
int carry = 0, k, j, digit1, digit2, index;
int temp, i, *result, len1 = 0, len2 = 0;
for (i = 0; num1[i] != '\0'; i++)
{
if (num1[i] < '0' || num1[i] > '9')
{
printf("Error\n");
exit(98);
}
}

for (i = 0; num2[i] != '\0'; i++)
{
if (num2[i] < '0' || num2[i] > '9')
{
printf("Error\n");
exit(98);
}
}
while (num1[len1] != '\0')
len1++;

while (num2[len2] != '\0')
len2++;

result = malloc(sizeof(int) * (len1 + len2));
if (result == NULL)
{
printf("Error\n");
exit(98);
}

for (i = 0; i < len1 + len2; i++)
result[i] = 0;
for (i = len1 - 1; i >= 0; i--)
{
digit1 = num1[i] - '0';
k = len1 - i - 1;
for (j = len2 - 1; j >= 0; j--)
{
digit2 = num2[j] - '0';
temp = digit1 *digit2 + result[k] + carry;
result[k] = temp % 10;
carry = temp / 10;
k++;
}

if (carry > 0)
{
result[k] += carry;
carry = 0;
}
}
index = len1 + len2 - 1;
while (index >= 0 && result[index] == 0)
index--;

if (index < 0)
{
printf("0\n");
}
else
{
while (index >= 0)
{
printf("%d", result[index]);
index--;
}
printf("\n");
}

free(result);
}
