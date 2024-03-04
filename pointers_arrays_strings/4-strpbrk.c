#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string
 * @accept: first occurrence of the character
 * Return: NULL if the character is not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
