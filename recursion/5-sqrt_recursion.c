#include <stdio.h>
#include "main.h"

/**
 * _sqrt - find the square root
 * @n: The number to find the square root of.
 * @i: The root to be tested.
 * Return: returns value or -1 if n does not have
 */

int _sqrt(int n, int i)
{
	if ((i * i) == n)
		return (i);

	if (i == n / 2)
		return (-1);

	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to apply a natural square root
 * Return: square root of n or -1 if n does not have
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, i));
}
