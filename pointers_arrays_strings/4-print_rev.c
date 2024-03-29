#include <stdio.h>
#include "main.h"

/**
  * print_rev - prints a string in reverse
  * @s: a pointer to a char
  * Return: Always 0 (Success)
  */

void print_rev(char *s)
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
