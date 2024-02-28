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
	int i;

	for (i = 0; i < n; i++)
	{
	if (n <= 1)
		printf("%d\n", a[i]);
	else if (i < n - 1)
		printf("%d, ", a[i]);
	else
		printf("%d\n", a[i]);
	}
}
