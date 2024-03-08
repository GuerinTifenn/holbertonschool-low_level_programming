#include <stdio.h>
#include "main.h"

/**
 * _prime - finds a number is prime
 *
 * @i: number
 * @j: number to check
 *
 * Return: Always 0 (Success)
 */

int _prime(int i, int j)
{
	if (i == j)
		return (1);
	if (!(i % j))
		return (0);
	return (_prime(i, j + 1));
}
/**
 * is_prime_number - returns a number prime
 *
 * @n: number
 *
 * Return: 1 number prime
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_prime(n, 2));
}
