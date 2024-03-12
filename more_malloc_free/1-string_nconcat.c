#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings up to a specified number of bytes
 * @s1: first string
 * @s2: second string
 * @n: the maximum number of bytes to concatenate from s2
 * Return: A pointer to the concatenated string, or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int j = 0;
	int len = 0;
	char *dest;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	if (n >= strlen(s2))
		n = strlen(s2);

	dest = malloc(sizeof(char) * (len + 1));

	if (dest == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		dest[j++] = s1[i];

	for (i = 0; i < n; i++)
		dest[j++] = s2[i];

	dest[j] = '\0';

	return (dest);
}
