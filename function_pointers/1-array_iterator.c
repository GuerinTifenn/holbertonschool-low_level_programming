#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function to each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: the function to apply to each element of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
