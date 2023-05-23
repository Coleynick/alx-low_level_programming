#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 *
 * Return: Pointer to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    int name_len, owner_len;

    name_len = strlen(name);
    owner_len = strlen(owner);

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    new_dog->name = malloc(name_len + 1);
    new_dog->owner = malloc(owner_len + 1);
    if (new_dog->name == NULL || new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog->owner);
        free(new_dog);
        return NULL;
    }

    strcpy(new_dog->name, name);
    strcpy(new_dog->owner, owner);

    new_dog->age = age;

    return new_dog;
}
