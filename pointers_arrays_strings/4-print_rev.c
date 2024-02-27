#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _puts - prints a string
  * @str: a pointer to a char
  * Return: Always 0 (Success)
  */

void _puts(char *str)
{
	int i = 0;
	int j = _ strlen(str) - 1;

	while (i <= j)
	{
		putchar(str[j]);
		j--;
	}

	putchar('\n');
}
