#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints the numbers from 1 to 100 for numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: Always 0.
 */
int fizz_buzz(int i)
{
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0 && i % 15 != 0)
			printf("%d", i);
		else if (i % 3 == 0 && i % 15 != 0)
			printf("Fizz");
		else if (i % 5 == 0 && i % 15 != 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		if (i < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
