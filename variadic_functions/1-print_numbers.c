#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if(seperator == NULL)
		return;

	for (i = 0 ; i < n ; i++)
	{
		printf("%s%d", separator, va_arg(args, int));
	}
	va_end(args);

	printf("\n");
