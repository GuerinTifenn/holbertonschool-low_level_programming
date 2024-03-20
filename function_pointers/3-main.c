#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: 0 on success, 98, 99, or 100 on failure
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
			return (99);
	}
	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", op_func(a, b));

	return (0);
}
