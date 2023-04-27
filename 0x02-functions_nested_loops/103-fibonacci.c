#include <stdio.h>
/**
* main - Always the entry point
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
int a = 1;
int b = 2;
int c;
int sum = 2;

while (b <= 4000000)
{
c = a + b;
a = b;
b = c;
if (b % 2 == 0)
{
sum += b;
}
}

printf("%d\n", sum);

return (0);
}
