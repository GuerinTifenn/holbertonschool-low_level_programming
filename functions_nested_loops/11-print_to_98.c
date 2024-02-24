#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *@n: natural numbers
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d", n);
		if (n < 98)
		{
			_putchar (',');
			_putchar (' ');
		}
	}

	for (n = 0; n >= 98; n--)
	{
		printf("%d", n);
		if (n > 98)
		{
			_putchar (',');
			_putchar (' ');
		}
	}
	_putchar ('\n');
}
