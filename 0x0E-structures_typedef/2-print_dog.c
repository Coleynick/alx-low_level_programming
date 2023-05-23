#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Initializes a struct dog
 * @d: Pointer to the struct dog
 * Return: None
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	       printf("Name: (nil)\n");
	if (d->age == -1)
		printf("age: (nil)\n");
	if (d->owner == NULL)
		printf("owner: (nil)\n");
	else
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
