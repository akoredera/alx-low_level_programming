#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - get operational function
 * @s: arithmetic operator sign
 * Return: result; otherwise null
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

	while (i < 5 && s != NULL)
	{
		if (*ops[i].op == *s && *(s + 1) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
