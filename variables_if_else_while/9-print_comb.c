#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i < 9)
		{
		putchar (i + '0');
		putchar(',');
		putchar(' ');
		}
		else
		putchar(i + '0');
	}
	return (0);
}
