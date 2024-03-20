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
	int num1, num2;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", operator(num1, num2));

	return (0);
}
