#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: n memory bytes
 * @size: n type bits
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *num;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	num = malloc(size * nmemb);

	if (num == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		((char *)num)[i] = 0;

	return (num);
}
