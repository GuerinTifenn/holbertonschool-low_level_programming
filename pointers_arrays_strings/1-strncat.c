#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes limits
 * Return: resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
