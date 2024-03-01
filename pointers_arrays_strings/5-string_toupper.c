#include <stdio.h>

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to change
 * subtract 32, which is the difference between the ASCII values 'A' and 'a'
 * Return: string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
