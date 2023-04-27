#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (sucess)
*
*/
int main(void)
{
int first = 1, second = 2, next;
int count = 2;

printf("%d, %d", first, second);

while (count < 98)
{
next = first + second;
printf(", %d", next);

first = second;
second = next;
count++;
}

printf("\n");

return (0);
}
