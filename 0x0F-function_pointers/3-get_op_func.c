#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - function selects the right function
 * @s: string to check for operator
 * Return: pointer to right function
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
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			break;
		i++;
	}
	return (ops[i].f);
}
