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
	int i = 0;
	int j = 0;
	int result;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		result = i * j;

		printf("%d\n", result);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
