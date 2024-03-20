#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct formatspecifier - Format specifier and join print function
 * @spec: The format specifier
 * @print: The joint print function for the specifier
*/

typedef struct formatspecifier
{
	char *spec;
	void (*print)(va_list);
} fs_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
