#include "main.h"

/**
 * flip_bits - returns  n of bits needed to flip to get from one n to another.
 * @n: first number
 * @m: second number
 * Return: the number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;
	unsigned long int bit = 1;

	while (bit != 0)
	{
		if (diff & bit)
			count++;
		bit <<= 1;
	}

	return (count);
}
