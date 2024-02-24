#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers to 98
 * @n: number to choose
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n > 98)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
	}
	_putchar ('\n');
}
