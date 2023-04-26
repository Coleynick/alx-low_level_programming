#include <stdio.h>
/**
 * print_alphabet - Prints lowercase alphabets
 *
 * @alpha: Variable for the lowercase alphabet
 *
 * Description: This prints lowercase alphabets using alpha.
 *
 * Return: Always 0 (succesful)
 */
void print_alphabet(char alpha)
{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
	putchar('\n');
}
