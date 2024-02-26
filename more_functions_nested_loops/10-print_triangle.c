#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: character to check
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size > 0)
	{
		for (y = 1; y <= size; y++)
		{
			for (x = size; x > y; x--)
			{
				_putchar('-');
			}
			for (z = 0; z < y; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	else
	_putchar('\n');
	}
}
