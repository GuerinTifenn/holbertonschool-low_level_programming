#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @b: constant byte
 * @s: the memory area pointed
 * @n: first bytes
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
