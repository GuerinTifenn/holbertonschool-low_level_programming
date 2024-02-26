#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_line - checks for uppercase character.
 * @n: character to check
 * Return: Always 0.
 */

void print_line(int n)
{

	if (n > 0)
	{
		_putchar('_' * n);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
