#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a provided function.
 * @name: Pointer to the name string.
 * @f: Function pointer to the printing function.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
