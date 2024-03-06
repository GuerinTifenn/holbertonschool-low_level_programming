#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: first occurrence of the character
 * Return: NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
		if (*s == 0)
			return (NULL);
	}
	return ('\0');
}
