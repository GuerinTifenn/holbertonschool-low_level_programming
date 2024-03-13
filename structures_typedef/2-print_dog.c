#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to the adress to print
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	if (d)
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
