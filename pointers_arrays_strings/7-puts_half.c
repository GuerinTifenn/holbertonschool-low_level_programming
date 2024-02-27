#include <stdio.h>
#include "main.h"

/**
  * puts_half - prints a half string
  * @str: a pointer to a char
  * Return: Always 0 (Success)
  */

void puts_half(char *str)
{
	int len, i, start;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2 + 1;
	}

	for (i = start; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
