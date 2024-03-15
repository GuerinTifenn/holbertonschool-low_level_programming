#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Who let the dog out !
 * @d: struct dog to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
