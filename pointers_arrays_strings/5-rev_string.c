#include <stdio.h>
#include "main.h"

/**
  * rev_string - reverses a string
  * @s: a pointer to a char
  * Return: Always 0 (Success)
  */

void rev_string(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	len++;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
