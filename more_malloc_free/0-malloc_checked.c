#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: a int to initializes
 * Return: num or 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *num = malloc(b);

	if (num == NULL)
		exit(98);

	return (num);
}
