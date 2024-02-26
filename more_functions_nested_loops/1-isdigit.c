#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - checks for uppercase character.
 *@c: character to check
 * Return: Always 0.
 */

int _isdigit(int c)
{

	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
