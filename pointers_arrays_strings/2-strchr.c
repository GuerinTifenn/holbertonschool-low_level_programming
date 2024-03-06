#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: first occurrence of the character
 * Return: NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		return (s + i);
		i++;
	}
	return ('\0');
}
