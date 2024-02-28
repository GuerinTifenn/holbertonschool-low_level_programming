#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, d, n, digit;

	i = 0;
	d = 0;
	n = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			d++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
		}

		if (s[i + 1] < '0' || s[i + 1] > '9')
			break;

		i++;
	}

	if (d % 2)
		n = -n;

	return (n);
}
