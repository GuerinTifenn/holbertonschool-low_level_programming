#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings up to a specified number of bytes
 * @s1: first string
 * @s2: second string
 * @n: the maximum number of bytes to concatenate from s2
 * Return: A pointer to the concatenated string, or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int i;
	unsigned int len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	dest = malloc(sizeof(char) * (len + 1));

	if (dest == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		dest[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		dest[len++] = s2[i];

	dest[len] = '\0';

	return (dest);
}
