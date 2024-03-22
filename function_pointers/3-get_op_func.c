#include <stdio.h>
#include "3-calc.h"

/**
  * get_op_func - Selects the correct function to perform the operation asked
  * @s: pointer to string
  * Return: result of the operation
  */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].f != NULL)
	{
		if (*ops[i].f == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
