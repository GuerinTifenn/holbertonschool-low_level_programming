#include <stdio.h>
#include "main.h"

/**
  * print_array - prints n elements of an array of integer
  * @a: array pointer
  * @n: number of array
  * Return: Always 0 (Success)
  */

void print_array(int *a, int n)
{
	for (n = 0; n < 5; n++)
	{
		if (n < 4)
			printf("%d, ", a[n]);
		else
			printf("%d", a[n]);
	}
	_putchar('\n');
}
