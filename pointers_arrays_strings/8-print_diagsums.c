#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @size: size of array
 * @a: pointer of array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int offsum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		offsum = offsum + a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum);
	printf("%d\n", offsum);
}
