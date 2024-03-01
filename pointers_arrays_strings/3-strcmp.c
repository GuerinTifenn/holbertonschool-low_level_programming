#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: resulting string dest
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
