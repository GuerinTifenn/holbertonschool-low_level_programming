#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy a string and returns pointer to a allocated space in memory
 * @str: the string to duplicate
 * Return: NULL if str = 0 or if insufficient memory
 */

char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *dest;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	len++;

	dest = malloc(len + 1);

	if (dest == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
	dest[i] = str[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}
