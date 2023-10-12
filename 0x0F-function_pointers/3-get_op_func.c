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
	/* struct opts of struct op_t */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int x = 0;

	while (x < 5)
	{
		if (*s == *ops[x].op)
		{
			return (ops[x].f);
		}
		x++;
	}

	return (NULL);
}
