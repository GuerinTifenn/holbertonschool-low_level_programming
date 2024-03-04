#include <stdio.h>

/**
 * _strstr -  locates a substring
 * @haystack: the string
 * @needle: the first occurrence of the substring
 * Return: NULL if the character is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; *haystack != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
		}
		haystack++;
	}

	return (NULL);
}
