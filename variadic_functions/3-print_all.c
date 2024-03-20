#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character
 * @args: The va_list containing the argument
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer
 * @args: The va_list containing the argument
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float
 * @args: The va_list containing the argument
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string
 * @args: The va_list containing the argument
 */

void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char *format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *separator = "";

	fs_t types[] = {
		{'c', print_char},
		{'d', print_int},
		{'f', print_float},
		{'s', print_string},
		{NULL, NULL},
	};

	if (format == NULL)
		return;

	va_start(args, format);

	while (format[i] != '\0')
	{

		while (*types[j].spec)
		{
			if (*types[j].spec == format[i])
			{
				printf("%s", separator);
				types[j].print(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
