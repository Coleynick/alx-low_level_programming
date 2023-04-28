#include <stdio.h>
#include <math.h>

int main(void)
{
long num = 612852475143;
long largest_factor = 1;
long factor = 2;

while (num > 1)
{
if (num % factor == 0)
{
largest_factor = factor;
num /= factor;
}
else
{
factor++;
if (factor > sqrt(num))
{
largest_factor = num;
break;
}
}
}

printf("%ld\n", largest_factor);
return 0;
}
