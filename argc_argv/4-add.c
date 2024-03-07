#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * positive_number - check if positive number
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 (Success)
 */

int positive_number(int argc, char *argv[])
{
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		int len = strlen(argv[i]);

		for (j = 0; j < len; j++)
		{
			if (!isdigit((int)argv[i][j]))
				return (1);
		}
	}
	return (0);
}

/**
  * main - adds positive numbers
  ** @argc: count to argument
  * @argv: pointers to the arguments
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	if (positive_number(argc, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		result = result + atoi(argv[i]);
	printf("%d\n", result);
	return (0);
}
