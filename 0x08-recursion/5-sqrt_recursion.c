/**
 * _sqrt_recursion - Finds the square root
 * @n: the number to find the root of
 * @a: The current number being checked as a possible square root
 * Return: The square root or -1 if none
 */
int _sqrt_helper(int n, int a);
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (_sqrt_helper(n, 1));
}
}

/**
 * _sqrt_helper - Recursive helper function to calculate the square root
 * @n: The number to find the square root of
 * @a: The current number being checked as a possible square root
 * Return: The square root of 'n' or -1 if none
 */
int _sqrt_helper(int n, int a)
{
if (a * a > n)
{
return (-1);
}
else if (a * a == n)
{
return (a);
}
else
{
return (_sqrt_helper(n, a + 1));
}
}
