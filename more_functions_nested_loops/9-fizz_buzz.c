#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 for 3 and 5 print FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

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
