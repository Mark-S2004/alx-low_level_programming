#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
  * get_op_func - Select the correct function to perform the operation asked
  * @s: Operator passed as an argument to the program
  * Return: Pointer to function that corresponds to the passed argument
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

	i = 5;
	while (i--)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
	}

	return (NULL);
}
