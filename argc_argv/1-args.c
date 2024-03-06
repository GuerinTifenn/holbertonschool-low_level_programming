#include <stdio.h>

/**
 * main - prints the number of arguments passed into i
 * @args: count to argument
 * @argv: pointers to the arguments
 * Return: Always 0 (Success)
 */

int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
