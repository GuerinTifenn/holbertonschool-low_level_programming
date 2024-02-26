#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @size: character to check
 * Return: Always 0.
 */

void print_square(int size)
{
	int y;
	int x;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
				_putchar ('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
