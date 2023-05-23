#include "dog.h"

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog
 * @name: Name to assign
 * @age: Age to assign
 * @owner: Owner to assign
 *
 * Description: This function initializes the struct dog pointed to by 'd'
 *              with the provided 'name', 'age', and 'owner' values.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
