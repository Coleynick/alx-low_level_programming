#include <stdio.h>
/**
 * print_alphabet_x10 - Print the alphabets ten times in lowercase
 *
 * Description: This function prints the alphabet in lowercase, ten times,
 *              followed by a new line character, to the standard output.
 *Return: None
 */
void print_alphabet_x10(void)
{
char alpha;
int num;

for (num = 0; num <= 9; num++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
}
}
