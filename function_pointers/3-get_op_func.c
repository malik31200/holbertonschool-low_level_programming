#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - Function that performs simple operation
 * @s: is operator passed as argument
 * Return: a pointer correspond to the operator
 *         or NULL if a operator is not + - * / %
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
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
