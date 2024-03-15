#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name'
 * @age: dog's age'
 * @owner: dog owner's
 * Return: The new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
		return (new_dog);
	}
	else
		return (NULL);
}
