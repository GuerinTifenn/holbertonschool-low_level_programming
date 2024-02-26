#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: character to check
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int y;
	int x;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			_putchar (' ');
		_putchar('\\');
		_putchar('\n');
	}
}
