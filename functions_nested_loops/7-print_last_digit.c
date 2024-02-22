#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - print last digit
 *@n: caracter
 * Return: value x.
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x = x * -1;
	}

	_putchar(x + '0');

	return (x);
}
