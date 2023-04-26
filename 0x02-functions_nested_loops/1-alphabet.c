#include <stdio.h>
/**
 * print_alphabet - Prints lowercase alphabets
 *
 * alpha - Variable for the lowercase alphabet
 *
 * Description - This function prints a lowercase alphabet followed by a new line character.
 *
 * Return: Always 0 (succesful)
 */
void print_alphabet(char alpha)
{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
	putchar('\n');
}
