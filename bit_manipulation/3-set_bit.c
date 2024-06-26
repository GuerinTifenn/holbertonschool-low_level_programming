#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number whose bit needs to be set
 * @index: index of the bit to set, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(long int) * 8)
		return (-1);

	mask = mask << index;

	*n = *n | mask;
	return (1);
}
