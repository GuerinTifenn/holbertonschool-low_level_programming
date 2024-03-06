#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers.
 * @argc: count to argument
 * @argv: pointers to the arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc < 3)
	{
		printf("Error\n");
		return 1;
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	result = i * j;

	printf("%d\n", result);

	return 0;
}
