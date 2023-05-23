#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents information about a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner of the dog
 *
 * Description: This structure holds data about a dog,
 * including their name, age, and owner.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct my_dog
{
        char *name;
        float age;
        char *owner;
} dog_t;

#endif
