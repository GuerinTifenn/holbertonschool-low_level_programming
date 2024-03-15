#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strlen - returns the length of a string.
  * @s: a pointer to an int
  * Return: Always 0 (Success)
  */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	len++;

	return (len);
}

/**
  * *_strcpy - copies the string pointed
  * @dest: buffer pointed
  * @src: string pointed
  * Return: Always 0 (Success)
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name'
 * @age: dog's age'
 * @owner: dog owner's
 * Return: The new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	new_dog->age = age;
	_strcpy(new_dog->owner, owner);

	return (new_dog);
}
