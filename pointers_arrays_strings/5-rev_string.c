#include <stdio.h>
#include "main.h"

/**
  * rev_string - reverses a string
  * @s: a pointer to a char
  * Return: Always 0 (Success)
  */

void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char temp;

	while (s[end] != '\0')
		end++;
	end--;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
