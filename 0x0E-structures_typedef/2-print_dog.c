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
	 if (d == NULL)
        printf("nothing");

    printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");

    if (d->age != NULL)
        printf("Age: %.6f\n", *d->age);
    else
        printf("Age: (nil)\n");

    printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
