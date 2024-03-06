#include <stdio.h>
#include "main.h"

/**
  * _puts_recursion - prints a string in reverse
  * @s: a pointer to a char
  */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
