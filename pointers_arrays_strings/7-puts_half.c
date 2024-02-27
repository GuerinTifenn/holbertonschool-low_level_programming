#include <stdio.h>
#include "main.h"

/**
  * puts_half - prints a half string
  * @str: a pointer to a char
  * Return: Always 0 (Success)
  */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i > str[i] / 2)
		_putchar(str[i]);
	}
	_putchar('\n');
}
