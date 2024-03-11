#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * @c: a char to initializes
 * @size: the size of the array
 *
 * Return: NULL if size = 0 or it fails
 */

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	if (size == 0)
		return (NULL);

	string = malloc(sizeof(char) * size);

	if (string == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		string[i] = c;

	return (string);
}
