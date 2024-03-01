#include <stdio.h>

/**
 * *cap_string - capitalizes all words of a string
 * @s: string to change
 * subtract 32, which is the difference between the ASCII values 'A' and 'a'
 * Return: string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' && s[i - 1] == ' ')
		{
			s[i] = s[i] - 32;
		}   
	}   
	return (s);
}