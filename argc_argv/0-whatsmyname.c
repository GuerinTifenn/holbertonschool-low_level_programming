#include <stdio.h>

/**
 * main - prints its name.
 * @argc: count to argument
 * @argv: pointers to the arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	argc--;
	printf("%s\n", argv[0]);
	return (0);
}
