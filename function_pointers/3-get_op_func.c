#include "3-calc.h"

/**
 * get_op_func - selects function
 * @s: operator
 *
 * Return: function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	struct op ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (*s == ops[i].op[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
