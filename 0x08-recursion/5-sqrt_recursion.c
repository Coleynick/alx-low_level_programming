/**
 * _sqrt_recursion - Finds the square root
 * @n: the number to find the root of
 * Return: The square root or -1 if none
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (n);
}
else
return (_sqrt_helper(n, 1, n));
