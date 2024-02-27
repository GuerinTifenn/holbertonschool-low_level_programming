#include <stdio.h>
#include "main.h"

/**
  * _puts - prints a string
  * @str: a pointer to a char
  * Return: Always 0 (Success)
  */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
