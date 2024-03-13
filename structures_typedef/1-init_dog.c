#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to the adress to initialize.
 * @name: dog's name'.
 * @age: dog's age'.
 * @owner: dog owner's
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
