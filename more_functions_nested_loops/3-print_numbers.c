#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9
 * @i: number
 * Return: Always 0.
 */

void print_numbers(int i)
{

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	 _putchar('\n');
}
