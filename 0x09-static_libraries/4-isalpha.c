#include <ctype.h>

/**
 * _isalpha - checks for an alphabetic character
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	return (1);
	else
	return (0);
}
