#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: structure to be initialized
 * @name: name's dog to be initialized
 * @age: age's dog to be initialized
 * @owner: owner's dog to be initialized
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
