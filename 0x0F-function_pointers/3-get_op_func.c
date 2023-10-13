#include "3-calc.h"

/**
 * get_op_func - get the appropriate function for an operator
 *
 * @s: the operator string
 *
 * Return: pointer to the appropriate function,
 * (NULL) if no match is found
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
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
