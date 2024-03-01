#include <stdio.h>

/**
  * reverse_array - reverses the content of an array of integers
  * @a: a pointer to a int
  * @n: number of elements of the array
  */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
