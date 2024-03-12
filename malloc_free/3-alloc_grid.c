#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array on X
 * @height: height of array on Y
 *
 * Return: num or NULL if width, height is 0 or negative or on failure
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **num;

	if (width <= 0 || height <= 0)
		return (NULL);

	num = malloc(sizeof(int *) * height);
	if (num == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		num[i] = malloc(sizeof(int) * width);
		if (num[i] == NULL)
		{
			for (; i >= 0; i--)
				free(num[i]);
			free(num);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			num[i][j] = 0;
	}

	return (num);
}
