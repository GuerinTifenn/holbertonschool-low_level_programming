#include "main.h"

/**
 * clear_bit - clears the value of a bit to 0 at a given index.
 * @n: pointer to the number whose bit needs to be cleared
 * @index: index of the bit to clear, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1;

	mask = mask << index;

	*n = *n & (~mask);

	return (1);
}
