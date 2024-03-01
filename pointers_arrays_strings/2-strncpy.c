#include <stdio.h>
#include "main.h"

/**
  * *_strcpy - copies the string pointed
  * @dest: buffer pointed
  * @src: string pointed
  * @n: bytes limit
  * Return: Always 0 (Success)
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	for ( ; i < n ; i++)
	dest[i] = '\0';

	return (dest);
}
