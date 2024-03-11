#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: resulting string dest
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j = 0;
	int len = 0;
	char *dest;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	dest = malloc(sizeof(char) * len);

	if (dest == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		dest[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		dest[j++] = s2[i];

	return (dest);
}
