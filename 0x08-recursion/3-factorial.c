int factorial(int n)
{
/**
 * int factorial(int n)- Returns the function of a given number.
 * @n: Is the given number.
 * 0 - If n is lower than 0, the function should return -1
 */
if (n < 0)
{
return (-1);
}
else
{
return (n * (n - 1));
}
}
