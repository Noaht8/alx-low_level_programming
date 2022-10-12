#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - Selects the right function to perform the
 * required operation
 * @s: operator passed as argument to the program
 * Return: Pointer to the Right Function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a;

	a = 0;
	while (a < 5 && s != NULL)
	{
		if (s[0] == *(ops[a].op))
		{
			return (ops[a].f);
		}
		a++;
	}
	return (NULL);
}
