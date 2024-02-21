#include <stdio.h>
#include "main.h"

/**
 * print_sign - check the code.
 * @n: caracter
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 48)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 48)
	{
		return (0);
		_putchar(48);
	}
	else if (n < 48)
	{
		return (-1);
		_putchar(45);
	}
	return (0);
}
