#include "holberton.h"

/**
 * get_op_func - selects the correct function to perform the operation.
 * @s: the operator passed as argument to the program
 *
 * Return: pointer to the correct function or null if invalid operator.
 */
op_func get_op_func(const char *s)
{
	int i;
	op_t ops[] = {
		{"c", op_print_char},
		{"s", op_print_string},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op && _strcmp(ops[i].op, s) != 0)
		i++;
	return (ops[i].f);
}