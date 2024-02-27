#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * print_rev - prints a string in reverse
  * @s: a pointer to a char
  * Return: Always 0 (Success)
  */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	for (; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
	return 0;
}
