#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - this function recive operator and select correct function
 * @s: operator
 * Return: int (*func)(int, int)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (ops[i].op)
	{
	if (*s == ops[i].op[0] && !s[i + 1])
			return (ops[i].f);
		i++;
	}


	return (NULL);
}
