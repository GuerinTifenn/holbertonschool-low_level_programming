#include "main.h"
#include <stdio.h>

/**
 * _memcpy - fills memory with a constant byte
 * @src: memory area source
 * @dest: memory area
 * @n: bytes copies
 * Return: pointer to the memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
