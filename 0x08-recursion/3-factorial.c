/**
 * factorial - Returns the function of a given number.
 * @n: Represents the given number.
 * Return: The factorial of @n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
